#include "CLville.h"



System::String^ CLville::getVille()
{
    return ville;
}

void CLville::setVille(System::String^ ville)
{
    this->ville = ville;
}

System::String^ CLville::getCodepostal()
{
    return code_postal;
}

void CLville::setCodepostal(System::String^ codepostal)
{
    code_postal = codepostal;
}

System::String^ CLville::getPays()
{
    return pays;
}

void CLville::setPays(System::String^ pays)
{
    this->pays = pays;
}

