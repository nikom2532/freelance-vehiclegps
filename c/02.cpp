#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myReadFile;
	myReadFile.open("text.txt");
	char output[100];
	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> output;
			cout<<output;
		}
	}
	myReadFile.close();
	return 0;
}
