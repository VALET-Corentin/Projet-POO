#include "pch.h"
#include "MAP.h"

//====================  Classe MAP ==================== 
/*
MAP::MAP()
{

}

System::String^ MAP::Select(String^ a,String^ table, String^ column, String^ para)
{
    return "select " + a + " from " + table + " where " + column + " = '" + para + "';";
}

System::String^ MAP::Insert(String^ table,String^ column, String^ a)
{
    return "insert into " + table +" ("+column+") values('"+a+"'); ";
}

System::String^ MAP::Delete(String^ table, String^ column, String^ para)
{
    return "delete from " + table + " where " + column + " = '" + para + "';";
}

System::String^ MAP::Update(String^ table, String^ column, String^ a, String^ column2, String^ para)
{
    return "update " + table + " set " + column + " = '" + a + "' where " + column2 + " = '" + para + "';";
}
*/
//#---Classe Personne ---#

int CLpersonne::getIdpersonne()
{
    return id_personne;
}

void CLpersonne::setIdpersonne(int idpersonne)
{
    id_personne = idpersonne;
}

System::String^ CLpersonne::getNom()
{
    return nom;
}

void CLpersonne::setNom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLpersonne::getPrenom()
{
    return prenom;
}

void CLpersonne::setPrenom(System::String^ prenom)
{
    this->prenom = prenom;
}

System::String^ CLpersonne::getAdressemail()
{
    return adresse_mail;
}

void CLpersonne::setAdressemail(System::String^ adressemail)
{
    adresse_mail = adressemail;
}

System::String^ CLpersonne::getNumerotelephone()
{
    return numero_telephone;
}

void CLpersonne::setNumerotelephone(System::String^ numerotelephone)
{
    numero_telephone = numerotelephone;
}

//#---Classe Personnel ---#

int CLpersonnel::getIdadresse()
{
    return id_adresse;
}

void CLpersonnel::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

int CLpersonnel::getIdpersonnelEstgere()
{
    return id_personnel_Est_gere;
}

void CLpersonnel::setIdpersonnelEstgere(int idpersonnelEstgere)
{
    id_personnel_Est_gere = idpersonnelEstgere;
}

System::String^ CLpersonnel::getPersonneldateembauche()
{
    return personnel_date_embauche;
}

void CLpersonnel::setPersonneldateembauche(System::String^ personneldateembauche)
{
    personnel_date_embauche = personneldateembauche;
}

//#---Classe Client ---#

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
String^ CLclient::Select() 
{
    return "select * from Client ";
}
String^ CLclient::Insert()
{
    return "insert into Client ('client_nom','client_prenom','client_date_naissance','client_date_premier_achat','client_adresse_mail','client_numero_telephone') values('" + this->nom+ "','"+this->prenom+"','"+this->client_date_naissance+"','"+this->client_date_premier_achat+"','"+adresse_mail+"','"+numero_telephone+"');";
}
String^ CLclient::Delete()
{
    return "delete from Client where id_client=" + this->id_personne +";";
}
String^ CLclient::Update()
{
    return "";
}
//#---Classe Facture ---#

int CLfacture::getIdfacture()
{
    return id_facture;
}

void CLfacture::setIdfacture(int idfacture)
{
    id_facture = idfacture;
}

int CLfacture::getIdcommande()
{
    return id_commande;
}

void CLfacture::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

System::String^ CLfacture::getNomsociete()
{
    return nom_societe;
}

void CLfacture::setNomsociete(System::String^ nomsociete)
{
    nom_societe = nomsociete;
}

System::String^ CLfacture::getNumeroserviceclient()
{
    return numero_service_client;
}

void CLfacture::setNumeroserviceclient(System::String^ numeroserviceclient)
{
    numero_service_client = numeroserviceclient;
}

System::String^ CLfacture::getLogosociete()
{
    return logo_societe;
}

void CLfacture::setLogosociete(System::String^ logosociete)
{
    logo_societe = logosociete;
}

//#---Classe Paiement ---#


int CLpaiement::getIdarticle()
{
    return id_article;
}

void CLpaiement::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

System::String^ CLpaiement::getDatepaiement()
{
    return date_paiement;
}

void CLpaiement::setDatepaiement(System::String^ datepaiement)
{
    date_paiement = datepaiement;
}

System::String^ CLpaiement::getDatereglement()
{
    return date_reglement;
}

void CLpaiement::setDatereglement(System::String^ datereglement)
{
    date_reglement = datereglement;
}

System::String^ CLpaiement::getMoyenpaiement()
{
    return moyen_paiement;
}

void CLpaiement::setMoyenpaiement(System::String^ moyenpaiement)
{
    moyen_paiement = moyenpaiement;
}

System::String^ CLpaiement::getSoldereglement()
{
    return solde_reglement;
}

void CLpaiement::setSoldereglement(System::String^ soldereglement)
{
    solde_reglement = soldereglement;
}

//#---Classe Article ---#

int CLarticle::getIdarticle()
{
    return id_article;
}

void CLarticle::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

System::String^ CLarticle::getArticlenom()
{
    return article_nom;
}

void CLarticle::setArticlenom(System::String^ articlenom)
{
    article_nom = articlenom;
}

System::String^ CLarticle::getArticlequantite()
{
    return article_quantite;
}

void CLarticle::setArticlequantite(System::String^ articlequantite)
{
    article_quantite = articlequantite;
}

System::String^ CLarticle::getArticlepuht()
{
    return article_puht;
}

void CLarticle::setArticlepuht(System::String^ articlepuht)
{
    article_puht = articlepuht;
}

System::String^ CLarticle::getArticlenature()
{
    return article_nature;
}

void CLarticle::setArticlenature(System::String^ articlenature)
{
    article_nature = articlenature;
}

System::String^ CLarticle::getArticleseuilreapprovisionnement()
{
    return article_seuil_reapprovisionnement;
}

void CLarticle::setArticleseuilreapprovisionnement(System::String^ articleseuilreapprovisionnement)
{
    article_seuil_reapprovisionnement = articleseuilreapprovisionnement;
}

//#---Classe Commande ---#


int CLcommande::getIdcommande()
{
    return id_commande;
}

void CLcommande::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

int CLcommande::getTotalarticles()
{
    return total_articles;
}

void CLcommande::setTotalarticles(int totalarticles)
{
    total_articles = totalarticles;
}

System::String^ CLcommande::getRefcommande()
{
    return ref_commande;
}

void CLcommande::setRefcommande(System::String^ refcommande)
{
    ref_commande = refcommande;
}

System::String^ CLcommande::getDatelivraison()
{
    return date_livraison;
}

void CLcommande::setDatelivraison(System::String^ datelivraison)
{
    date_livraison = datelivraison;
}

System::String^ CLcommande::getDateemission()
{
    return date_emission;
}

void CLcommande::setDateemission(System::String^ dateemission)
{
    date_emission = dateemission;
}

float CLcommande::getMontanttotalht()
{
    return montant_total_ht;
}

void CLcommande::setMontanttotalht(float montanttotalht)
{
    montant_total_ht = montanttotalht;
}

float CLcommande::getMontanttotaltva()
{
    return montant_total_tva;
}

void CLcommande::setMontanttotaltva(float montanttotaltva)
{
    montant_total_tva = montanttotaltva;
}

float CLcommande::getMontanttotalttc()
{
    return montant_total_ttc;
}

void CLcommande::setMontanttotalttc(float montanttotalttc)
{
    montant_total_ttc = montanttotalttc;
}

//#---Classe Ville ---#

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

//#---Classe Livre ---#

int CLlivre::getIdadresse()
{
    return id_adresse;
}

void CLlivre::setIdadresse(int idadresse)
{
    id_adresse = idadresse;
}

int CLlivre::getIdclient()
{
    return id_client;
}

void CLlivre::setIdclient(int idclient)
{
    id_client = idclient;
}

System::String^ CLlivre::getTypeadresse()
{
    return type_adresse;
}

void CLlivre::setTypeadresse(System::String^ typeadresse)
{
    type_adresse = typeadresse;
}

//#---Classe Adresse ---#

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

//#---Classe Contenir ---#


int CLcontenir::getIdarticle()
{
    return id_article;
}

void CLcontenir::setIdarticle(int idarticle)
{
    id_article = idarticle;
}

int CLcontenir::getIdcommande()
{
    return id_commande;
}

void CLcontenir::setIdcommande(int idcommande)
{
    id_commande = idcommande;
}

int CLcontenir::getQuantit()
{
    return quantité;
}

void CLcontenir::setQuantit(int quantit)
{
    quantité = quantit;
}