#include <iostream>
#include "uschf.h"

//	"unsigned" variables can't be negative( < 0)
//	and there are problems with that in some stuff,
//	so I wanted to limit it and reset it to the number,
//  that has been set as limiter.
//  It'll do that if the number is higher than the limiter,
//	if it's not, it just outputs what you typed as Input value.
//	
//
//	It's useless
unsigned int inputIntValue{};
unsigned int inputIntIValue{};

unsigned long inputLongValue{};
unsigned long inputLongLValue{};

unsigned long long inputLongLongValue{};
unsigned long long inputLongLongLValue{};

unsigned short inputShortValue{};
unsigned short inputShortSValue{};

int main() {
	//Test 1: Unsigned Integer
	std::cout << "Test 1: Int unsigned\n";
	std::cout << "Input value: ";
	std::cin >> inputIntValue;
	std::cout << "Maximum allowed value: ";
	std::cin >> inputIntIValue;
	usichf(inputIntValue, inputIntIValue);

	//Test 2: Unsigned Long
	std::cout << "\nTest 2: Long unsigned\n";
	std::cout << "Input value: ";
	std::cin >> inputLongValue;
	std::cout << "Maximum allowed value: ";
	std::cin >> inputLongLValue;
	uslchf(inputLongValue, inputLongLValue);

	//Test 3: Unsigned Double Long(long long)
	std::cout << "\nTest 3: DLong unsigned\n";
	std::cout << "Input value: ";
	std::cin >> inputLongLongValue;
	std::cout << "Maximum allowed value: ";
	std::cin >> inputLongLongLValue;
	usllchf(inputLongLongValue, inputLongLongLValue);

	//Test 4: Unsigned Short
	std::cout << "\nTest 4: Short unsigned\n";
	std::cout << "Input value: ";
	std::cin >> inputShortValue;
	std::cout << "Maximum allowed value: ";
	std::cin >> inputShortSValue;
	usschf(inputShortValue, inputShortSValue);

	system("pause");
}