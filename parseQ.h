//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 3/23/21                                            //
// purpose: FastQ Parser Package Header                     //
//////////////////////////////////////////////////////////////

#include<string>
#include<vector>

namespace parse {

  int numLinesQ(std::string fileName);

  struct pFastQ{
    std::vector <std::string> seqID;
    std::vector <std::string> seqBody;
    std::vector <std::string> seqQual;
    std::vector <std::string> seqEtc;
    int numFastQ;
  };


  pFastQ* fastQ(std::string fileName);
}
