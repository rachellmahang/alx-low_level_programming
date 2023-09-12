#ifndef dog_H
#define dog_H
/**
 * struct dog - is the function
 * @name: is the element
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: as mentioned
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

{
	struct dog my_dog;

	my_dog.name = "Fido";
	my_dog.age = 4.5;
	my_dog.owner = "Alice";

	return (0);
}
