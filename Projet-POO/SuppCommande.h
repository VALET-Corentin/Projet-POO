#pragma once
#include "MAP.h"
#include "ServicesCommande.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description r�sum�e de SuppCommande
	/// </summary>
	public ref class SuppCommande : public System::Windows::Forms::Form
	{
	public:
		SuppCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Label^ labelrecherche;
	public:
	private: System::Windows::Forms::Button^ buttonsupprimer;
	private: System::Windows::Forms::Button^ buttonrechercher;
	private: System::Windows::Forms::Label^ labelsupprimer;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ labelnclient;
	private: System::Windows::Forms::TextBox^ textBoxrefsuppcommande;

	private: System::Windows::Forms::TextBox^ textBoxrefcommande;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_commande;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ref_commande;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date_livraison;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date_emission;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_articles;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montant_total_ht;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montant_total_tva;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montant_total_ttc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_client;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_facture;






	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~SuppCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->buttonsupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
			this->labelsupprimer = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->labelnclient = (gcnew System::Windows::Forms::Label());
			this->textBoxrefsuppcommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxrefcommande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_commande = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ref_commande = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_livraison = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_emission = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_articles = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montant_total_ht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montant_total_tva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montant_total_ttc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id_client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id_facture = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 0);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 15;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppCommande::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppCommande::panelmove1_MouseMove);
			// 
			// X
			// 
			this->X->BackColor = System::Drawing::Color::White;
			this->X->FlatAppearance->BorderSize = 0;
			this->X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->X->Location = System::Drawing::Point(765, 0);
			this->X->Margin = System::Windows::Forms::Padding(2);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(28, 32);
			this->X->TabIndex = 1;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = false;
			this->X->Click += gcnew System::EventHandler(this, &SuppCommande::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &SuppCommande::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &SuppCommande::X_MouseLeave);
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(108, 50);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 36;
			this->labelrecherche->Text = L"Recherche";
			// 
			// buttonsupprimer
			// 
			this->buttonsupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonsupprimer->Location = System::Drawing::Point(655, 106);
			this->buttonsupprimer->Margin = System::Windows::Forms::Padding(2);
			this->buttonsupprimer->Name = L"buttonsupprimer";
			this->buttonsupprimer->Size = System::Drawing::Size(127, 41);
			this->buttonsupprimer->TabIndex = 35;
			this->buttonsupprimer->Text = L"Supprimer";
			this->buttonsupprimer->UseVisualStyleBackColor = true;
			this->buttonsupprimer->Click += gcnew System::EventHandler(this, &SuppCommande::buttonsupprimer_Click);
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(250, 106);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(127, 41);
			this->buttonrechercher->TabIndex = 34;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			this->buttonrechercher->Click += gcnew System::EventHandler(this, &SuppCommande::buttonrechercher_Click);
			// 
			// labelsupprimer
			// 
			this->labelsupprimer->AutoSize = true;
			this->labelsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelsupprimer->Location = System::Drawing::Point(506, 50);
			this->labelsupprimer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelsupprimer->Name = L"labelsupprimer";
			this->labelsupprimer->Size = System::Drawing::Size(122, 25);
			this->labelsupprimer->TabIndex = 33;
			this->labelsupprimer->Text = L"Suppression";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->nom->Location = System::Drawing::Point(28, 114);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(95, 25);
			this->nom->TabIndex = 32;
			this->nom->Text = L"R�f�rence";
			// 
			// labelnclient
			// 
			this->labelnclient->AutoSize = true;
			this->labelnclient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnclient->Location = System::Drawing::Point(453, 114);
			this->labelnclient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnclient->Name = L"labelnclient";
			this->labelnclient->Size = System::Drawing::Size(95, 25);
			this->labelnclient->TabIndex = 30;
			this->labelnclient->Text = L"R�f�rence";
			// 
			// textBoxrefsuppcommande
			// 
			this->textBoxrefsuppcommande->Location = System::Drawing::Point(552, 119);
			this->textBoxrefsuppcommande->Margin = System::Windows::Forms::Padding(2);
			this->textBoxrefsuppcommande->Name = L"textBoxrefsuppcommande";
			this->textBoxrefsuppcommande->Size = System::Drawing::Size(76, 20);
			this->textBoxrefsuppcommande->TabIndex = 29;
			// 
			// textBoxrefcommande
			// 
			this->textBoxrefcommande->Location = System::Drawing::Point(127, 120);
			this->textBoxrefcommande->Margin = System::Windows::Forms::Padding(2);
			this->textBoxrefcommande->Name = L"textBoxrefcommande";
			this->textBoxrefcommande->Size = System::Drawing::Size(96, 20);
			this->textBoxrefcommande->TabIndex = 27;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->id_commande,
					this->ref_commande, this->date_livraison, this->date_emission, this->total_articles, this->montant_total_ht, this->montant_total_tva,
					this->montant_total_ttc, this->id_client, this->id_facture
			});
			this->dataGridView1->Location = System::Drawing::Point(54, 176);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(677, 291);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SuppCommande::dataGridView1_CellContentClick);
			// 
			// id_commande
			// 
			this->id_commande->HeaderText = L"id_commande";
			this->id_commande->Name = L"id_commande";
			// 
			// ref_commande
			// 
			this->ref_commande->HeaderText = L"ref_commande";
			this->ref_commande->Name = L"ref_commande";
			// 
			// date_livraison
			// 
			this->date_livraison->HeaderText = L"date_livraison";
			this->date_livraison->Name = L"date_livraison";
			// 
			// date_emission
			// 
			this->date_emission->HeaderText = L"date_emission";
			this->date_emission->Name = L"date_emission";
			// 
			// total_articles
			// 
			this->total_articles->HeaderText = L"total_articles";
			this->total_articles->Name = L"total_articles";
			// 
			// montant_total_ht
			// 
			this->montant_total_ht->HeaderText = L"montant_total_ht";
			this->montant_total_ht->Name = L"montant_total_ht";
			// 
			// montant_total_tva
			// 
			this->montant_total_tva->HeaderText = L"montant_total_tva";
			this->montant_total_tva->Name = L"montant_total_tva";
			// 
			// montant_total_ttc
			// 
			this->montant_total_ttc->HeaderText = L"montant_total_ttc";
			this->montant_total_ttc->Name = L"montant_total_ttc";
			// 
			// id_client
			// 
			this->id_client->HeaderText = L"id_client";
			this->id_client->Name = L"id_client";
			// 
			// id_facture
			// 
			this->id_facture->HeaderText = L"id_facture";
			this->id_facture->Name = L"id_facture";
			// 
			// SuppCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->buttonsupprimer);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelsupprimer);
			this->Controls->Add(this->textBoxrefcommande);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->textBoxrefsuppcommande);
			this->Controls->Add(this->labelnclient);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuppCommande";
			this->Text = L"SuppCommande";
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void X_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(221, 25, 23);
	}
	private: System::Void X_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(255, 255, 255);
	}
		   //Drag and move / panelmove1

	private: void dragFormMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			PanelMouseDownLocation = e->Location;
	}
	private: void dragFormMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			SuppCommande::Left += e->X - PanelMouseDownLocation.X;
			SuppCommande::Top += e->Y - PanelMouseDownLocation.Y;
		}
	}

	private: System::Void panelmove1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseDown(sender, e);
	}
	private: System::Void panelmove1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseMove(sender, e);
	}
	private: System::Void buttonsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		//APPLIQUER SUPPRESSION
		servicescommande^ oservicecommande = gcnew servicescommande();
		CLcommande^ oclient = gcnew CLcommande();
		CAD^ connection = gcnew CAD();
		oservicecommande->setoCad(connection);

		oclient->setIdcommande(int::Parse(textBoxrefsuppcommande->Text));

		oservicecommande->setoMap(oclient);
		oservicecommande->supprimercommande(oclient);

	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void buttonrechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ref = textBoxrefcommande->Text;

	
	String^ constring = "Data Source=LAPTOP-J0DFQRK5\\MSSQL;Initial Catalog=PROJET_POO2;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Commande where ref_commande = '" + ref + "';", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5],myReader[6],myReader[7],myReader[8],myReader[9]);
	}
	conDataBase->Close();
}
};
}
