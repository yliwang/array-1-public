#include <stdio.h>
#include <assert.h>
#include <malloc.h>


#include "array.h"

void uninit_array( struct array *t )
{
  assert( t->rows > 0 );
  assert( t->cols > 0 );
  assert( t->data != NULL );
  
  for( int i=0; i<t->rows; i++ ) {
	  free( t->data[i] );
  }
  free(t->data);
  
}
