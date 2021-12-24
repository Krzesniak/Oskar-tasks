//
// Created by peter on 24.12.2021.
//

#include "FileReader.h"
#include <iostream>
#include <fstream>


void FileReader::getFirstLineOfFileAndSaveToAnother() {
    std::fstream readFile;
    readFile.open("imie.txt", std::ios::in);
    if(!readFile.good()){
        exit(0);
    }
    std::string firstLine;
    std::getline(readFile, firstLine);
    readFile.close();
    std::fstream  writeFile;
    writeFile.open("osoba.txt", std::ios::out);
    writeFile<<firstLine;
    writeFile.close();

}
