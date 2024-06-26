#include <iostream>
#include <stack>
#include <string>

class specifier
{
public:
private:
protected:
};

std::stack<int> myStack; //это объявление переменной myStack типа std::stack<int>

myStack.push(1); // добавляем элемент в стек
myStack.push(2);
myStack.push(3);

while (!myStack.empty()) {
    std::cout << myStack.top() << " "; // Вывод верхнего элемента стека
    myStack.pop(); // Удаление верхнего элемента
}
// Вывод: 3 2 1
return 0;



class Cap {
public:
    std::string GetColor()
    {
        return color;
    }
private:
    std::string color = "красный";
};



class Human
{
public:
    void Think()
    {
        brain.Think();
    }

    void CapOn()
    {
        std::cout << "Цвет моей кепки " << cap.GetColor() << std::endl;
    }


private:
    class Brain
    {
    public:
        void Think()
        {
            std::cout << "Я думаю!" << std::endl;
        }
    };
    Brain brain;
    Cap cap;
};



class Person
{
public:
    std::string name;
};

class Student : public Person
{
public:
    std::string group;
};


class Teacher : public Person
{
public:
    std::string subject;
};

std::stack<int> myStack; //это объявление переменной myStack типа std::stack<int>

myStack.push(1); 
myStack.push(2);
myStack.push(3);

while (!myStack.empty()) {
    std::cout << myStack.top() << " "; // Вывод верхнего элемента стека
    myStack.pop(); // Удаление верхнего элемента
}
// Вывод: 3 2 1
return 0;



namespace firstNS
{
    void prog()
    {
        std::cout << "First" << std::endl;
    }
}

namespace secondNS
{
    void prog()
    {
        std::cout << "Second" << std::endl;
    }
}

using namespace secondNS;




class MyFunctor
{
public:
    void operator()()
    {
        std::cout << "functor " << count << std::endl;
        count++;
    }
private:
    int count = 0;
};


int main() 
{
    setlocale(0, "");

    Human human;
    human.Think();

    Student st;
    st.name = "Bal";




    firstNS::prog();  
    prog();


    int num = 123;
    std::string str = std::to_string(num);
    std::cout << str << std::endl;

  



    std::string str = "123";
    int num = std::stoi(str);
    std::cout << num << std::endl;

    std::string str = "1234567890";
    long num = std::stol(str);
    std::cout << num << std::endl;

    std::string str = "3.14";
    float num = std::stof(str);
    std::cout << num << std::endl;

    std::string str = "3.14159265359";
    double num = std::stod(str);
    std::cout << num << std::endl;







    MyFunctor f;
    f();
    f();
    f();

