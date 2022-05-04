#pragma once
#include <iostream>

class Human {
protected:
	std::string surname;
	std::string name;
	std::string midname;
	int age;
public:
	Human();
	Human(std::string surname, std::string name, std::string midname, int age);
	virtual void print() = 0;
	~Human();
};

class Student : public Human {
private:
	bool on_lesson;
public:
	Student();
	Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson);
	void print() override;
	~Student();
};

class Boss : public Human {
private:
	int number__of_workers;
public:
	Boss();
	Boss(std::string surname, std::string name, std::string midname, int age, int number__of_workers);
	void print() override;
	~Boss();
};