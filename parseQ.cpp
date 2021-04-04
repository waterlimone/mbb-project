//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 3/23/21                                            //
// purpose: FastQ Parser Package Implementation             //
//////////////////////////////////////////////////////////////

#pragma
#include <fstream>
#include <string>
#include <vector>
#include "parseQ.h"
namespace parse {

  pFastQ* fastQ(std::string fileName){
    pFastQ *lime = new pFastQ;
    std::ifstream inFile(fileName);
    std::string myLine;
    std::string tempStr = "";

    while(getline(inFile, myLine)){
        tempStr = myLine[0];

        if(tempStr.compare("@") == 0){
            lime->seqID->push_back(myLine);
        }else if(tempStr.compare("A") || tempStr.compare("T") || tempStr.compare("G") || tempStr.compare("C")){
            lime->seqBody->push_back(myLine);
        }else if(tempStr.compare("+")){
        }else{
            lime->seqQual->push_back(myLine);
        }
    }
    inFile.close();
    return lime;
  }

}
