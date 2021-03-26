//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: Fasta Parser Package Implementation             //
//////////////////////////////////////////////////////////////

#pragma
#include <iostream> 
#include <fstream>
#include <string>
#include <vector>
#include "parser.h"
namespace parse {

  pFast* fasta(std::string fileName){
    std::cout << "Processing FASTA" << "\n";
    pFast *melon = new pFast;
    std::ifstream inFile(fileName);
    std::string myLine;
    std::string tempStr = "";
    std::cout << "Creating Struct\n";

    while(getline(inFile, myLine)){
        tempStr = myLine[0];

        if(tempStr.compare(">") == 0){
            //std::cout << myLine << "\n";
            melon->head->push_back(myLine);
        }else{
            //std::cout << myLine << "\n";
            melon->body->push_back(myLine);
             }
    }
    inFile.close();
    return melon;
  }

}
