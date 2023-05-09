#ifndef PONYHOFP_H
#define PONYHOFP_H
#include<iostream>
#include<vector>
#include<stdbool.h>
#include<cmath>
#include<algorithm>
#include<limits>
#include<string>
#include<fstream>
#include"shetlandponyp.h"
#include"islandpferdp.h"
#include"ponyp.h"
#include"stallp.h"


class PonyhofP
{
private:
    StallP stallung;
    std::vector<PonyP*> beimReiten;
    std::vector<PonyP*> weide;
public:
    //    PonyhofP(const std::string& datei);
    PonyhofP();
    void userDialog();
    void ponyHolen();
    void feierabend();
    ~PonyhofP(){

        feierabend();

        // Öffne eine Textdatei zum Schreiben
        std::ofstream file("ponyss.txt");
        if (!file.is_open()) {
            std::cout << "Datei konnte nicht geöffnet werden. Also wurde wegen dieser Fehler nichts gespeichert" << std::endl;
            return;
        }

        else {
            // Umleiten der cout-Ausgabe in die Textdatei
            std::streambuf* cout_stream = std::cout.rdbuf();
            std::cout.rdbuf(file.rdbuf());

            // Hier kommt der Code aus der ursprünglichen display-Methode hin


            for (PonyP* pony : beimReiten) {
                pony->zeigInfo();
            }

            // Zurücksetzen der cout-Ausgabe auf den ursprünglichen Buffer
            std::cout.rdbuf(cout_stream);

            // Schließe die Datei
            file.close();

            std::cout << "Ponys wurden erfolgreich in ponys.txt gespeichert." << std::endl;
        }

        for(PonyP* A: beimReiten){
            delete A;
        }


    }
};

#endif // PONYHOFP_H
