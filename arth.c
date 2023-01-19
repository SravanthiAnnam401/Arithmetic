#include<stdio.h>
#include<add.h>
#include<mul.h>
#include<div.h>
#include<sub.h>

int main()

{
	printf("Addition of 20 and 30 is: %d\n", add(20, 30));
	printf("Multiplication of 20 and 30 is: %d\n", mul(20, 30));
	printf("Subtraction of 20 and 30 is: %d\n", sub(20, 30));
	printf("Division of 20 and 30 is: %d\n", div(20, 30));
	return 0;
}
