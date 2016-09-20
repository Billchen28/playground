/*
 * main.c
 *
 *  Created on: 2016年9月18日
 *      Author: Bill
 */

#include <stdio.h>
#include <stdlib.h>

void slove(const char *input)
{
    char output[200] = {0};
    char sub_str[8] = "fjxmlhx";
    char target_str[10] = "marshtomp";
    int str_len = 0;
    int i = 0;
    int out_index = 0;
    int target_index = 0;
    int replace_start = -1;
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
    printf("%s", output);
}

int main()
{
    char input[200] = {0};
    char *input_list[10240] = {NULL};
    int input_count = 0;
    int i = 0;
    while (fgets(input, 200, stdin) != NULL) {
        int len = strlen(input) + 1;
        input_list[input_count] = (char*)malloc(sizeof(char) * len);
        memcpy(input_list[input_count], input, len);
        input_count++;
    }
    for (i = 0; i < input_count;i++) {
        slove(input_list[i]);
        free(input_list[i]);
    }
    return 0;
}
