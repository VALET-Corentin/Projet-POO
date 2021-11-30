#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_facture;
	protected:
	private: System::Windows::Forms::Button^ btn_produit;
	private: System::Windows::Forms::Button^ btn_commande;
	private: System::Windows::Forms::Button^ btn_client;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->btn_produit = (gcnew System::Windows::Forms::Button());
			this->btn_commande = (gcnew System::Windows::Forms::Button());
			this->btn_client = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_facture
			// 
			this->btn_facture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_facture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_facture.BackgroundImage")));
			this->btn_facture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_facture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_facture->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_facture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_facture->Location = System::Drawing::Point(542, 289);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(292, 181);
			this->btn_facture->TabIndex = 16;
			this->btn_facture->Text = L"Facture";
			this->btn_facture->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_facture->UseVisualStyleBackColor = false;
			// 
			// btn_produit
			// 
			this->btn_produit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_produit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_produit.BackgroundImage")));
			this->btn_produit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_produit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_produit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_produit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_produit->Location = System::Drawing::Point(76, 289);
			this->btn_produit->Name = L"btn_produit";
			this->btn_produit->Size = System::Drawing::Size(292, 181);
			this->btn_produit->TabIndex = 15;
			this->btn_produit->Text = L"Produits manquants";
			this->btn_produit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_produit->UseVisualStyleBackColor = false;
			// 
			// btn_commande
			// 
			this->btn_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_commande->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_commande.BackgroundImage")));
			this->btn_commande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_commande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold));
			this->btn_commande->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_commande->Location = System::Drawing::Point(542, 46);
			this->btn_commande->Name = L"btn_commande";
			this->btn_commande->Size = System::Drawing::Size(292, 181);
			this->btn_commande->TabIndex = 14;
			this->btn_commande->Text = L"Commande en cours";
			this->btn_commande->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_commande->UseVisualStyleBackColor = false;
			// 
			// btn_client
			// 
			this->btn_client->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->btn_client->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_client.BackgroundImage")));
			this->btn_client->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_client->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_client->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btn_client->Location = System::Drawing::Point(76, 46);
			this->btn_client->Name = L"btn_client";
			this->btn_client->Size = System::Drawing::Size(292, 181);
			this->btn_client->TabIndex = 13;
			this->btn_client->Text = L"Ajouter un client";
			this->btn_client->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_client->UseVisualStyleBackColor = false;
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(934, 504);
			this->Controls->Add(this->btn_facture);
			this->Controls->Add(this->btn_produit);
			this->Controls->Add(this->btn_commande);
			this->Controls->Add(this->btn_client);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Client";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Client::Client_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Client_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
