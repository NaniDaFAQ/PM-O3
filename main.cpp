#include <iostream>
using namespace std;

class life {
  
  public:
    void MainMenu();
    void clearScreen(){};
    void randomize(){};
    void changeParameters(){};
    


};



void life::MainMenu() {
  while(true){
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
      case 'S':
        exit(0);
        break;
      }
    inputChar = cin.get();
    }
  }
}



int main() {
  
  life Life;
  Life.MainMenu();
  
}