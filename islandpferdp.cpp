#include "islandpferdp.h"



bool IslandpferdP::istReitbar(int zahl){

    return zahl >= 10;
}
void IslandpferdP::zeigInfo(){

    std::cout<<"Islandpferd";
    std::cout<<" "<<gibName()<<"       "<<gibGeburtsJahr()<<" ";
    if(hatEkzem()){
        std::cout<<"   y \n";
    }
    else {
        std::cout<<"   n \n";
    }
}
unsigned IslandpferdP::getArt(){
    return art;
}

bool IslandpferdP::hatEkzem(){
    return ekzemer;
}
bool IslandpferdP::gibFrage() {
    return ekzemer;
}
