/* Copyright (c) 2024
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>

int main(void)
{
	
    while(1){
        printf("Hello World! %s\n", CONFIG_BOARD);
        k_msleep(1000);
    }
  
	return 0;
}
