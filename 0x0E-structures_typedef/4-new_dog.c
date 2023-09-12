#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returnin the length of a string
* @s: the string to be looked
*
* Return: the length of the string
*/

int _strlen(char *s)
{
	int bk;

	bk = 0;

	while (s[bk] != '\0')

	{

		bk++;

	}

	return (bk);

}

/**
* *_strcpy -  string pointed to by src
* including the terminating null byte (\0)
* the buffer pointed to by dest
* @dest: the end point
* @src: the copied full string
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int bk, dim;

	dim = 0;

	while (src[dim] != '\0')

	{

		dim++;

	}


	for (bk = 0; bk < dim; bk++)

	{

		dest[bk] = src[bk];

	}

	dest[bk] = '\0';


	return (dest);

}

/**
* new_dog - creates a new dog
* @name: pointing to string of character
* @age: dogs age in descimal
* @owner: pointer inpush
*
* Return:  NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int dim31, dim22;


	dim31 = _strlen(name);

	dim22 = _strlen(owner);


	dog = malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);



	dog->name = malloc(sizeof(char) * (dim31 + 1));

	if (dog->name == NULL)

	{

		free(dog);

		return (NULL);

	}

	dog->owner = malloc(sizeof(char) * (dim22 + 1));

	if (dog->owner == NULL)

	{

		free(dog);

		free(dog->name);

		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);

}
