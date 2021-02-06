//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: Fasta Parser Package Header                     //
//////////////////////////////////////////////////////////////

#pragma
#include <fstream>
#include <string>
#include <vector>

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
    return numGreater;
  }

  struct pFast{
    std::vector <std::string> head;
    std::vector <std::string> body;
  };


  pFast fasta(std::string fileName){
    pFast melon;
    std::ifstream inFile(fileName);
    int arraySize = numLines(fileName);
    int index = 0;
    std::string myLine;
    std::string tempStr = "";

    while(getline(inFile, myLine)){
      tempStr = myLine[0];

      if(tempStr.compare(">") == 0){
        melon.head.push_back(myLine);
      }else{
              melon.body.push_back(myLine);
           }
    }
    inFile.close();
    return melon;
  }

}
