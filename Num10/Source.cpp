#include "Header.h"

Human::Human() {
	this->name = "Unknown";
	this->surname = "Unknown";
	this->midname = "Unknown";
	this->age = 0;
}

Human::Human(std::string surname, std::string name, std::string midname, int age) {
	this->name = name;
	this->surname = surname;
	this->midname = midname;
	this->age = age;
}

Human::~Human() {

}

Student::Student() {
	this->name = "Unknown";
	this->surname = "Unknown";
	this->midname = "Unknown";
	this->age = 0;
	this->on_lesson = false;
}

Student::Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson) {
	this->name = name;
	this->surname = surname;
	this->midname = midname;
	this->age = age;
	this->on_lesson = on_lesson;
}

void Student::print() {
	std::cout << surname << " " << name << " " << midname << "; Age - " << age << ". "<< (on_lesson ? "On lesson" : "Not on lesson") << "." << std::endl;
}

Student::~Student() {

}

Boss::Boss() {
	this->name = "Unknown";
	this->surname = "Unknown";
	this->midname = "Unknown";
	this->age = 0;
	this->number__of_workers = 0;
}

Boss::Boss(std::string surname, std::string name, std::string midname, int age, int number__of_workers) {
	this->name = name;
	this->surname = surname;
	this->midname = midname;
	this->age = age;
	this->number__of_workers = number__of_workers;
}

void Boss::print() {
	std::cout << surname << " " << name << " " << midname << "; Age - " << age << ". " << "Number of works = " << number__of_workers << std::endl;
}

Boss::~Boss() {

}