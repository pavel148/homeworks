#include <iostream>
#include "Test.h"
using namespace std;

	int nim;
	 Test::Test(int _num) {
		nim = _num;
		cout << nim << " " << "constructor\n";
	}
	void Test:: Print() {
		cout << nim << "" << "print\n";
	}

	Test::~Test() {
		cout << nim << "  destructor\n";
	}
