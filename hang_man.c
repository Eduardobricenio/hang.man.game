//jesus Uicab  
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
		counter=0;
		printf("\nPut a letter: ");
		scanf(" %c",&letter);
		for(i=0;i<magnitude;i++) 
		{
	
			if(letter==string[i]) 
			{
				temporal--;
				printf("Good, dumb\n");
				counter=1;
				break;

			}
			if(letter==value[i]) 
			{
				string[i]=value[i];
				counter++; 
			}

			if(string[i]!=value[i])
			{
				string[i]='*'; 

			}
			
		}

		if(counter==0)
		{
			temporal--;
			printf("try again\n");

		}

		printf("%s\t",string); 



		if(strcmp(string,value)==0)
		{
			printf("WINNER\n");
			break;
		}


		printf("try again %d \n",temporal);

		if(temporal==0)
			printf("LOSER\n");
	}

}