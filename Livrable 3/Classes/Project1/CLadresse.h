#pragma once
#include <string>
#include <iostream>

using namespace std;

ref class CLadresse
{
	int id_adresse;
	System::String^ numero_rue;
	System::String^ nom_rue;
	System::String^ ville;
public:
    int getIdadresse();
    void setIdadresse(int idadresse);

    System::String^ getNumerorue();
    void setNumerorue(System::String^ numerorue);

    System::String^ getNomrue();
    void setNomrue(System::String^ nomrue);

    System::String^ getVille();
    void setVille(System::String^ ville);

};

