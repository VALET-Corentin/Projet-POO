#pragma once
#include <string>
#include <iostream>

using namespace std;

ref class CLlivre
{
	int id_adresse;
	int id_client;
	System::String^ type_adresse;
public:
    int getIdadresse();
    void setIdadresse(int idadresse);

    int getIdclient();
    void setIdclient(int idclient);

    System::String^ getTypeadresse();
    void setTypeadresse(System::String^ typeadresse);

};

