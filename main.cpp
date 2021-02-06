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
using namespace geneClass;



void loadGenes(std::string fileName){
  std::vector<std::string>::iterator head; //creates iterators for For Loop
  std::vector<std::string>::iterator body;
  pFast melon = fasta(fileName); // melon passes back struct to be be fed to the class (gene)
  std::string headers[melon.numFasta]; //creates two arrays of correct size to be passed to the class (gene)
  std::string bodies[melon.numFasta];  //continued...
  std::vector<gene> genes; 
// Creates an array of gene (name of the class)
  for(head = melon.head.begin(), body = melon.body.begin(); head < melon.head.end(), body < melon.body.end(); head++, body++){ //uses the iterator begin() to iterator end() to traverse the vector//
    std::cout << *head << std::endl;
    std::cout << *body << std::endl;

  }
}

int main(){
  loadGenes("Data_RNA.fasta");

  return 0; // returns 0 *why are u here lol* //
}
