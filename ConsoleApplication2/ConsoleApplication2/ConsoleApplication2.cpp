
#include <iostream>
#include <algorithm>

int main()
{
	const int SIZE = 10;

	std::cout << "Select sort, zde je 10 nahodnych cisel\n";
	int numbers[SIZE];
	int number = 0;
	int tmpnumber = 0;
	int sortednumbers[SIZE];
	int tmpindex = 0;

	for (int i = 0; i <= SIZE - 1; i++) {
		number = std::rand();
		numbers[i] = number;

		std::cout << number << "\n";
	}

	for (int n = 0; n <= SIZE - 1; n++) {
		number = 0;

		for (int m = 0; m <= SIZE - 1; m++) {
			tmpnumber = numbers[m];

			if (tmpnumber > number) {
				number = tmpnumber;
				tmpindex = m;
			}
		}

		numbers[tmpindex] = 0;
		sortednumbers[n] = number;
	}

	std::cout << "Zde jsou roztrizene od nejvetsi po nejmensi." << std::endl;
	for (size_t i = 0; i != SIZE; ++i)
		std::cout << sortednumbers[i] << " ";
}
