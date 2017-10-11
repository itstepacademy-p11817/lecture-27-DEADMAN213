#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include <string.h>

enum typeTittle { giraffe = 0, elephant, dog, cat };
char* animalTitle[] = { "giraffe", "elephant", "dog", "cat" };

enum typeClass { horse = 0, big, home, wildlion };
char* classTitle[] = { "horse", "big", "home", "born_to_be_free" };

enum typeName { Mustang = 0, Bimbo, Ball, Sherhan };
char* nameTitle[] = { "Mustang", "Bimbo", "Ball", "Sherhan" };

typedef struct {
	enum typeTittle tittle;
	enum typeClass class;
	enum typeName name;
} typeAnimal;

void initAnimal(typeAnimal* animal) {
	uint8_t ch = 0;

	printf("Input tittle of an animal: \n");
	printf("0 - giraffe.\n");
	printf("1 - elephant.\n");
	printf("2 - dog.\n");
	printf("3 - cat.\n");
	printf("Your choce: ");
	scanf("%hhu", &ch);
	animal->tittle = ch;

	printf("Input class of an animal: \n");
	printf("0 - horse.\n");
	printf("1 - big.\n");
	printf("2 - home.\n");
	printf("3 - born_to_be_free.\n");
	printf("Your choice: ");
	scanf("%hhu", &ch);
	animal->class = ch;

	printf("Input class of an animal: \n");
	printf("0 - Mustang.\n");
	printf("1 - Bimbo.\n");
	printf("2 - Ball.\n");
	printf("3 - Sherhan.\n");
	printf("Your choce: ");
	scanf("%hhu", &ch);
	animal->name = ch;
}

void printAnimal(typeAnimal animal) {
	printf("Tittle of an animal: %s.\n", animalTitle[animal.tittle]);
	printf("Class of an animal: %s.\n", classTitle[animal.class]);
	printf("Name of an animal: %s.\n", nameTitle[animal.name]);
}

void getVoice(typeAnimal animal) {
	if (animal.tittle == 3) {
		printf("Meay!\n");
	}

	if (animal.tittle == 2) {
		printf("Bark!\n");
	}

	if (animal.tittle == 1) {
		printf("OOOh!\n");
	}

	if (animal.tittle == 0) {
		printf("Pipi!\n");
	}
}

int main(void) {
	typeAnimal cat = { 0, 0, 0 };
	typeAnimal dog = { 0, 0, 0 };

	initAnimal(&cat);
	initAnimal(&dog);

	printf("\nMy cat:\n");
	printAnimal(cat);
	getVoice(cat);
	printf("\nMy dog:\n");
	printAnimal(dog);
	getVoice(dog);

	return 0;
}