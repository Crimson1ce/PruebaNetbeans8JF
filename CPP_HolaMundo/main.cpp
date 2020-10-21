/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josué Fernández
 *
 * Created on 16 de octubre de 2020, 09:11 AM
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
 * 
 */
int main(int argc, char** argv) {

    string nombre;
    cout << "Hola Mundo" << endl
            << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "¡Hola " << nombre << "!";
    
    return 0;
}

