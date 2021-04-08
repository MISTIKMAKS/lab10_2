#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int AStart(string myText) {
	int a = 0;
	if (myText[0] == 'a') {
		a++;
		cout << "First Letter A - " << myText << endl;
	}
	return a;
}

int main() {

	ofstream MyFile("t.txt");

	MyFile << "ainz sazh vanille alarak";

	MyFile.close();

	string myText;

	ifstream MyReadFile("t.txt");

	while (MyReadFile >> myText)
	{
		cout << myText << endl;
	}

	MyReadFile.close();

	string myTextSecond;

	ifstream MyReadFileSecond("t.txt");

	while (MyReadFileSecond >> myTextSecond)
	{
		AStart(myTextSecond);
	}
	cout << "^^^ Last Word With Start \"a\"^^^";

	MyReadFileSecond.close();
}