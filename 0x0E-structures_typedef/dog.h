#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif