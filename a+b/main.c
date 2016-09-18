/*
 * main.c
 *
 *  Created on: 2016年9月18日
 *      Author: Bill
 */

#include <stdio.h>

int main()
{
	int a,b;
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}
