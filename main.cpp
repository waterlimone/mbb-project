//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: A c++ implementation of the python RNA aligner  //
//////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "parser.h"
#include "geneClass.h"

using namespace parse;

void loadGenes(std::string fileName){
  std::vector<std::string>::iterator head;
  std::vector<std::string>::iterator body;
  pFast melon = fasta(fileName);
  std::string headers[melon.numFasta];
  std::string bodies[melon.numFasta];

  for(head = melon.head.begin(), body = melon.body.begin();
      head < melon.head.end(), body < melon.body.end(); head++, body++){
    std::cout << *head << std::endl;
    std::cout << *body << std::endl;
  }
}

int main(){
  loadGenes("Data_RNA.fasta");

  return 0;
}
