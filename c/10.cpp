#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   string s = "Aree:Rakcharti:M:0810778888:";
   stringstream ss(s);
   string fname; getline(ss, fname, ':');
   string lname; getline(ss, lname, ':');
   string ptype; getline(ss, ptype, ':');
   string pnumber; getline(ss, pnumber, ':');
   cout << fname << " " << lname << " " << ptype << " " << pnumber << endl; 
   cout << ss << endl;
}
