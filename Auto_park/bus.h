#pragma once
#include <string>
#include <iostream>
using namespace std;

class bus {
	string driverName;
	int busNumber;
	int route;
	string markofBus;
	int yearOfExpl;
	int mileage;
public:
	bus(string driverName, int busNumber, int route, string markofBus, int yearOfExpl, int mileage) {
		this->driverName = driverName;
		this->busNumber=busNumber;
		this-> route=route;
		this->markofBus=markofBus;
		this-> yearOfExpl=yearOfExpl;
		this->mileage = mileage;
	}
	void setDriver(string driverName){
		this->driverName = driverName;
	}
	void setBusN(int busNumber){
		this->busNumber = busNumber;
	}
	void setnumOfMarsh(int route){
		this->route = route;
	}
	void setMark(string markofBus){
		this->markofBus = markofBus;
	}
	void setYear(int yearOfExpl){
		this->yearOfExpl = yearOfExpl;
	}
	void setRun(int mileage){
		this->mileage = mileage;
	}
	string getDriver()const { return this->driverName; }
	string getMark()const { return this->markofBus; }
	int getBusNumb()const { return this->busNumber; }
	int getNumOfMarsh()const{ return this->route; }
	int getYear()const { return this->yearOfExpl; }
	int getRun()const { return  this->mileage; }
	void info()const {
		cout << "Driver name: " << driverName << endl;
		cout << "bus number: " << busNumber << endl;
		cout << "route ¹: " << route << "   " << "mark: " << markofBus << "\n" << "year of expluatation: " << yearOfExpl << "mileage: " << mileage << endl;
	}
};