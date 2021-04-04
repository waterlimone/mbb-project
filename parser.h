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
        std::vector <std::string> *head =  new std::vector <std::string>;
        std::vector <std::string> *body = new std::vector <std::string>;
    ~pFast(){ delete head; delete body; }
  };


  pFast* fasta(std::string fileName);
  
  parse::pFast* alignSequence(struct parse::pFast inStruct);
}
