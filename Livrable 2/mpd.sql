#------------------------------------------------------------
#        Script MySQL.
#------------------------------------------------------------


#------------------------------------------------------------
# Table: Ville
#------------------------------------------------------------

CREATE TABLE Ville(
        ville       Char (40) NOT NULL ,
        code_postal Varchar (5) NOT NULL ,
        pays        Char (40) NOT NULL
        ,CONSTRAINT Ville_PK PRIMARY KEY (ville)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Adresse
#------------------------------------------------------------

CREATE TABLE Adresse(
        id_adresse Int  Auto_increment  NOT NULL ,
        numero_rue Int NOT NULL ,
        nom_rue    Char (40) NOT NULL ,
        ville      Char (40) NOT NULL
        ,CONSTRAINT Adresse_PK PRIMARY KEY (id_adresse)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Client
#------------------------------------------------------------

CREATE TABLE Client(
        id_client                 Int  Auto_increment  NOT NULL ,
        client_nom                Char (40) NOT NULL ,
        client_prenom             Char (40) NOT NULL ,
        client_date_naissance     Date NOT NULL ,
        client_date_premier_achat Date NOT NULL ,
        client_adresse_mail       Varchar (40) ,
        client_numero_telephone   Varchar (10)
        ,CONSTRAINT Client_PK PRIMARY KEY (id_client)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Article
#------------------------------------------------------------

CREATE TABLE Article(
        id_article                        Int  Auto_increment  NOT NULL ,
        article_nom                       Varchar (40) NOT NULL ,
        article_quantite                  Int NOT NULL ,
        article_puht                      Real NOT NULL ,
        article_nature                    Char (40) NOT NULL ,
        artcile_seuil_reapprovisionnement Int NOT NULL
        ,CONSTRAINT Article_PK PRIMARY KEY (id_article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Livre
#------------------------------------------------------------

CREATE TABLE Livre(
        id_adresse   Int NOT NULL ,
        id_client    Int NOT NULL ,
        type_adresse Char (5) NOT NULL
        ,CONSTRAINT Livre_PK PRIMARY KEY (id_adresse,id_client)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Personnel
#------------------------------------------------------------

CREATE TABLE Personnel(
        id_personnel               Int  Auto_increment  NOT NULL ,
        personnel_nom              Char (40) NOT NULL ,
        personnel_prenom           Char (40) NOT NULL ,
        personnel_date_embauche    Date NOT NULL ,
        personnel_adresse_mail     Varchar (40) ,
        personnel_numero_telephone Varchar (10) ,
        id_adresse                 Int NOT NULL ,
        id_personnel_Est_gere      Int
        ,CONSTRAINT Personnel_PK PRIMARY KEY (id_personnel)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Commande
#------------------------------------------------------------

CREATE TABLE Commande(
        id_commande       Int  Auto_increment  NOT NULL ,
        ref_commande      Varchar (40) NOT NULL ,
        date_livraison    Date NOT NULL ,
        date_emission     Date NOT NULL ,
        total_articles    Real NOT NULL ,
        montant_total_ht  Real NOT NULL ,
        montant_total_tva Real NOT NULL ,
        montant_total_ttc Real NOT NULL ,
        id_client         Int NOT NULL ,
        id_facture        Int NOT NULL
        ,CONSTRAINT Commande_PK PRIMARY KEY (id_commande)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Facture
#------------------------------------------------------------

CREATE TABLE Facture(
        id_facture            Int  Auto_increment  NOT NULL ,
        nom_societe           Varchar (40) NOT NULL ,
        numero_service_client Varchar (40) NOT NULL ,
        logo_societe          Varchar (40) NOT NULL ,
        id_commande           Int NOT NULL
        ,CONSTRAINT Facture_PK PRIMARY KEY (id_facture)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Paiement
#------------------------------------------------------------

CREATE TABLE Paiement(
        id_paiement     Int  Auto_increment  NOT NULL ,
        date_paiement   Date NOT NULL ,
        date_reglement  Date NOT NULL ,
        moyen_paiement  Char (40) NOT NULL ,
        solde_reglement Real NOT NULL ,
        id_facture      Int NOT NULL
        ,CONSTRAINT Paiement_PK PRIMARY KEY (id_paiement)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Contenir
#------------------------------------------------------------

CREATE TABLE Contenir(
        id_article  Int NOT NULL ,
        id_commande Int NOT NULL ,
        quantite    Int NOT NULL
        ,CONSTRAINT Contenir_PK PRIMARY KEY (id_article,id_commande)
)ENGINE=InnoDB;




ALTER TABLE Adresse
        ADD CONSTRAINT Adresse_Ville0_FK
        FOREIGN KEY (ville)
        REFERENCES Ville(ville);

ALTER TABLE Livre
        ADD CONSTRAINT Livre_Adresse0_FK
        FOREIGN KEY (id_adresse)
        REFERENCES Adresse(id_adresse);

ALTER TABLE Livre
        ADD CONSTRAINT Livre_Client1_FK
        FOREIGN KEY (id_client)
        REFERENCES Client(id_client);

ALTER TABLE Personnel
        ADD CONSTRAINT Personnel_Adresse0_FK
        FOREIGN KEY (id_adresse)
        REFERENCES Adresse(id_adresse);

ALTER TABLE Personnel
        ADD CONSTRAINT Personnel_Personnel1_FK
        FOREIGN KEY (id_personnel_Est_gere)
        REFERENCES Personnel(id_personnel);

ALTER TABLE Commande
        ADD CONSTRAINT Commande_Client0_FK
        FOREIGN KEY (id_client)
        REFERENCES Client(id_client);

ALTER TABLE Commande
        ADD CONSTRAINT Commande_Facture1_FK
        FOREIGN KEY (id_facture)
        REFERENCES Facture(id_facture);

ALTER TABLE Commande 
        ADD CONSTRAINT Commande_Facture0_AK 
        UNIQUE (id_facture);

ALTER TABLE Facture
        ADD CONSTRAINT Facture_Commande0_FK
        FOREIGN KEY (id_commande)
        REFERENCES Commande(id_commande);

ALTER TABLE Facture 
        ADD CONSTRAINT Facture_Commande0_AK 
        UNIQUE (id_commande);

ALTER TABLE Paiement
        ADD CONSTRAINT Paiement_Facture0_FK
        FOREIGN KEY (id_facture)
        REFERENCES Facture(id_facture);

ALTER TABLE Contenir
        ADD CONSTRAINT Contenir_Article0_FK
        FOREIGN KEY (id_article)
        REFERENCES Article(id_article);

ALTER TABLE Contenir
        ADD CONSTRAINT Contenir_Commande1_FK
        FOREIGN KEY (id_commande)
        REFERENCES Commande(id_commande);
