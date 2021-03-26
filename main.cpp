////////////////////////////////////////////////////////////// 
// by: Cameron McIlvenna                                    //
// date: 1/22/21                                            //
// purpose: A c++ implementation of the python RNA aligner  //
//////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "parser.h"
#include "parseQ.h"

using namespace parse;
//Global Gene Vector//
bool debug = false;
// Loads genes into structs for processing //
void loadGenes(std::string fileName, std::string mode){
    if(mode.compare("--fasta") == 0 || mode.compare("-f") == 0){ 
        pFast *melon = fasta(fileName); // fasta() passes back pFast struct 'melon' containing genes //
        std::cout << "Memory Freed" << "\n";
        delete melon; // Deletes the memory stored in the melon struct //   
    }
    if(mode.compare("--fastq") == 0 || mode.compare("-q") == 0){
        pFastQ *lime = fastQ(fileName);
        std::cout << "Memory Freed" << "\n";
        delete lime;
    }
}

int main(int argc, char *argv[]){
    if(argv[1] == NULL){
        std::cout << "You didn't enter a file path.\n";
        return 1;
    }
    if(argv[2] == NULL){
        std::cout << "Please include '-?' option for file option.\n";
        return 2;
    }
    loadGenes(argv[1], argv[2]);
    std::cout << "Ending Gracefully" << "\n";
    while(true){}
    return 0; // returns 0 *why are u here lol* //
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IMPORTANT: Warning:                                                                                                                                                      //
//           The genes contained in the gene class are going to be dynamically allocated with the term (new) because array size can not be determined before compile time.  //
//              # Note: That in order to not have a memory leak I must at some point in main deallocate the memory. This can be done easily with a for loop running though  //
//                      each object and deallocating them.                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
