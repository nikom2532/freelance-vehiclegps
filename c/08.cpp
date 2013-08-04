//tutorial.cpp
#include <iostream>
#include <mongo/client/dbclient.h>

using namespace std;

void run() {
  mongo::DBClientConnection c;
  c.connect("localhost");
}

int main() {
  try {
    run();
    cout << "connected ok" << endl;
  } catch( mongo::DBException &e ) {
    cout << "caught " << e.what() << endl;
  }
  return 0;
}
