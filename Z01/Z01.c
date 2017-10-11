#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

enum typeCompany { Bosh = 0, LG, Samsung, ATLANT };
char* companyTitle[] = { "Bosh", "LG", "Samsung", "ATLANT" };

enum typeColor { WHITE = 0, BLACK, RED, GREEN };
char* colorTitle[] = { "White", "Black", "Red", "Green" };

typedef struct {
	enum typeCompany company;
	enum typeColor collor;
	uint16_t width;//mm
	uint16_t length;//mm
	uint16_t height;//mm
	uint32_t power;
	uint32_t spdPressing;
	uint8_t temperature;
} typeWashinMachine;

int main(void) {
	typeWashinMachine wshMach = { 0, 1, 32, 500, 520, 540, 1200, 80 };

	printf("Company: %s.\n", companyTitle[wshMach.company]);
	printf("Color: %s.\n", colorTitle[wshMach.collor]);
	printf("Width: %hi.\n", wshMach.width);
	printf("Length: %hi.\n", wshMach.length);
	printf("Height: %hi.\n", wshMach.height);
	printf("Power: %hi.\n", wshMach.power);
	printf("Pressing: %hi.\n", wshMach.spdPressing);
	printf("Temperature: %hi.\n", wshMach.temperature);

	return 0;
}