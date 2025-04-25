

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    int id;
    string name;
    int age;

    
    

public:
    
    Person();
    Person(int id, const string &name, int age);

   
    int getId() const;
    string getName() const;
    int getAge() const;

    
    void setId(int newId);
    void setName(const string &newName);
    void setAge(int newAge);


    string toString() const;
};

#endif // PERSON_H



#endif /* person_hpp */
