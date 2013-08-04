#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>
#include "mongo/client/dbclient.h"

using namespace std;

int main(){
	int linecount = 0;
	std::string line;
	//std::ifstream infile("/media/66D8E430D8E40063/ThinkPad-HDD/My Documents/Research/Dr.Saroch/GPS/txt/201206-02.txt");
	std::ifstream infile("data.txt");
	if(infile){
		while(getline(infile, line)){
			std::cout << linecount << ": " << line << '\n';
			linecount++ ;
		}
	}
	infile.close( ) ;
	return 0 ;
}
