//Q.1 Pelindrome Checker
//Develop a program that checks whether a given string is a palindrome or not without using string
//functions.
//Example:
//Input: Enter any string: nayan
//Output: The given string is a Palindrome.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[50];
	char str2[50];
	printf("Enter a String name:- ");
	scanf("%s",str);
	strcpy(str2,str);
	strrev(str2);
	if(strcmp(str,str2)==0)
	{
		printf("This is a palidrome..");
	}
	else
	{
		printf("not a palidrome..");
	}
	
	
	
	
	getch();
}
