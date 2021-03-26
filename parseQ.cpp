//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 3/23/21                                            //
// purpose: FastQ Parser Package Implementation             //
//////////////////////////////////////////////////////////////

#pragma
#include <iostream> 
#include <fstream>
#include <string>
#include <vector>
#include "parseQ.h"
namespace parse {

  pFastQ* fastQ(std::string fileName){
    std::cout << "Processing FASTQ" << "\n";
    pFastQ *lime = new pFastQ;
    std::ifstream inFile(fileName);
    std::string myLine;
    std::string tempStr = "";
    std::cout << "Creating Struct\n";

    while(getline(inFile, myLine)){
        tempStr = myLine[0];

        if(tempStr.compare("@") == 0){
            //std::cout << myLine << "\n";
            lime->seqID->push_back(myLine);
        }else if(tempStr.compare("A") || tempStr.compare("T") || tempStr.compare("G") || tempStr.compare("C")){
            //std::cout << myLine << "\n";
            lime->seqBody->push_back(myLine);
        }else if(tempStr.compare("+")){
            //std::cout << myLine << "\n";
        }else{
            //std::cout << myLine << "\n";
            lime->seqQual->push_back(myLine);
        }
    }
    inFile.close();
    return lime;
  }

}
