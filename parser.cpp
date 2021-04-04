//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: Fasta Parser Package Implementation             //
//////////////////////////////////////////////////////////////

#pragma
#include <fstream>
#include <string>
#include <vector>
#include "parser.h"
namespace parse {

  pFast* fasta(std::string fileName){
    pFast *melon = new pFast;
    std::ifstream inFile(fileName);
    std::string myLine;
    std::string tempStr = "";

    while(getline(inFile, myLine)){
        tempStr = myLine[0];

        if(tempStr.compare(">") == 0){
            melon->head->push_back(myLine);
        }else{
            melon->body->push_back(myLine);
             }
    }
    inFile.close();
    return melon;
  }

}
