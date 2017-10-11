#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

enum typeCompany { Bosh = 0, LG, Samsung, ATLANT };
char* companyTitle[] = { "Bosh", "LG", "Samsung", "ATLANT" };

enum typeColor { WHITE = 0, BLACK, RED, GREEN };
char* colorTitle[] = { "White", "Black", "Red", "Green" };

enum typeModel { ONE = 0, TWO, THREE, FOUR };
char* modelTitle[] = { "AB320W", "AB320B", "AB320R", "AB320G" };

enum isSteam { YES = 0, NO };
char* steamTitle[] = { "YES", "NO" };

typedef struct {
	enum typeCompany company;
	enum typeModel model;
	enum typeColor collor;
	uint32_t minTemp;
	uint32_t maxTemp;
	enum isSteam steam;
	uint32_t power;
} typeIron;

int main(void) {
	typeIron myIron = { Bosh, TWO, BLACK, 100, 500, NO, 1200 };

	printf("Company: %s.\n", companyTitle[myIron.company]);
	printf("Model: %s.\n", modelTitle[myIron.model]);
	printf("Color: %s.\n", colorTitle[myIron.collor]);
	printf("Min temaperature: %hi.\n", myIron.minTemp);
	printf("Max temperature: %hi.\n", myIron.maxTemp);
	printf("Is steam: %s.\n", steamTitle[myIron.steam]);
	printf("Power: %hi.\n", myIron.power);

	return 0;
}