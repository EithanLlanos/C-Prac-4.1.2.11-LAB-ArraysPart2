//Scenario
//Write a program that fills a 26 - element array with letters from "a" to "z".Try not to use the int type, but only the char type for variables.
//When the array is filled, the program should print all the characters in reverse order, then print only the array elements that constitute the word "great".
//Figure out the simplest way to find out which elements should be used.
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Expected output
//
//z
//y
//x
//w
//v
//u
//t
//s
//r
//q
//p
//o
//n
//m
//l
//k
//j
//i
//h
//g
//f
//e
//d
//c
//b
//great
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	char v[26];
	for (char i = 'a'; i <= 'z';i++) {
		v[i - 'a'] = i;
		printf("%c\n", i);
	}
	printf("%c%c%c%c%c", v[6], v[17], v[4], v[0], v[19]);
	return 0;
}