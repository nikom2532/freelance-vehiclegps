#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int linecount = 0;
	string line;
	ifstream infile("data.txt");
	if(infile){
		while(getline(infile, line)){
			cout << linecount << ": " << line << '\n';
			linecount++ ;
		}
	}
	infile.close( ) ;
	return 0 ;
}
