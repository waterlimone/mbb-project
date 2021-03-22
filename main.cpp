//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: A c++ implementation of the python RNA aligner  //
//////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "parser.h"
#include "geneClass.h"

using namespace parse;
using namespace geneClass;
//Global Gene Vector//
std::vector<gene> genes;

// After parsing headers and bodies will be loaded into vector::genes for further procesing //
void loadGenes(std::string fileName){
    std::vector<std::string>::iterator head; //creates iterators for For Loop
    std::vector<std::string>::iterator body;
    pFast melon = fasta(fileName); // melon passes back structs to be be fed to the class (gene)

// Creates an array of gene (name of the class)
    for(head = melon.head->begin(), body = melon.body->begin(); body < melon.body->end(); head++, body++){ //uses the iterator begin() to iterator end() to traverse the vector //
        genes.emplace_back(gene(*head, *body)); // Passing pointers in order to keep memory in one place //
        std::cout << *head << "\n";
        std::cout << *body << "\n";
    }
}

int main(int argc, char *argv[]){
    loadGenes(argv[1]);
    return 0; // returns 0 *why are u here lol* //
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IMPORTANT: Warning:                                                                                                                                                      //
//           The genes contained in the gene class are going to be dynamically allocated with the term (new) because array size can not be determined before compile time.  //
//              # Note: That in order to not have a memory leak I must at some point in main deallocate the memory. This can be done easily with a for loop running though  //
//                      each object and deallocating them.                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
