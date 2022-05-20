/*
ДЗ 10

Тема: абстрактные классы

ВАРИАНТЫ ЗАДАНИЙ

Создать базовый абстрактных класс «Человек», имеющий нереализованную виртуальную функцию вывода информации на экран. Затем создать классы «Ученик» и «Босс», унаследованные от него.
*/

#include <iostream>
#include <vector>

class IHuman {
public:
	virtual void talk() = 0;
	virtual ~IHuman() = default;
};

class Boss : public IHuman {
public:
	Boss() {}
	void talk() { std::cout << "Bla-bla-bla" << std::endl; }
};

class Worker : public IHuman {
public:
	Worker(){}
	void talk() { 
		std::cout << "$#*@%!!! *****, *** ********, ****! $#*@%!!! ******! So I need to work, goodbye!" << std::endl;
	}
};

class UsualMIREAStudentOnExam : public IHuman {
	UsualMIREAStudentOnExam(){}
	void talk(){ std::cout << "... ... ..." << std::endl; }
};

int main(){
	std::vector<IHuman *> hs;
	hs.push_back(new Boss());
	for (int i = 0; i < 10; i++) {
		hs.push_back( new Worker());
	}
	for (auto h : hs) {
		h->talk();
	}
}
