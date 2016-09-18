/*
 * main.c
 *
 *  Created on: 2016年9月18日
 *      Author: Bill
 */

#include <stdio.h>

int main()
{
	char input[200] = {0};
	char output[200] = {0};
	char sub_str[8] = "fjxmlhx";
	char target_str[10] = "marshtomp";
	int str_len = 0;
	int i = 0;
	int out_index = 0;
	int target_index = 0;
	int replace_start = -1;
	while (gets(input) != EOF) {
		str_len = strlen(input);
		for (i = 0;i < str_len; i++) {
			char l_c = input[i];
			char o_c = input[i];
			if (l_c >= 65 && l_c <= 90) {
				l_c += 32;
			}
			if (l_c == target_str[target_index]) {
				if (replace_start < 0) {
					replace_start = out_index;
				}
				target_index++;
				if (target_index > 8) {
					int j = 0;
					for (j = 0;j < 7; j++) {
						output[replace_start + j] = sub_str[j];
					}
					target_index = 0;
					out_index = replace_start + 7;
					replace_start = -1;
					continue;
				}
			} else {
				replace_start = -1;
				target_index = 0;
			}
			output[out_index] = o_c;
			out_index++;
		}
		printf("%s\n", output);
		out_index = 0;
		replace_start = -1;
		target_index = 0;
		memset(input, 0, 200);
		memset(output, 0, 200);
	}
	return 0;
}
