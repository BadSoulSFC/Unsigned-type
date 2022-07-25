#include <iostream>
#include "uschf.h"

// don't you dare say something about " i--; "
// i prefer waiting for long long to calculate 
// than making it faster

// usichf - unsigned int
void usichf(unsigned int intValue, unsigned int maxValueI) {
	
	while (intValue > maxValueI) {
		intValue--;
		if (intValue == 0 || intValue <= maxValueI) {
			std::cout << "Passed: ";
		}
	}
	std::cout << intValue;
}

// uslchf - unsigned long
void uslchf(unsigned long longValue, unsigned long maxValueL) {
	while (longValue > maxValueL) {
		longValue--;
		if (longValue == 0 || longValue <= maxValueL) {
			std::cout << "Passed: ";
		}
	}
	std::cout << longValue;
}

// usllchf - unsigned long long
void usllchf(unsigned long long longlongValue, unsigned long long maxValueLL) {

	while (longlongValue > maxValueLL) {
		longlongValue--;
		if (longlongValue == 0 || longlongValue <= maxValueLL) {
			std::cout << "Passed: ";
		}
	}
	std::cout << longlongValue;
}

// usschf - unsigned short
void usschf(unsigned short shortValue, unsigned short maxValueS) {

	while (shortValue > maxValueS) {
		shortValue--;
		if (shortValue == 0 || shortValue <= maxValueS) {
			std::cout << "Passed: ";
		}
	}
	std::cout << shortValue;
}