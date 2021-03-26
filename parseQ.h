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
            std::vector <std::string> *seqID = new std::vector <std::string>;
            std::vector <std::string> *seqBody = new std::vector <std::string>;
            std::vector <std::string> *seqQual = new std::vector <std::string>;
        ~pFastQ(){ delete seqID; delete seqBody; delete seqQual; } 
    };


  pFastQ* fastQ(std::string fileName);
}
