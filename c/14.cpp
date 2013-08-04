//#include <stdio.h>      /* printf, fgets */
//#include <stdlib.h>     /* atof */
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <math.h>

using namespace std;

int main(){
	/*
	//position of the focus view
	float x1 = 13.639856;
	float y1 = 100.519753;
	float x2 = 13.61746;
	float y2 = 100.412904;
	*/
	float lat,lon;
	double total= 0.0;
	float a3[10];	//for keep lat.
	for(int i=0;i<10;i++){
		a3[i]=0.0;
	}
	
	int linecount = 0;
	std::string line;
	std::string record[10];
	
	//int chk=0; //for check in below loop
	
	std::ifstream infile("data.txt");
	if(infile){
		while(getline(infile, line)){
			stringstream ss(line);
			for(int i=0;i<=10;i++){
				getline(ss, record[i], ',');
			}
			const char *char_record4 = record[4].c_str();
			//float a1 = atof(char_record4);
			//float a2 = boost::lexical_cast<double>(record[4]);
			//float a3 = static_cast<float>(record[4]);
			
			cout<<record[4]<<" : "<<record[6]<<endl;
			//-----------------------
			total= 0.0;
			for(int i=0;i<10;i++){
				a3[i] = (char_record4[i])-48;
				//cout<<a3<<" ";
			}
			for(int i=0;i<10;i++){
				if(a3[i] != -2 && i<4){
//					total = total + (a3[i]*((1000.0)/pow(10,(i))))/100.0;
					//10^1/10^i ---- 10^1/10^0  --- 10^(1-i)
					total = total + (a3[i] * pow(10,1-i));
				}
				else if(a3[i] != -2 && i>=4){
					//10^2/10^i
					//total = total + (a3[i]*((10000.0)/pow(10,(i))))/100.0;
					total = total + (a3[i] * pow(10,2-i));
				}
				cout<<total<<" ";
			}
			//lat = total;
			//-----------------------
			
			//-----------------------
			
			cout<<"[["<<total<<"]]"<<endl;
			//cout<<a3<<endl;
			//printf("%.6f \n",a4);
			
			
			
			linecount++ ;
		}
	}
	infile.close();
	return 0 ;
}
