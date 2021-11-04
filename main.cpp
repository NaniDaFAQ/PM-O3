#include <iostream>

using namespace std;

class life {
  
  public:
    void MainMenu();
    void putMenu();
    
    void changeParameters();
    void putSubMenu();

    void getSet(char*);
    void getSet(unsigned int*);

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
    unsigned int generations = 100, currentGen = 0;
    unsigned int moveSize = 1;
    char lChar = 'H', dChar = ' ';
    bool world[1][1];

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

char getSetChar();
unsigned int getSetInt();

void life::changeParameters() {
  char inputChar = cin.get();
  while(true){
    while(inputChar != '\n') {
      switch(inputChar) {
        case 'L':
          cout << "New value: ";
          lChar = getSetChar();
          break;
        case 'D':
          cout << "New value: ";
          dChar = getSetChar();
          break;
        case 'M':
          cout << "New value: ";
          moveSize = getSetInt();
          break;
        case 'G':
          cout << "New value: ";
          generations = getSetInt();
          break;
        case 'R':
          break;
        case 'B':
          return;
          break;
      }
      inputChar = cin.get();
    }
    if(inputChar == '\n') {
      putSubMenu();
    }
    inputChar = cin.get();
  }
}


void life::putSubMenu() {
  cout << "(L)ife Symbol, (D)eath Symbol, (M)ovement Factor, (G)en Size, (R)andom Chance, (B)ack $ ";
}


char getSetChar() {
  char temp = cin.get();
  while(temp == '\n') {
    temp = cin.get();
  }
  return temp;
}


unsigned int getSetInt() {
  unsigned int changed = 0;
  char t = cin.get();
  while(t == '\n') {
    t = cin.get();
  }
  while(t != '\n') {
    if(t >= '0' && t <= '9') {
        changed *= 10;
        changed += (t - '0');
    }
    t = cin.get();
  }
  return changed;
}





































































































































































































int main() {
  
  life Life;
  Life.MainMenu();
  
}