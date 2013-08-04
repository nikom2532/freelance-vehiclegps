#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;
//using boost::lexical_cast;

int main() {
    string str = "130.4123456789";
    
    double dub = boost::lexical_cast<double>(str);
    cout << dub << endl;
}
