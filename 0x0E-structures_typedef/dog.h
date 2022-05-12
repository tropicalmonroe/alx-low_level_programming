#ifndef DOG_FILE
#define DOG_FILE
/**
 * struct dog - structure doggy
 * @name: dog's char 
 * @age: dog's float age
 * @owner: dog's owner char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *nme, float age, char *owner);

void free_dog(dog_t *d);

#endif
