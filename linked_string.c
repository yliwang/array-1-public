#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "linked_string.h"

struct linked_string *create_string()
{
	struct linked_string *s;

	s = (struct linked_string *)malloc(sizeof(struct linked_string));

	return init_string(s );
}

void destroy_string(struct linked_string *s)
{
	uninit_string(s);

	free(s);
}


struct linked_string *init_string(struct linked_string *s)
{
	s->head = NULL;
	s->tail = NULL;
	s->len = 0;

	return s;
}

void uninit_string(struct linked_string *s)
{
	struct node *q, *p = s->head;

	while (p != NULL) {
		q = p;
		p = p->next;
		free(q);
	}
}

struct node *create_node( char c)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));

	p->c = c;
	p->next = NULL;

	return p;
}

/* other functions */
