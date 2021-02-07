//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 2/5/21                                             //
// purpose: class for holding information about genes       //
//////////////////////////////////////////////////////////////

#pragma
#include <iostream>
#include <string>

namespace geneClass{
  class gene {
  public:
    std::string header;
    std::string body;

    gene(std::string head, std::string bod){
      header = head;
      body = bod;
    }

    void test(){
      std::cout << header << std:: endl;
    }

  };

}
