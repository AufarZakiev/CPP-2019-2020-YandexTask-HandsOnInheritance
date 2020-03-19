#include <iostream>

using namespace std;

class Animal
{
public:
  Animal(const string& name = "animal") : Name(name)
  {
  }

  const string Name;
};

class Dog : public Animal
{
public:
  Dog()
    : Animal("dog"){

    };

  void Bark()
  {
    cout << Name << " barks: woof!" << endl;
  }
};

int main()
{
  Dog d;
  d.Bark();
}
