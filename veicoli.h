#ifndef VEICOLO_H
#define VEICOLO_H
#include<iostream>
using namespace std;
class Veicolo{
	public:
	int cavalli;
	Veicolo(int _cavalli){
	this->cavalli = _cavalli;
	}
	Veicolo(){cavalli = 0;}

	virtual ostream& print(ostream &os){
		os<<"class: " <<typeid(*this).name()<<", cavalli: "<<cavalli<<endl;
		return os;
	}
};

class Auto : public Veicolo{
	public:
	Auto(int cavalli) : Veicolo(cavalli) {}
	Auto(){}
	ostream &print(ostream &os) {
		Veicolo::print(os);
		return os;
	}
};

class Moto : public Veicolo{
	public:
	Moto(int cavalli) : Veicolo(cavalli) {}
	Moto() {}
	ostream &print(ostream &os) {
		Veicolo::print(os);
		return os;
	}
};

class Barca : public Veicolo{
	public:
	Barca(int cavalli) : Veicolo(cavalli) {}
	Barca() {}
	ostream &print(ostream &os) {
		Veicolo::print(os);
		return os;
	}
};
ostream &operator<<(ostream &os, Veicolo & v) {
	return v.print(os);
}

#endif