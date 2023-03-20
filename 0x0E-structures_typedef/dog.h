#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 */

typedef struct god dog_t;

/**
 * struct dog - struct that stores some information of a god
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct god
{
	char *name;
	float age;
	char *ower;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void fre_dog(dog_t *d);

#endif
