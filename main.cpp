#include <iostream>

using namespace std;

class life {
  
  public:
    void MainMenu();
    void putMenu();
    
    void changeParameters();
    void putSubMenu();

    void clearScreen(){};
    void clearView(){};
    void randomize(){};
    void setActive(){};
    void loadFile(){};
    void moveView(){};
    void genStep(){};
    void toggle(){};
    
  private:
    bool active;
    unsigned int generations, currentGen = 0;
    unsigned int moveSize = 1;
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
      case 'V':
        clearView();
        break;
      case 'R': 
        randomize();
        break;
      case 'P':
        changeParameters();
        break; 
      case 'G':
        setActive();
        break;
      case 'T':
        toggle();
        break;
      case 'O':
        loadFile();
        break;
      case 'M':
        moveView();
        break;
      case 'S':
        genStep();
        break;
      case 'Q':
        exit(0);
        break;
      }
    inputChar = cin.get();
    }
  }
}



void life::putMenu() {
  cout << "Gen: " << currentGen << " L:'" << lChar << "' D:'" << dChar << "' Movement Factor: " << moveSize << "" << endl;
  cout << "(C)lear All, Clear (V)iew, (R)andom, (P)arameters, (G)o, (T)oggle, (O)pen File, (Q)uit $ ";
}


void life::changeParameters() {
  char inputChar = cin.get();
  while(true){
    putSubMenu();
    while(inputChar != '\n') {
      switch(inputChar) {
        case 'L':
          break;
        case 'D':
          break;
        case 'M':
          break;
        case 'G':
          break;
        case 'B':
          return;
          break;
      }
    }
    inputChar = cin.get();
  }
}


void life::putSubMenu() {
  cout << "(L)ife Symbol, (D)eath Symbol, (M)ovement Factor, (G)en Size, (B)ack $ ";
}








































































































































































































int main() {
  
  life Life;
  Life.MainMenu();
  
}