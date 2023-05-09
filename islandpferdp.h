#ifndef ISLANDPFERDP_H
#define ISLANDPFERDP_H
#include<iostream>
#include<vector>
#include<stdbool.h>
#include<cmath>
#include<algorithm>
#include<limits>
#include<string>
#include"ponyp.h"

class IslandpferdP : public PonyP
{
private:
    bool ekzemer;
    const unsigned art = 0;
public:
    IslandpferdP(int geburtsJahr_, std::string name_, bool ekzemer_, float x, float y): PonyP(geburtsJahr_,name_,x,y), ekzemer(ekzemer_){}
    bool hatEkzem();
    bool istReitbar(int zahl) override;
    bool gibFrage() override;
    void zeigInfo() override;
    unsigned getArt()override;
    ~IslandpferdP() override{}
};

#endif // ISLANDPFERDP_H
