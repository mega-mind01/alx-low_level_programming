#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - checks length of string
 *
 * @s: string input
 *
 * @Return: legth
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (0);
}
/**
 * _strcpy - copies a string input
 *
 * @dest: holder variable
 * @src: source file
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: string name of dog
 * @age: age of dog
 * @owner: string name of owner
 *
 * Return: pointer address to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameL, ownerL;

	nameL =_strlen(name);
	ownerL = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nameL + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ownerL + 1));
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
