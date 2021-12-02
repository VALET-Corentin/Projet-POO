#include "pch.h"
#include "ServicesVille.h"

servicesville::servicesville(void)
{
    this->oCad = gcnew CAD();
    this->oMap = gcnew CLville();
}

DataSet^ servicesville::selectionnerville(String^ nomtable)
{
    String^ sql;
    sql = this->oMap->Select();
    return this->oCad->getRows(sql, nomtable);
}



void servicesville::setoMap(CLville^ ville)
{
    this->oMap = ville;
}
CLville^ servicesville::getoMap(void)
{
    return oMap;
}

void servicesville::setoCad(CAD^ connection)
{
    this->oCad = connection;
}
CAD^ servicesville::getoCad(void)
{
    return oCad;
}