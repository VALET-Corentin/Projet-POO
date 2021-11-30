#include "CLclient.h"

int CLclient::getIdclient()
{
    return id_client;
}

void CLclient::setIdclient(int idclient)
{
    id_client = idclient;
}

System::String^ CLclient::getClientnom()
{
    return client_nom;
}

void CLclient::setClientnom(System::String^ clientnom)
{
    client_nom = clientnom;
}

System::String^ CLclient::getClientprnom()
{
    return client_prénom;
}

void CLclient::setClientprnom(System::String^ clientprnom)
{
    client_prénom = clientprnom;
}

System::String^ CLclient::getClientdatenaissance()
{
    return client_date_naissance;
}

void CLclient::setClientdatenaissance(System::String^ clientdatenaissance)
{
    client_date_naissance = clientdatenaissance;
}

System::String^ CLclient::getClientdatepremierachat()
{
    return client_date_premier_achat;
}

void CLclient::setClientdatepremierachat(System::String^ clientdatepremierachat)
{
    client_date_premier_achat = clientdatepremierachat;
}

System::String^ CLclient::getClientadressemail()
{
    return client_adresse_mail;
}

void CLclient::setClientadressemail(System::String^ clientadressemail)
{
    client_adresse_mail = clientadressemail;
}

System::String^ CLclient::getClientnumerotelephone()
{
    return client_numero_telephone;
}

void CLclient::setClientnumerotelephone(System::String^ clientnumerotelephone)
{
    client_numero_telephone = clientnumerotelephone;
}

