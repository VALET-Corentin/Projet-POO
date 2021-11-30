#pragma once
#include <string>
#include <iostream>

using namespace std;

ref class CLville
{
	System::String^ ville;
	System::String^ code_postal;
	System::String^ pays;
public:
    System::String^ getVille();
    void setVille(System::String^ ville);

    System::String^ getCodepostal();
    void setCodepostal(System::String^ codepostal);

    System::String^ getPays();
    void setPays(System::String^ pays);

};

