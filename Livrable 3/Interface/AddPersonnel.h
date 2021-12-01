#pragma once
#include "MAP.h"
#include "ServicesPersonnel.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AddPersonnel
	/// </summary>
	public ref class AddPersonnel : public System::Windows::Forms::Form
	{
	public:
		AddPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ labeldateembauche;

	private: System::Windows::Forms::Label^ labelsupperieur;

	private: System::Windows::Forms::Label^ labelprenom;
	private: System::Windows::Forms::Label^ labelmail;
	private: System::Windows::Forms::Label^ labeltelephone;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labeladdpersonnem;
	private: System::Windows::Forms::Button^ buttoncreer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ Adresse;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxadresszipcode;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxaddresscity;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxaddressenumber;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxaddressstreetname;






	private:
		Point PanelMouseDownLocation;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AddPersonnel()
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
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->labeldateembauche = (gcnew System::Windows::Forms::Label());
			this->labelsupperieur = (gcnew System::Windows::Forms::Label());
			this->labelprenom = (gcnew System::Windows::Forms::Label());
			this->labelmail = (gcnew System::Windows::Forms::Label());
			this->labeltelephone = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labeladdpersonnem = (gcnew System::Windows::Forms::Label());
			this->buttoncreer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Adresse = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxadresszipcode = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxaddresscity = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxaddressenumber = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxaddressstreetname = (gcnew System::Windows::Forms::TextBox());
			this->panelmove1->SuspendLayout();
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
			this->panelmove1->TabIndex = 27;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddPersonnel::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddPersonnel::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &AddPersonnel::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &AddPersonnel::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &AddPersonnel::X_MouseLeave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(330, 186);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(330, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 29;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(330, 279);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 30;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddPersonnel::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(330, 247);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(330, 122);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 32;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(330, 153);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 31;
			// 
			// labeldateembauche
			// 
			this->labeldateembauche->AutoSize = true;
			this->labeldateembauche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldateembauche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labeldateembauche->Location = System::Drawing::Point(166, 242);
			this->labeldateembauche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeldateembauche->Name = L"labeldateembauche";
			this->labeldateembauche->Size = System::Drawing::Size(159, 25);
			this->labeldateembauche->TabIndex = 37;
			this->labeldateembauche->Text = L"Date d\'embauche";
			// 
			// labelsupperieur
			// 
			this->labelsupperieur->AutoSize = true;
			this->labelsupperieur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsupperieur->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelsupperieur->Location = System::Drawing::Point(82, 273);
			this->labelsupperieur->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelsupperieur->Name = L"labelsupperieur";
			this->labelsupperieur->Size = System::Drawing::Size(232, 25);
			this->labelsupperieur->TabIndex = 38;
			this->labelsupperieur->Text = L"N° Supérieur hierarchique";
			this->labelsupperieur->Click += gcnew System::EventHandler(this, &AddPersonnel::labelsupperieur_Click);
			// 
			// labelprenom
			// 
			this->labelprenom->AutoSize = true;
			this->labelprenom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelprenom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelprenom->Location = System::Drawing::Point(247, 116);
			this->labelprenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelprenom->Name = L"labelprenom";
			this->labelprenom->Size = System::Drawing::Size(78, 25);
			this->labelprenom->TabIndex = 39;
			this->labelprenom->Text = L"Prénom";
			// 
			// labelmail
			// 
			this->labelmail->AutoSize = true;
			this->labelmail->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelmail->Location = System::Drawing::Point(206, 148);
			this->labelmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelmail->Name = L"labelmail";
			this->labelmail->Size = System::Drawing::Size(119, 25);
			this->labelmail->TabIndex = 40;
			this->labelmail->Text = L"Adresse mail";
			// 
			// labeltelephone
			// 
			this->labeltelephone->AutoSize = true;
			this->labeltelephone->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeltelephone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labeltelephone->Location = System::Drawing::Point(226, 180);
			this->labeltelephone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeltelephone->Name = L"labeltelephone";
			this->labeltelephone->Size = System::Drawing::Size(99, 25);
			this->labeltelephone->TabIndex = 41;
			this->labeltelephone->Text = L"Téléphone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label5->Location = System::Drawing::Point(261, 86);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 25);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Nom";
			// 
			// labeladdpersonnem
			// 
			this->labeladdpersonnem->AutoSize = true;
			this->labeladdpersonnem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladdpersonnem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labeladdpersonnem->Location = System::Drawing::Point(303, 46);
			this->labeladdpersonnem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeladdpersonnem->Name = L"labeladdpersonnem";
			this->labeladdpersonnem->Size = System::Drawing::Size(182, 25);
			this->labeladdpersonnem->TabIndex = 45;
			this->labeladdpersonnem->Text = L"Création personnel";
			// 
			// buttoncreer
			// 
			this->buttoncreer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttoncreer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoncreer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttoncreer->Location = System::Drawing::Point(330, 426);
			this->buttoncreer->Margin = System::Windows::Forms::Padding(2);
			this->buttoncreer->Name = L"buttoncreer";
			this->buttoncreer->Size = System::Drawing::Size(96, 41);
			this->buttoncreer->TabIndex = 46;
			this->buttoncreer->Text = L"Créer";
			this->buttoncreer->UseVisualStyleBackColor = true;
			this->buttoncreer->Click += gcnew System::EventHandler(this, &AddPersonnel::buttoncreer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(236, 209);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 25);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Adresse";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(330, 215);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(133, 20);
			this->textBox7->TabIndex = 47;
			// 
			// Adresse
			// 
			this->Adresse->AutoSize = true;
			this->Adresse->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adresse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->Adresse->Location = System::Drawing::Point(348, 313);
			this->Adresse->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Adresse->Name = L"Adresse";
			this->Adresse->Size = System::Drawing::Size(81, 25);
			this->Adresse->TabIndex = 57;
			this->Adresse->Text = L"Adresse";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label8->Location = System::Drawing::Point(604, 349);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 25);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Code postal";
			// 
			// textBoxadresszipcode
			// 
			this->textBoxadresszipcode->Location = System::Drawing::Point(623, 388);
			this->textBoxadresszipcode->Margin = System::Windows::Forms::Padding(2);
			this->textBoxadresszipcode->Name = L"textBoxadresszipcode";
			this->textBoxadresszipcode->Size = System::Drawing::Size(76, 20);
			this->textBoxadresszipcode->TabIndex = 55;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label7->Location = System::Drawing::Point(486, 349);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 25);
			this->label7->TabIndex = 54;
			this->label7->Text = L"Ville";
			// 
			// textBoxaddresscity
			// 
			this->textBoxaddresscity->Location = System::Drawing::Point(473, 388);
			this->textBoxaddresscity->Margin = System::Windows::Forms::Padding(2);
			this->textBoxaddresscity->Name = L"textBoxaddresscity";
			this->textBoxaddresscity->Size = System::Drawing::Size(76, 20);
			this->textBoxaddresscity->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label6->Location = System::Drawing::Point(53, 349);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 25);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Numéros de rue";
			// 
			// textBoxaddressenumber
			// 
			this->textBoxaddressenumber->Location = System::Drawing::Point(73, 388);
			this->textBoxaddressenumber->Margin = System::Windows::Forms::Padding(2);
			this->textBoxaddressenumber->Name = L"textBoxaddressenumber";
			this->textBoxaddressenumber->Size = System::Drawing::Size(93, 20);
			this->textBoxaddressenumber->TabIndex = 51;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(267, 349);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 25);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Nom de rue";
			// 
			// textBoxaddressstreetname
			// 
			this->textBoxaddressstreetname->Location = System::Drawing::Point(240, 388);
			this->textBoxaddressstreetname->Margin = System::Windows::Forms::Padding(2);
			this->textBoxaddressstreetname->Name = L"textBoxaddressstreetname";
			this->textBoxaddressstreetname->Size = System::Drawing::Size(160, 20);
			this->textBoxaddressstreetname->TabIndex = 49;
			// 
			// AddPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->Adresse);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxadresszipcode);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxaddresscity);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxaddressenumber);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxaddressstreetname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->buttoncreer);
			this->Controls->Add(this->labeladdpersonnem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labeltelephone);
			this->Controls->Add(this->labelmail);
			this->Controls->Add(this->labelprenom);
			this->Controls->Add(this->labelsupperieur);
			this->Controls->Add(this->labeldateembauche);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddPersonnel";
			this->Text = L"AddPersonnel";
			this->Load += gcnew System::EventHandler(this, &AddPersonnel::AddPersonnel_Load);
			this->panelmove1->ResumeLayout(false);
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
			AddPersonnel::Left += e->X - PanelMouseDownLocation.X;
			AddPersonnel::Top += e->Y - PanelMouseDownLocation.Y;
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
	private: System::Void AddPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttoncreer_Click(System::Object^ sender, System::EventArgs^ e) {
		servicespersonnel^ oservicespersonnel = gcnew servicespersonnel();
		CLpersonnel^ opersonnel = gcnew CLpersonnel();
		CAD^ connection = gcnew CAD();


		opersonnel->setNom(textBox2->Text);
		opersonnel->setPrenom(textBox5->Text);
		opersonnel->setAdressemail(textBox6->Text);
		opersonnel->setNumerotelephone(textBox1->Text);
		opersonnel->setPersonneldateembauche(textBox4->Text);
		opersonnel->setIdpersonnelEstgere(textBox3->Text);
		
		oservicespersonnel->setoMap(opersonnel);
		oservicespersonnel->insererpersonnel(opersonnel);
		this->Close();
	}
	private: System::Void labelsupperieur_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
