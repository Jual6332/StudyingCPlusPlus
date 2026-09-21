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
	// Create new Car object (instance of the class)
	Car car1;
	car1.num_miles = 160000;
	car1.make = "Honda";
	car1.model = "Accord";
	car1.nickname = "Old Reliable";
	car1.mpg = 26;
	car1.age = 12;

	// Print the cars details to the screen
	car1.printNummiles();
	car1.printCarmake();
	car1.printCarmodel();
	car1.printmpg();
	car1.printage();

	// Declare vector for Inventory of Cars
	vector<Car> inventoryOfCars;
	inventoryOfCars.push_back(car1);

	//cout << "Print!"<< endl;
	return 0;
}