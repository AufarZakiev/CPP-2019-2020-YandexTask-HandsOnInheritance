#include <iostream>

using namespace std;

class Animal
{
public:
  Animal(string name = "animal") : Name(name)
  {
  }
  const string Name;
};

class Dog : public Animal
{
public:
  Dog(string name) : Animal(name)
  {
  }

  void Bark()
  {
    cout << Name << " barks: woof!" << endl;
  }
};

int main()
{
  string name = "";
  cout << "Write the dog's name!" << endl;
  cin >> name;
  Dog d = Dog(name);
  d.Bark();
}
