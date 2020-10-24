/*
This code aims to take a string input from the user, then print it backwards.

Speedrun Stats:
Time:				7.03 min
Internet Searches:	3
Borrowed Code:		0

Reflection:
This was the first time I have done pure coding in C in around a year.  I had to look
up a couple basic things to refresh my memory like how to scan a string from user input
as well as what the null character is represented by.  It was a pretty basic assignment,
and could probably be done in less than a minute if I werent as rusty, but I am sure after
doing a few more of these types of challenges I can get my times down.  The biggest hold is
"sanity check" testing, like running print statements to make sure the code is on track.
This eats valuable time.  I am overall happy with this one and am excited to move to another
more challenging task.
*/

#include <stdio.h>
#define SIZE 100

int main(void){
	char input[SIZE];
	printf("Please type a string of characters: ");
	scanf("%[^\n]%*c",input);
	
	int i=0;
	while(input[i]!='\0')
		i++;
	while(i!=-1){
		printf("%c",input[i]);
		i--;
	}
}
