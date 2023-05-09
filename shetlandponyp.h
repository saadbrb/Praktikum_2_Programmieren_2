#ifndef SHETLANDPONYP_H
#define SHETLANDPONYP_H
#include<iostream>
#include<vector>
#include<stdbool.h>
#include<cmath>
#include<algorithm>
#include<limits>
#include<string>
#include"ponyp.h"

class ShetlandponyP : public PonyP
{
private:
    bool kinderlieb;

    const unsigned art=1;
public:
    ShetlandponyP(int geburtsJahr_, std::string name_, bool kinderlieb_, float x, float y): PonyP(geburtsJahr_,name_, x,y), kinderlieb(kinderlieb_){}
    bool istKiunderlieb();
    bool istReitbar(int zahl) override;
    void zeigInfo() override;
    unsigned getArt()override;
    bool gibFrage() override;
    ~ShetlandponyP() override{}
};

#endif // SHETLANDPONYP_H
