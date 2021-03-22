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
    std::string *header = new std::string;
    std::string *body = new std::string;
    //Constructor Function
    gene(std::string head, std::string bod){
      *header = head;
      *body = bod;
    }

    std::string retHead(){
      return *header;
    }
    std::string retBody(){
      return *body;
    }
    
    void freeMem(){
        delete header;
        delete body;
    }

    void test(){
      std::cout << "This is a Header: " + *header << std:: endl;
    }

  };

}
