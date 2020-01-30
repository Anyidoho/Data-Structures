/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   makeSuess.hpp
 * Author: ben
 */

#ifndef MAKESEUSS_HPP_
#define MAKESEUSS_HPP_
#include "hashMap.hpp"
#include <iostream>
using namespace std;

class makeSeuss {
    hashMap *ht;
    string fn; // file name for input (â€œDrSeuss.txtâ€�)
    string newfile; // name of output file
public:
    makeSeuss();
    makeSeuss(string file, string newf);
    void readFile();
    void writeFile();
};

#endif /* MAKESEUSS_HPP_ */

