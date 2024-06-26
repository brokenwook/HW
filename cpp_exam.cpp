#include <iostream>

struct person
{
	int age;
	std::string name;
};




int main()
{
	//int a = 0;
	//short b = 2;
	//long c = 3;

	//float d = 1.00000;
	//double e = 2.00000000000000000;
	//char b = 'A';
	//bool alive = true;
	//bool dead = false;
	
	
	//a == 3 && b > 4;
	//a == 3 || b > 4;
	//!(a == 3);

	//if (true);
	//else;
	//else if;
	//switch;
	
	//for ( int i = 0;  i < 10; i++) {
		
	//}

	//while (условие) {
 
	//}

	//do - while

	int a = 3;
	int b = 5;
	int c;

	c = a + b;

	std::cout << c;

	//int numbers[5]{1,2,3,4,5};
	//int numbers[2][5]{ {1,2,3,4,5},{1,2,3,4,5 } };

	//void
	//string 
	//int 
	//Array
	

	person tom;
	tom.name = "Tom";
	tom.age = 18;
	

	int* ptr;

	int x = 10;
	int* ptr = &x;

	int y = *ptr;

	int* ptr = new int;
	*ptr = 10;
	delete ptr;
}
