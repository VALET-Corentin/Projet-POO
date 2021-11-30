#pragma once
#include <string>
#include <iostream>

using namespace std;

ref class CLclient
{
	int id_client;
	System::String^ client_nom;
	System::String^ client_prénom;
	System::String^ client_date_naissance;
	System::String^ client_date_premier_achat;
	System::String^ client_adresse_mail;
	System::String^ client_numero_telephone;
public:
    int getIdclient();
    void setIdclient(int idclient);

    System::String^ getClientnom();
    void setClientnom(System::String^ clientnom);

    System::String^ getClientprnom();
    void setClientprnom(System::String^ clientprnom);

    System::String^ getClientdatenaissance();
    void setClientdatenaissance(System::String^ clientdatenaissance);

    System::String^ getClientdatepremierachat();
    void setClientdatepremierachat(System::String^ clientdatepremierachat);

    System::String^ getClientadressemail();
    void setClientadressemail(System::String^ clientadressemail);

    System::String^ getClientnumerotelephone();
    void setClientnumerotelephone(System::String^ clientnumerotelephone);

};

