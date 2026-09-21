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

		// Default constructor — used when no arguments are given
		Car() : num_miles(0), make(""), model(""), nickname(""), mpg(0), age(0)
		{
			// empty body — initializer list handles everything
		}

		// Constructor
		Car(int miles, string mk, string mdl, string nick, int mpgVal, int ageVal)
			: num_miles(miles), make(mk), model(mdl), nickname(nick), mpg(mpgVal), age(ageVal)
		{
			// body can stay empty since the initializer list did the work
		}

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
	Car car1(160000, "Honda", "Accord", "Old Reliable", 26, 12);
	Car car2(60000, "Ford", "F-150", "Big Rig", 16, 5);
	Car car3(210000, "Toyota", "Camry", "muy Reliables", 22, 19);

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
	for (size_t i=0;i<inventoryOfCars.size();i++){
		if (inventoryOfCars[i].make == "Honda"){
			cout << "Car #" << i << " is a Honda"<< endl;
		}else{
			cout << "Car #" << i << " is not a Honda"<< endl;
		}
	}

	return 0;
}