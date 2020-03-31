  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char * argv[]) 

{


	char *texts[1]={"hacker"};
    
	char *value=texts[atoi(argv[1])];
	int temporal=4;
	int magnitude=strlen(value);

	char string[magnitude]; 
	int i,counter;
	char letter;
    printf("Welcome \nHangman\nGame \n");
	printf("the word contains \n[%d]",magnitude);

	for(i=0;i<magnitude;i++)
		string[i]='*';

	string[magnitude]='\0'; 
	printf("%s\n",string);
	while(temporal>0)
	{
	
		
	

		printf("try again %d \n",temporal);

		if(temporal==0)
			printf("LOSER\n");
	}

}