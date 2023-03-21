#ifndef _OBJECT_LIKE_MACRO_
#define _OBJECT_LIKE_MACRO_
/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog with name, age, and owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

}
dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
