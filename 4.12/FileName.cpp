#include <iostream>
#include <string>
using namespace std;

struct IPrint {
	virtual void PrintConsole() = 0;
};

class Transport : IPrint {
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

};

class Car : public Transport {
protected:
	string color;
	double speed;
public:
	Car() { speed = 0; }
	Car(string c, double s)
	{
		color = c;
		speed = s;
	}
	virtual void PrintConsole()
	{
		cout << "Color: " << color << " Speed: " << speed << endl;
	}
};

	class Plane : public Transport {
	protected:
		string company;
		double place;
	public:
		Plane() { place = 0; }
		Plane(string cp, double pl)
		{
			company = cp;
			place = pl;
		}
		virtual void PrintConsole()
		{
			cout << "Company: " << company << " Places: " << place << endl;
		}

};

	class Animal : IPrint {
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

	};
	class Pinguin  : public Animal {
	protected:
		string region;
		double height;
	public:
		Pinguin() { weight = 0; }
		Pinguin(string r, double h)
		{
			region = r;
			height = h;
		}
		virtual void PrintConsole()
		{
			cout << "Region: " << region << " Height: " << height << endl;
		}

	};
	class Dog : public Animal {
	protected:
		string breed;
		double dogBiteForce;
	public:
		Dog() { dogBiteForce = 0; }
		Dog(string b, double dbf)
		{
			breed = b;
			dogBiteForce = dbf;
		}
		virtual void PrintConsole()
		{
			cout << "Breed: " << breed << " Dog Bite Force: " << dogBiteForce << endl;
		}

	};

int main() {
	Car car("Red", 220);
	car.PrintConsole();
	Plane plane("Boeing", 180);
	plane.PrintConsole();
	Pinguin pinguin("Antarctica", 70);
	pinguin.PrintConsole();
	Dog dog("Bulldog", 300);
	dog.PrintConsole();
}