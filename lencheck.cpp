#include <iostream>

using namespace std;

int main() {
	char input[500];
	while(true) {
		cout << "Enter text:" << endl;
		cin.getline(input, sizeof(input));
		int count = 0;
		for(int i=0; i<500; i++) {
			if(input[i] != NULL) {
				count++;
			} else {
				break;
			}
		}
		cout << count << endl << endl;
	}
	return 0;
}