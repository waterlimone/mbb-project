//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: Fasta Parser Package Header                     //
//////////////////////////////////////////////////////////////

#include<string>
#include<vector>

namespace parse {

  int numLines(std::string fileName);

  struct pFast{
    std::vector <std::string> head;
    std::vector <std::string> body;
    int numFasta;
  };


  pFast fasta(std::string fileName);
}
