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

	Car car3;
	car3.num_miles = 210000;
	car3.make = "Toyota";
	car3.model = "Camry";
	car3.nickname = "muy Reliables";
	car3.mpg = 22;
	car3.age = 19;

	// Print the cars details to the screen
	car3.printNummiles();
	car3.printCarmake();
	car3.printCarmodel();
	car3.printmpg();
	car3.printage();

	// Declare vector for Inventory of Cars
	vector<Car> inventoryOfCars;
	inventoryOfCars.push_back(car1);
	inventoryOfCars.push_back(car2);
	inventoryOfCars.push_back(car3);

	// Loop through vector
	for (uint i=0;i<inventoryOfCars.size();i++){
		if (inventoryOfCars[i].make == "Honda"){
			cout << "Car #" << i << " is a Honda"<< endl;
		}else{
			cout << "Car #" << i << " is not a Honda"<< endl;
		}
	}

	//cout << "Print!"<< endl;
	return 0;
}