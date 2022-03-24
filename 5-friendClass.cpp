#include <iostream>
using namespace std;

class Sunny {

private:
	int money;              // private member

public:
	Sunny() { 

        money = 100; 
    }
	friend class Bunny; // Friend Class declaration
};

// Friend class defination
class Bunny {
private:
	string name;

public:
	void sunnyMoney(Sunny& sunny)
	{
		// sunny private members can be accessed inside bunny member functions
        // as Bunny is friend class of Sunny
		cout << "Sunny money:" << sunny.money;
	}
};

// Bunny is friend  to Sunny but Sunny is not friend  Bunny
// So, Sunny class cannot access Bunny private members.
int main()
{
	Sunny sunny;
	Bunny bunny;
	bunny.sunnyMoney(sunny);
	return 0;
}
/*
Output:
Sunny money:100
*/