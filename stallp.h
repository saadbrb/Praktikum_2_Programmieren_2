#ifndef STALLP_H
#define STALLP_H
#include<iostream>
#include<vector>
#include<stdbool.h>
#include<cmath>
#include<algorithm>
#include <ctime>
#include <cstdlib>
#include<limits>
#include<string>
#include"ponyp.h"
#include "shetlandponyp.h"
#include "islandpferdp.h"
#define N 20

class StallP
{
private:
    PonyP* pferdeboxen[N];

public:
    StallP(){
        for(unsigned i=0; i<N; i++){
            pferdeboxen[i] = nullptr;
        }
    }
    int belgeteBoxen();
    bool einstellen(PonyP* obkjt_);
    PonyP* herausholen(std::string name_);
    float durchschnittsalter();
    void weidegang(std::vector<PonyP*> &weide);
    void zeigInfo();
    void ponyAnlegen();
    int checkInt();
    int berechneJahr();
    void feierabend(int geburtsJahr_, std::string name_, bool momen, unsigned genger);
    void pushSchet(int geburtsjahr,std::string name,bool kinderlieb);
    void pushIsland(int geburtsjahr,std::string name,bool ekzemer);
    ~StallP(){
        for(PonyP* A: pferdeboxen){
            delete A;
        }
    }
};

#endif // STALLP_H
