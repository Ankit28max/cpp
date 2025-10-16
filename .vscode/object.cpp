#include <iostream>
using namespace std;

//copy constructor
class Car
{
public:
    string name;
    int speed;
    int dis;

    Car(string name, int speed)
    {
        this->name = name;
        this->speed = speed;
    }


    Car(Car &c)
    {
        this->name = c.name;
        this->speed = c.speed;
        this->dis = 0;
    }
    void move(int time)
    {
        dis = this->speed * time;
    }
};
int main()
{
    Car *c = new Car("volvo", 120);
    c->move(2);
    cout << c->dis << endl;

    Car c1 = *c;
    c1.name = "BMW";
    cout << c->name;
    cout << endl;

    Car *c2 = new Car("BMW", 100);
    c2->move(3);
    cout << c2->dis << endl;
    delete c;
    cout << &c1.name << " " << &c->name;
    return 0;
}

