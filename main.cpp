#include <iostream>
using namespace std;

class life {
  
  public:
    void MainMenu();
    void putMenu();
    void clearScreen(){};
    void randomize(){};
    void changeParameters(){};
    void toggle(){};
    void clearView(){};
    void setActive(){};
    void loadFile(){};
    void moveView(){};
    void genStep(){};
    
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
  cout << "Gen: " << currentGen << " L:'" << lChar << "' D:'" << dChar << "' Movement Factor: " << moveSize << endl;
  cout << "(C)lear All, Clear (V)iew, (R)andom, (P)arameters, (G)o, (T)oggle, (O)pen File, (Q)uit $ ";
}


//void life::changeParam

int main() {
  
  life Life;
  Life.MainMenu();
  
}