
#include <iostream>
using namespace std;


int yesOrNo {};
    

class Dog {
private:
    string name;
    int age;
    int dog_years;
public:
    Dog ();
    string get_name ();
    void set_name();
    int get_age ();
    void set_age ();
    void set_dog_years ();
    int get_dog_years ();
};

void printNameDog(Dog newDog);

int endProgram (int y);

int main() {
    
    string n {};
    int num {};
    cout << "How many dogs do you want?" << endl;
    cin >> num;
    cout << endl;
    Dog pop_dogs[num];
    for (int i=0; i<num; i++){
        Dog();
        pop_dogs[i].set_name();
        pop_dogs[i].set_age();
        pop_dogs[i].set_dog_years();
    }
    
    for (int i=0; i<num; i++){
    
        cout << i+1 << ". " << pop_dogs[i].get_name() << " (" <<pop_dogs[i].get_age() << ") [" << pop_dogs[i].get_dog_years() << " dog years] " << endl;

    }
    
    return 0;
}
    

        
    

Dog::Dog (){    // default constructor
    name = "Dog";
    age = 0;
}


void Dog::set_name(){
    cout << "Enter name: ";
    cin >> name;
    cout << endl;
}
    
    string Dog::get_name (){
        return name;
    }

void Dog::set_age(){
    cout << "Enter age: ";
    cin >> age;
    cout << endl;
}
    int Dog::get_age (){
        return age;
    }

void Dog:: set_dog_years(){
    dog_years = age*7;
}

int Dog::get_dog_years (){
    return dog_years;
}

