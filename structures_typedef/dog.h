#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - a furry four legged creature
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A dog is the only thing on earth that loves you more than you
 *  love yourself
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* dog_t *new_dog(char *name, float age, char *owner);
 * void free_dog(dog_t *d);
 */

#endif /* __DOG_H__ */
