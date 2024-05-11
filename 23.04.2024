#include <iostream>
#include <thread>

void threadFunction1() {
    std::cout << "Поток 1 запущен" << std::endl;
}

void threadFunction2() {
    std::cout << "Поток 2 запущен" << std::endl;
}

void threadFunction3() {
    std::cout << "Поток 3 запущен" << std::endl;
}

int main() {
    std::thread t1(threadFunction1);
    std::thread t2(threadFunction2);

    t1.join();

    std::thread t3(threadFunction3);
    
    t2.join(); 
    t3.join(); 

    return 0;
}
