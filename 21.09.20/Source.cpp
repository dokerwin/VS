#include <stdio.h>
#include <Windows.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#define DELIM " \t\n"






class employee {

protected:
	int a;
public:
	employee(){}

};



class ecounter :public employee {


private:

protected :
	int ID;
	int salary;
	void aa(int a) {
		
		salary = a;
	}
public:
	
	ecounter(){}

};

class main_ecounter: public ecounter {


private:

	int ID;
	int salary;
public:

	void set_salary(int a) {
		
		aa(a);
		
	}
	void set_salary() {
		// salary = a;


	}


};


class editor :public employee{

protected:
	int aaa;

	int salary;

	void set_salary_ed() {}


public:

	editor() {


	}

};





template<typename T>
class myClass {
public:
	T ss;

	myClass(T count) {

		ss = count;

	}

};


 










int main() {


	int ss=4;


	myClass <int>a(ss);



	system("pause");
	return 1;
}
