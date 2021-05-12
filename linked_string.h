#pragma once

struct node
{
	char c;
	struct node *next;
};

struct linked_string
{
	struct node *head;
	struct node *tail;
	int len;
};

/* function declarations */
struct linked_string *create_string();
void destroy_string(struct linked_string *s);
struct linked_string *init_string(struct linked_string *s);
void uninit_string(struct linked_string *s);
struct node *create_node(char c);
struct linked_string *add_tail(struct linked_string *t, char c);
struct linked_string clone(struct linked_string *s);
struct linked_string *concate(struct linked_string *t, struct linked_string *s);
bool is_equal(struct linked_string *s, struct linked_string *t);
struct node *get(struct linked_string *t, int i);
struct linked_string substring(struct linked_string *s, int i, int l);

int index_of(struct linked_string *s, struct linked_string *t);
