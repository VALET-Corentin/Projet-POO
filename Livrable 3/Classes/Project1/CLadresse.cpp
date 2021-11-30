#include "CLadresse.h"

int CLadresse::getIdadresse()
{
    return id_adresse;
}

void CLadresse::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

System::String^ CLadresse::getNumerorue()
{
    return numero_rue;
}

void CLadresse::setNumerorue(System::String^ numerorue)
{
    numero_rue = numerorue;
}

System::String^ CLadresse::getNomrue()
{
    return nom_rue;
}

void CLadresse::setNomrue(System::String^ nomrue)
{
    nom_rue = nomrue;
}

System::String^ CLadresse::getVille()
{
    return ville;
}

void CLadresse::setVille(System::String^ ville)
{
    this->ville = ville;
}

