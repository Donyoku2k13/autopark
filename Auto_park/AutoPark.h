#pragma once
#include "bus.h"
#include <vector>
#include <fstream>
class AutoPark
{
	vector<bus> buses;
	string name;

public:
	AutoPark(string name) {
		this->name = name;
	}
	
	void info()const {
		cout << "AutoPark " << name << endl;
		for (bus b : buses)
		{
			cout << "\n-----------------\n";
			buses->info();
		}
	}
	void addBus(bus b) {
		buses.push_back(b);
	}
	int busrouteList(int route)const {
		for (bus  buses) {
			if (b->getBusNumb() == route)
			{
				b->info();
			}
		}
		
	}
	int busExplcheck(int yearOfExpl)const {
		for (bus*b : buses) {
			if (b->getYear() >10)
			{
				b->info();
			}
		}
	}
	int busMileageList()const {
		for (bus*b : buses) {
			if (b->getRun()>10000)
			{
				b->info();
			}
		}
	}
	void loadToFile()
	{
		fstream file("park.txt");
		for (bus*b : buses)
		{
			file <<b->getDriver() << ";" << b->getBusNumb() << ";" << b->getNumOfMarsh() << ";" <<
				b->getMark() << ";" << b->getYear() << ";" << b->getRun() << ";" << endl;
		}

	}
	
	AutoPark(const AutoPark&) = delete;
	AutoPark& operator=(const AutoPark&) = delete;
	~AutoPark() {
		for (bus*b : buses) {
			delete b;
		}
	}


};



