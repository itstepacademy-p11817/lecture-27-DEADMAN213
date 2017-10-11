#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

enum typeCompany { Apple = 0, Huawei, Xiaomi, Samsung };
char* companyTitle[] = { "Bosh", "LG", "Samsung", "ATLANT" };

enum typeColor { WHITE = 0, BLACK, RED, GREEN };
char* colorTitle[] = { "White", "Black", "Red", "Green" };

typedef struct {
	enum typeCompany company;
	enum typeColor collor;
	float screen;//inch
	uint32_t memory;//bytes
	float frequency;//ghz
} typePhone;

int main(void) {
	typePhone myPhone = { Xiaomi, GREEN, 5.2, 1200, 1.7 };

	printf("Company: %s.\n", companyTitle[myPhone.company]);
	printf("Color: %s.\n", colorTitle[myPhone.collor]);
	printf("Screen: %.1f.\n", myPhone.screen);
	printf("Memory: %hi.\n", myPhone.memory);
	printf("Frequency: %.1f.\n", myPhone.frequency);

	return 0;
}