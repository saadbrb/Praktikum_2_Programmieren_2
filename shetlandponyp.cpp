#include "shetlandponyp.h"


bool ShetlandponyP::istKiunderlieb(){
    return kinderlieb;
}
bool ShetlandponyP::istReitbar(int zahl){

    if(zahl > 8 && zahl <= 12){
        return true;
    }
    else if (zahl >= 5 && zahl <= 8 && istKiunderlieb()) {
        return true;
    }
    else {
        return false;
    }
}
void ShetlandponyP::zeigInfo(){

    std::cout<<"Shetlandpony";
    std::cout<<" "<<gibName()<<"       "<<gibGeburtsJahr()<<" ";
    if(istKiunderlieb()){
        std::cout<<"   y \n";
    }
    else {
        std::cout<<"   n \n";
    }
}
unsigned ShetlandponyP::getArt(){
    return art;

}

bool ShetlandponyP::gibFrage(){
    return kinderlieb;
}
