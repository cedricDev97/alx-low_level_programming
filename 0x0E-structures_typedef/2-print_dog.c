#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints dog data
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else
{
if (d->name == 0)
printf("Name: (nil)\n");
else
printf("name: %s\n", d->name);
printf("Age: %f\n", d->age);

if (d->owner == 0)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}
