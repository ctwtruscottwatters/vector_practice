#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>

char * create_array(int i);
int create_vector(int j);
char * create_string_vector(int k);
/* C++ scratchpad, Charles Truscott Watters. Digging into the library reference */
/* Eager to practice function return types with typedef struct or enumeration types */


int main(void) {
	std::cout << "Welcome to the program.\n";
	int i = 0;
	while(i <= 2) {
		std::cout << create_array(i);
		++i;
	}
	int j = 0;
	while (j <= 4) {
		std::cout << create_vector(j) << std::endl;
		++j;
	}
	int k = 0;
	while (k <= 4) {
		std::cout << create_string_vector(k) << std::endl;
		++k;
	}

	return 0;
}

char * create_array(int i) {

	char * array_of_strings[3] {"Hello, ", "Welcome to", " Infinity\n"};

	return array_of_strings[i];

}

int create_vector(int j) {
	std::vector<int> vector_of_ints {2, 2 * 2, 2 * 2 * 2, 2 * 2 * 2 * 2};
	vector_of_ints.push_back(2 * 2 * 2 * 2 * 2);
	return vector_of_ints[j];
}

char * create_string_vector(int k) {
	std::vector <char *> vector_of_strings {"Charles ", "Truscott ", "was born on the ", "13/1/1993", "\n"};
	return vector_of_strings[k];
}