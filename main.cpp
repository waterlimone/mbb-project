//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: A c++ implementation of the python RNA aligner  //
//////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "parser.h"

using namespace parse;

int main(){
  std::vector<std::string>::iterator head;
  std::vector<std::string>::iterator body;
  pFast melon = fasta("Data_RNA.fasta");

  for(head = melon.head.begin(), body = melon.body.begin();
      head < melon.head.end(), body < melon.body.end(); head++, body++){
    std::cout << *head << std::endl;
    std::cout << *body << std::endl;
  }

  return 0;
}
