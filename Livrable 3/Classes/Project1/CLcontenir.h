#pragma once
#include <string>
#include <iostream>

using namespace std;

ref class CLcontenir
{
	int id_article;
	int id_commande;
	int quantité;
public:
    int getIdarticle();
    void setIdarticle(int idarticle);

    int getIdcommande();
    void setIdcommande(int idcommande);

    int getQuantit();
    void setQuantit(int quantit);

};

