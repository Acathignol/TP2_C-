
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

#include "Image.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(){
  printf("Hello World!\n"); 

  int toto=234;
  std::ofstream f;
  f.open("yop.txt",std::ios::out | std::ios::trunc);
  f<<"toto vaut"<<" "<<toto<<"\n";
  f.close();
  
  std::string input;
  std::ifstream fi;
  fi.open("yop.txt", std::ios::in);
  fi>>input>>toto;
  fi.close();
  
  //~ std::ofstream fil("yop.txt",std::ios::out|std::ios::trunc|std::ios::binary) ;
  //~ int x=10;
  //~ fil.write((char*)&x,sizeof(x));
  //~ fil.close();                              PQ MARCHE PAS?????
  
  
  
  
  return 1;
}
