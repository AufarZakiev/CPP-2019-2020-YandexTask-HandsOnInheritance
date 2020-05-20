#include <iostream>

using namespace std;

class Animal
{
public:
  const string Name;
  Animal(string& name) : Name(name)
  {
    ;
  }
};

class Dog : public Animal
{
public:
  Dog(string& name) : Animal(name)
  {
    ;
  }

  void Bark()
  {
    cout << Name << " barks: woof!" << endl;
  }
};

int main(int argc, char* argv[])
{
  string name = "cheburek_s_vokzala";
  Animal* a = new Dog(name);
  ((Dog*)a)->Bark();
  return 0;
}
