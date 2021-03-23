//////////////////////////////////////////////////////////////
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: A c++ implementation of the python RNA aligner  //
//////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "parser.h"

using namespace parse;
//Global Gene Vector//

// After parsing headers and bodies will be loaded into vector::genes for further procesing //
void loadGenes(std::string fileName){
    pFast *melon = fasta(fileName); // melon passes back structs to be be fed to the class (gene)
    std::cout << "Memory Freed" << "\n";
    delete melon; // Deletes the memory stored in the melon struct //   
}

int main(int argc, char *argv[]){
    loadGenes(argv[1]);
    std::cout << "Ending Gracefully" << "\n";
    return 0; // returns 0 *why are u here lol* //
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IMPORTANT: Warning:                                                                                                                                                      //
//           The genes contained in the gene class are going to be dynamically allocated with the term (new) because array size can not be determined before compile time.  //
//              # Note: That in order to not have a memory leak I must at some point in main deallocate the memory. This can be done easily with a for loop running though  //
//                      each object and deallocating them.                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
