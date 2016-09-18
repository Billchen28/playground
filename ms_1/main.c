/*
 * main.c
 *
 *  Created on: 2016年9月18日
 *      Author: Bill
 */

#include <stdio.h>

typedef struct
{
	int start;
	int end;
}event_t, *event;

event new_event()
{
	event e = (event)malloc(sizeof(event_t));
	e->end = 0;
	e->start = 0;
	return e;
}

event cal(event a, int a_size, event b, b_size)
{
	event ret = NULL;
	if (a == NULL || b == NULL) {
		return ret;
	}
	int i = 0;
	event a_e = NULL;
	for (i = 0;i < a_size;i++) {
		a_e = a[i];
	}
	return ret;
}

int main()
{
	return 0;
}
