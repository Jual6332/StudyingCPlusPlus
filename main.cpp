#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car{
	public:
		int num_miles;
		string make;
		string model;
		string nickname;
		int mpg;
		int age;

	void printNummiles(){
		cout << "The car has : "<< num_miles << " miles" << endl;
	}

	void printCarmake(){
		cout << "The make of the car is: "<< make << endl;
	}

	void printCarmodel(){
		cout << "The model of the car is: "<< model << endl;
	}

	void printmpg(){
		cout << "This car gets: "<< mpg << " miles per gallon on average." << endl;
	}

	void printage(){
		cout << "This car is: "<< age << " years old." << endl;
	}
};

int main(){
	// Create new Car objects (instances of the class)
	Car car1;
	car1.num_miles = 160000;
	car1.make = "Honda";
	car1.model = "Accord";
	car1.nickname = "Old Reliable";
	car1.mpg = 26;
	car1.age = 12;

	Car car2;
	car2.num_miles = 60000;
	car2.make = "Ford";
	car2.model = "F-150";
	car2.nickname = "Big Rig";
	car2.mpg = 16;
	car2.age = 5;

	// Print the cars details to the screen
	car2.printNummiles();
	car2.printCarmake();
	car2.printCarmodel();
	car2.printmpg();
	car2.printage();
	

	// Declare vector for Inventory of Cars
	vector<Car> inventoryOfCars;
	inventoryOfCars.push_back(car1);
	inventoryOfCars.push_back(car2);

	//cout << "Print!"<< endl;
	return 0;
}