#include <iostream>
#include <mongo/client/dbclient.h>

using namespace mongo;

void run() {
	DBClientConnection c;
	c.connect("localhost");
}

int main() {
	try {
		run();
		cout << "connected ok" << endl;
	} catch( DBException &e ) {
		cout << "caught " << e.what() << endl;
	}
	return 0;
}