#include <stdio.h>

#include "linked_string.h"

struct string *c_to_string(struct linked_string *s, char *c_str)
{
	int i, len = strlen(c_str);

	if (len == 0) return NULL;

	for (i = 0; i < len; i++) {
		add_tail(s, c_str[i]);
	}

	return s;
}


void main()
{
	struct linked_string txt;
	struct linked_string pat;
	int index;

	init_string(&txt);
	init_string(&pat);

	c_to_string(&txt, "ABC ABCDAB ABCDABCDABDE");
	c_to_string(&pat, "ABCDABD");

	index = index_of(&txt, &pat);
	printf("index:%d\n", index);

	 /* other test code */


	uninit_string(&txt);
	uninit_string(&pat);


}
