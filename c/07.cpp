#include <cstdlib>
#include <iostream>
#include "mongo/client/dbclient.h"

using namespace mongo;

void run() {
  mongo::DBClientConnection c;
  c.connect("localhost");

  auto_ptr<DBClientCursor> cursor = c.query("test.test", BSONObj());
  while (cursor->more())
      std::cout << cursor->next().toString() << std::endl;
}

int main() {
  try {
    run();
    std::cout << "connected ok" << std::endl;
  } catch( const DBException &e ) {
    std::cout << "caught " << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}
