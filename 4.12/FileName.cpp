#include <iostream>
#include <string>
using namespace std;

struct IPrint {
	virtual void PrintConsole() = 0;
};

class Transport : public IPrint {
protected:
	string model;
	double price;
public:
	Transport() { price = 0; }
	Transport(string m, double p)
	{
	model = m;
	price = p;
	}
	virtual void PrintConsole()
	{
		cout << "Model: " << model << " Price: " << price << endl;
	}

};

class Car : public Transport {
protected:
	string color;
	double speed;
public:
	Car() { speed = 0; }
	Car(string c, double s, string m, double p) : Transport(m, p)
	{
		color = c;
		speed = s;
	}
	virtual void PrintConsole()
	{
		cout << "----------Car----------" << endl;
		Transport::PrintConsole();
		cout << "Color: " << color << " Speed: " << speed << endl;
	}
};

	class Plane : public Transport {
	protected:
		string company;
		double place;
	public:
		Plane() { place = 0; }
		Plane(string cp, double pl, string m, double p) : Transport(m, p)
		{
			company = cp;
			place = pl;
		}
		virtual void PrintConsole()
		{
			cout << "----------Plane----------" << endl;
			Transport::PrintConsole();
			cout << "Company: " << company << " Places: " << place << endl;
		}

};

	class Animal : public IPrint {
	protected:
		string name;
		double weight;
	public:
		Animal() { weight = 0; }
		Animal(string n, double w)
		{
			name = n;
			weight = w;
		}
		virtual void PrintConsole() 
		{
			cout << "Name: " << name << " Weight: " << weight << endl;
		}
	};
	class Pinguin  : public Animal {
	protected:
		string region;
		double height;
	public:
		Pinguin() { weight = 0; }
		Pinguin(string r, double h, string n, double w) : Animal(n, w)
		{
			region = r;
			height = h;
		}
		virtual void PrintConsole()
		{
			cout << "----------Pinguin----------" << endl;
			Animal::PrintConsole();
			cout << "Region: " << region << " Height: " << height << endl;
		}

	};
	class Dog : public Animal {
	protected:
		string breed;
		double dogBiteForce;
	public:
		Dog() { dogBiteForce = 0; }
		Dog(string b, double dbf, string n, double w) : Animal(n, w)
		{
			breed = b;
			dogBiteForce = dbf;
		}
		virtual void PrintConsole()
		{
			cout << "----------Dog----------" << endl;
			Animal::PrintConsole();
			cout << "Breed: " << breed << " Dog Bite Force: " << dogBiteForce << endl;
		}

	};

int main() {
	Car car("Red", 220, "Audi", 20000);
	car.PrintConsole();
	Plane plane("White", 200 ,"Boeing", 12800000);
	plane.PrintConsole();
	Pinguin pinguin("Saimon", 20, "Antarctica", 70);
	pinguin.PrintConsole();
	Dog dog("Casper", 45, "Bulldog", 300);
	dog.PrintConsole();
}