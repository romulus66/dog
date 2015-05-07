// Exercise 11: While-Loop And Boolean Expressions
#include <stdio.h>

int main(int argc, char *argv[])
{
      // go through each string in argv
	int i =0;
	while (i < argc) {
	 printf ("arg %d: %s\n", i, argv[i]);
	 i++;
  }

  // let's make our own array of strings
  char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

	int num_states = 4;
	i = 0; //why?

	while (i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	// copy data from argv to states
	int j =0;
	while (j < argc) {
		states[j] = argv[j];
	 	j++;
  }

  // print new array
	int k = 0;
	while (k < argc) {
		printf("states[%i] is %s\n", k, states[k]);
	 	k++;
 }


	return 0;
}
