// Copyright (c) 2021 Liam Fletcher all rights reserved
//
// Created by Liam Fletcher
// Created on Oct 2021
// This program uses an associative array to convert strings to hex


#include <iostream>
#include <map>


std::string HexStr(std::string UserStr) {
    // This program uses an associative array to convert strings to hex

    std::string hexStr = "";

    // This program uses an associative array to convert strings to hex
    std::map<char, std::string> characters;

    // Hex characters
    characters[' '] = " 0x20";
    characters['!'] = " 0x21";
    characters['#'] = " 0x23";
    characters['$'] = " 0x24";
    characters['%'] = " 0x25";
    characters['&'] = " 0x26";
    characters['"'] = " 0x27";
    characters['('] = " 0x28";
    characters[')'] = " 0x29";
    characters['*'] = " 0x2a";
    characters['+'] = " 0x2b";
    characters[','] = " 0x2c";
    characters['-'] = " 0x2d";
    characters['.'] = " 0x2e";
    characters['/'] = " 0x2f";
    characters['0'] = " 0x30";
    characters['1'] = " 0x31";
    characters['2'] = " 0x32";
    characters['3'] = " 0x33";
    characters['4'] = " 0x34";
    characters['5'] = " 0x35";
    characters['6'] = " 0x36";
    characters['7'] = " 0x37";
    characters['8'] = " 0x38";
    characters['9'] = " 0x39";
    characters[':'] = " 0x3a";
    characters[';'] = " 0x3b";
    characters['<'] = " 0x3c";
    characters['='] = " 0x3d";
    characters['>'] = " 0x3e";
    characters['?'] = " 0x3f";
    characters['@'] = " 0x40";
    characters['A'] = " 0x41";
    characters['B'] = " 0x42";
    characters['C'] = " 0x43";
    characters['D'] = " 0x44";
    characters['E'] = " 0x45";
    characters['F'] = " 0x46";
    characters['G'] = " 0x47";
    characters['H'] = " 0x48";
    characters['I'] = " 0x49";
    characters['J'] = " 0x4a";
    characters['K'] = " 0x4b";
    characters['L'] = " 0x4c";
    characters['M'] = " 0x4d";
    characters['N'] = " 0x4e";
    characters['O'] = " 0x4f";
    characters['P'] = " 0x50";
    characters['Q'] = " 0x51";
    characters['R'] = " 0x52";
    characters['S'] = " 0x53";
    characters['T'] = " 0x54";
    characters['U'] = " 0x55";
    characters['V'] = " 0x56";
    characters['W'] = " 0x57";
    characters['X'] = " 0x58";
    characters['Y'] = " 0x59";
    characters['Z'] = " 0x5a";
    characters['['] = " 0x5b";
    characters[']'] = " 0x5d";
    characters['^'] = " 0x5e";
    characters['_'] = " 0x5f";
    characters['`'] = " 0x60";
    characters['a'] = " 0x61";
    characters['b'] = " 0x62";
    characters['c'] = " 0x63";
    characters['d'] = " 0x64";
    characters['e'] = " 0x65";
    characters['f'] = " 0x66";
    characters['g'] = " 0x67";
    characters['h'] = " 0x68";
    characters['i'] = " 0x69";
    characters['j'] = " 0x6a";
    characters['k'] = " 0x6b";
    characters['l'] = " 0x6c";
    characters['m'] = " 0x6d";
    characters['n'] = " 0x6e";
    characters['o'] = " 0x6f";
    characters['p'] = " 0x70";
    characters['q'] = " 0x71";
    characters['r'] = " 0x72";
    characters['s'] = " 0x73";
    characters['t'] = " 0x74";
    characters['u'] = " 0x75";
    characters['v'] = " 0x76";
    characters['w'] = " 0x77";
    characters['x'] = " 0x78";
    characters['y'] = " 0x79";
    characters['z'] = " 0x7a";
    characters['{'] = " 0x7b";
    characters['|'] = " 0x7c";
    characters['}'] = " 0x7d";
    characters['~'] = " 0x7e";
    // process & output
    for (char charStr : UserStr) {
        if (characters.count(charStr) > 0) {
            hexStr += characters[charStr];
        }
    }
    return "'" + UserStr + "'" + " in hex is" + hexStr + ".";
}

int main() {
    std::string userStr = "";
    std::string Var;

    // input
    std::cout << "Enter a string to be converted into hex: ";
    std::cin >> userStr;
    HexStr(userStr);
    Var = HexStr(userStr);

    std::cout << "" << std::endl;
    std::cout <<  Var << std::endl;
    std::cout << "\nDone." << std::endl;
}
