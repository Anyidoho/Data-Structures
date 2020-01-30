

/* 
 * File:   main.cpp
 * Author: ben
 */

#include <cstdlib>
#include "hashMap.hpp"
#include "hashNode.hpp"
#include "makeSeuss.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    makeSeuss(); //reads in default DrSeuss.txt
    makeSeuss("DrSeuss.txt","out.txt");
    
    return 0;
}

