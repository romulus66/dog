//	Exercise 16: Structs And Pointers To Them
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->weight = weight;
  who->height = height;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  free(who->name);
  free(who);
}


void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}



int main(int argc, char *argv[])
{
  // make two people structures
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *franc = Person_create("Franc Blank", 20, 72, 180);

  // print them out and where they are in memory
  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);
  printf("Franc is at memory location %p:\n", franc);
  Person_print(franc);

  // make everyone age 20 years and print them again
  joe->age +=20;
  joe->height -=2;
  joe->weight +=40;
  Person_print(joe);

  franc->age +=20;
  franc->weight +=20;
  Person_print(franc);

  //destroy them both so we clean up
  Person_destroy(joe);
  Person_destroy(franc);

  return 0;

}





