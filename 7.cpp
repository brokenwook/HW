#include <iostream>

class PC
{
public:
	std::string proccessor;
  void turn_on()
  {
      std::cout << "Turn On\n";
  }
};

class Monitor
{
public:
	int resolution;
  void image_output ()
  {
    std::cout << "Image out\n";
  }
};

class Monoblock : public PC, public Monitor
{
public: 
  std::string name;
  void open_excel()
  {
    std::cout << "Open excel\n";
  }
};

class Laptop : public PC
{
public: 
  std::string graphics_card;
  void play_videogame()
  {
    std::cout << "Piu Piu\n";
  }
};

class Phone
{
public:
	bool sensory;
  void take_photo()
  {
    std::cout << "Photo taken\n";
  }
};

class Tablet : public Laptop, public Phone
{
public: 
    std::string name;
    void surf_internet()
    {
        std::cout << "Surf\n";
    }
};


int main()
{
	
}
