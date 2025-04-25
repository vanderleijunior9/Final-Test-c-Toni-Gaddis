#include "person.hpp"
#include <sstream>
#include <cctype>
#include <cmath>
#include <string>


Person::Person() : id(0), name(""), age(0) {}

Person::Person(int id, const string &name, int age)
    : id(abs(id)), name(name), age(abs(age)) {}


int Person::getId() const { return id; }
string Person::getName() const { return name; }
int Person::getAge() const { return age; }

void Person::setId(int newId) { id = abs(newId); }
void Person::setName(const string &newName) { name = newName; }
void Person::setAge(int newAge) { age = abs(newAge); }

string Person::toString() const {
    stringstream ss;
    ss << "ID: " << id << ", Name: " << name << ", Age: " << age;
    return ss.str();
}
