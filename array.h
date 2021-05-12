#pragma once

struct array
{
	T **data;
	int rows;
  int cols;
};

struct array *init_array( struct array *t, int rows, int cols );
void uninit_array( struct array *t );

int get_rows( struct array *t );
int get_cols( struct array *t );

T get( struct array *t, int row, int col );
struct array *set( struct array *t, int row, int col, T e );







