// Exercise 12: If, Else-If, Else
#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  if(argc == 1){
	 printf("You only have one argument. You suck.\n");
  }
  else if(argc > 1 && argc < 4){
  		printf("Here's your arguments:\n");
		for (i = 1; i < argc; i++)
		  {
		    printf("%s ", argv[i]);
		  }
  }
  else {
	 printf("You have too many arguments. You suck.\n");
	 printf("Last argument is %s.\n", argv[argc -1]);

  }

	return 0;
}