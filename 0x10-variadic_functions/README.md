		variadic function project


	Introduction

	in this seccion we'll see more about source C and any tools helpful for argument indefined.


	Documentation.

	###Task 1. 0. Beauty is variable, ugliness is constant mandatory
	Write a function that returns the sum of all its parameters.

	Prototype: int sum_them_all(const unsigned int n, ...);
	If n == 0, return 0

	they provides us a main

	#include <stdio.h>
	#include "variadic_functions.h"

	/**
	 * main - check the code for Holberton School students.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    int sum;

	    sum = sum_them_all(2, 98, 1024);
	    printf("%d\n", sum);
	    sum = sum_them_all(4, 98, 1024, 402, -1024);
	    printf("%d\n", sum);    
	    return (0);
	}



	==========================================================================================================
	
