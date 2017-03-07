#include <iostream>
#include <string>

using namespace std;

void show1(const int nElements, string texts[]) {

	// cout << sizeof(texts) << endl; returns size of pointer!

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int nElements, string *texts) {

	// cout << sizeof(texts) << endl; returns size of pointer!

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]) {

	// cout << sizeof(texts) << endl; returns size of pointer!

	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

/*
string *getArray() {
	// Don't return pointers to local variables
	//string texts[] = { "one", "two", "three" };

	return texts;
}
*/

char *getMemory() {
	char *pMem = new char[100];

	return pMem;
}

void freeMemory(char *pMem) {
	delete[] pMem;

}

int main() {

	string texts[] = { "apple", "orange", "banana" };

	cout << sizeof(texts) << endl;

	show3(texts);

	char *pMemory = getMemory();

	freeMemory(pMemory);

	return 0;
}
