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

  int numLines(std::string fileName){
    std::ifstream inFile(fileName);
    std::string myLine;
    std::string tempStr;
    int numGreater = 0;

    while(getline(inFile, myLine)){
      tempStr = myLine[0];

      if(tempStr.compare(">") == 0){
        numGreater ++;
      }
    }
    inFile.close();
    std::cout << "File Size: " << numGreater << " sequences\n";
    return numGreater;
  }

  pFast* fasta(std::string fileName){
    std::cout << "Processing FASTA" << "\n";
    pFast *melon = new pFast;
    std::ifstream inFile(fileName);
    float arraySize = numLines(fileName);
    std::string myLine;
    std::string tempStr = "";
    melon->numFasta = arraySize;
    std::cout << "Creating Struct\n";

    while(getline(inFile, myLine)){
        tempStr = myLine[0];

        if(tempStr.compare(">") == 0){
            //std::cout << myLine << "\n";
            melon->head.push_back(myLine);
        }else{
            //std::cout << myLine << "\n";
            melon->body.push_back(myLine);
             }
    }
    inFile.close();
    return melon;
  }

}
