//Q.2 Frequency Counter
//Extend the program to count the frequency of each character in a given string.
//Example:
//
//Input: Enter any string: development
//Output:
//Frequency of each letter:
//d => 1
//e => 2
//v => 1
//l => 1
//o => 1
//p => 1
//m => 1
//n => 1
//t => 1

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[50];
	printf("Enter a string of English letters : ");
	scanf("%s",str);
	int i;
	int frq[26]={0};
	for(i=0;str[i]!='\0';i++)
	{
		frq[str[i]-'a']=frq[str[i]-'a']+1;
	}
	printf("The frequency of characters is -\n");
	for(i=0;i<26;i++)
	{
		if(frq[i]!=0)
		{
			char char_='a'+i;
			printf("%c= %d\n",char_,frq[i]);
		}
	}
    getch();
}
