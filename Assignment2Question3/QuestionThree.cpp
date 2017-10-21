#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int arrayOfElements[1000];

	for (int i = 0; i < 1000; i++)
		arrayOfElements[i] = 1;

	for (int i = 2; i < 1000; i++) {
		for (int j = 2; j < 1000; j++) {
			if (i*j < 1000)
				arrayOfElements[i*j] = 0;
			else {
				i = 1000;
				j = 1000;
			}
		}
	}

	for (int i = 1; i < 1000; i++) {
		if (arrayOfElements[i] == 1)
			cout << i << " ";
	}

	return 0;
}