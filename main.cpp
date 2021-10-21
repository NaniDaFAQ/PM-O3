#include <iostream>
using namespace std;

class life {
  
  public:
    void MainMenu();
    void putMenu();
    void clearScreen(){};
    void randomize(){};
    void changeParameters(){};
    
  private:
    bool active;
    unsigned int generations;
    char lChar = 'H', dChar = ' ';


};

void life::MainMenu() {
  while(true){
    putMenu();
    char inputChar = cin.get();
    while(inputChar != '\n') {
      switch(inputChar) {
      case 'C': 
        clearScreen();
        break;
      case 'R': 
        randomize();
        break;
      case 'P':
        changeParameters();
        break; 
      case 'G':
        changeParameters();
        break;
      case 'S':
        exit(0);
        break;
      }
    inputChar = cin.get();
    }
  }
}



void life::putMenu() {
  cout << "(C)lear, (R)andom, (P)arameters, (S)top $ ";
}


//void life::changeParam

int main() {
  
  life Life;
  Life.MainMenu();
  
}