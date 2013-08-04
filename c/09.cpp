#include <cstdlib>
#include <fstreaZm>
#include <sstream>
#include <string>
#include <iostream>
#include "mongo/client/dbclient.h"
#include <boost/lexical_cast.hpp>
#include <iomanip>


#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */

using namespace std;

int main(){
	//position of the focus view
	/*
	float x1 = 13.639856;
	float y1 = 100.519753;
	float x2 = 13.61746;
	float y2 = 100.412904;
	*/
//	float lat,lon;
	double a1;
	
	//setprecision(8);
	
	int linecount = 0;
	std::string line;
	std::string record[10];
	
	//std::ifstream infile("/media/66D8E430D8E40063/ThinkPad-HDD/My Documents/Research/Dr.Saroch/GPS/txt/201206-02.txt");
	std::ifstream infile("data.txt");
	if(infile){
		while(getline(infile, line)){
			//std::cout << linecount << ": " << line << '\n';
			stringstream ss(line);
			for(int i=0;i<=10;i++){
				getline(ss, record[i], ',');
//				cout<<record[i]<<"+";
			}

//			lat = strtod(record[4], ',');
//			lon = strtod(record[6], ',');
//			lat = 0.12;
//			lon = 0.1234579898989898f;
//			lat = boost::lexical_cast<float>(record2[4]);
//			lon = boost::lexical_cast<float>(record2[6]);
			
			//lat = boost::lexical_cast<double>(record[4].str());
			//lon = boost::lexical_cast<double>(record[6].str());
			
			//std::istringstream irecord4(&record2[4].c_str());
			//lat = irecord4;
			
//			lat = 0.123456e-6;
//			lat = boost::lexical_cast<float>("1303.14100");
			
			a1 = 3.1415926535;
			
			cout<<record[4]<<" : "<<record[6]<<endl;
//			cout<<lat<<" : "<<endl<<endl;
//			cout<<setprecision(9)<<lat<<" ++ "<<lon<<endl<<endl;
			printf ("%f \n\n" , a1);
			
			linecount++ ;
		}
	}
	infile.close( ) ;
	return 0 ;
}
