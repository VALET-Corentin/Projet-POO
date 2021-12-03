#pragma once
#include "MAP.h"
#include "ServicesArticle.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de ModifierArticle
	/// </summary>
	public ref class ModifierArticle : public System::Windows::Forms::Form
	{
	public:
		ModifierArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_quantite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_puht;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_nature;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ article_seuil_reapprovisionnement;

	private:
		Point PanelMouseDownLocation;


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ModifierArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::Label^ labelmodifier;




	private: System::Windows::Forms::Button^ buttonmodifier;

	private: System::Windows::Forms::Label^ labelarticlepuht;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelarticlequantité;
	private: System::Windows::Forms::Label^ labelarticlenature;
	private: System::Windows::Forms::Label^ labelnnamearticle;
	private: System::Windows::Forms::TextBox^ textBoxquantité;
	private: System::Windows::Forms::TextBox^ textBoxseuil;
	private: System::Windows::Forms::TextBox^ textBoxpuht;

	private: System::Windows::Forms::TextBox^ textBoxnature;
	private: System::Windows::Forms::TextBox^ textBoxnom;
	private: System::Windows::Forms::Label^ labelrecherche;
	private: System::Windows::Forms::Button^ buttonrechercher;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




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
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->labelmodifier = (gcnew System::Windows::Forms::Label());
			this->buttonmodifier = (gcnew System::Windows::Forms::Button());
			this->labelarticlepuht = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelarticlequantité = (gcnew System::Windows::Forms::Label());
			this->labelarticlenature = (gcnew System::Windows::Forms::Label());
			this->labelnnamearticle = (gcnew System::Windows::Forms::Label());
			this->textBoxquantité = (gcnew System::Windows::Forms::TextBox());
			this->textBoxseuil = (gcnew System::Windows::Forms::TextBox());
			this->textBoxpuht = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnature = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnom = (gcnew System::Windows::Forms::TextBox());
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_quantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_puht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_nature = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->article_seuil_reapprovisionnement = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 1);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 26;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ModifierArticle::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ModifierArticle::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &ModifierArticle::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &ModifierArticle::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &ModifierArticle::X_MouseLeave);
			// 
			// labelmodifier
			// 
			this->labelmodifier->AutoSize = true;
			this->labelmodifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelmodifier->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelmodifier->Location = System::Drawing::Point(306, 46);
			this->labelmodifier->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelmodifier->Name = L"labelmodifier";
			this->labelmodifier->Size = System::Drawing::Size(89, 25);
			this->labelmodifier->TabIndex = 44;
			this->labelmodifier->Text = L"Modifier";
			// 
			// buttonmodifier
			// 
			this->buttonmodifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonmodifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonmodifier->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonmodifier->Location = System::Drawing::Point(686, 115);
			this->buttonmodifier->Margin = System::Windows::Forms::Padding(2);
			this->buttonmodifier->Name = L"buttonmodifier";
			this->buttonmodifier->Size = System::Drawing::Size(96, 41);
			this->buttonmodifier->TabIndex = 41;
			this->buttonmodifier->Text = L"Modifier";
			this->buttonmodifier->UseVisualStyleBackColor = true;
			this->buttonmodifier->Click += gcnew System::EventHandler(this, &ModifierArticle::buttonmodifier_Click);
			// 
			// labelarticlepuht
			// 
			this->labelarticlepuht->AutoSize = true;
			this->labelarticlepuht->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlepuht->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlepuht->Location = System::Drawing::Point(260, 88);
			this->labelarticlepuht->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlepuht->Name = L"labelarticlepuht";
			this->labelarticlepuht->Size = System::Drawing::Size(59, 25);
			this->labelarticlepuht->TabIndex = 40;
			this->labelarticlepuht->Text = L"PUHT";
			this->labelarticlepuht->Click += gcnew System::EventHandler(this, &ModifierArticle::labelarticlephut_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(283, 125);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 25);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Seuil de réapprovisionnement";
			// 
			// labelarticlequantité
			// 
			this->labelarticlequantité->AutoSize = true;
			this->labelarticlequantité->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlequantité->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlequantité->Location = System::Drawing::Point(462, 96);
			this->labelarticlequantité->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlequantité->Name = L"labelarticlequantité";
			this->labelarticlequantité->Size = System::Drawing::Size(85, 25);
			this->labelarticlequantité->TabIndex = 38;
			this->labelarticlequantité->Text = L"Quantité";
			// 
			// labelarticlenature
			// 
			this->labelarticlenature->AutoSize = true;
			this->labelarticlenature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarticlenature->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelarticlenature->Location = System::Drawing::Point(10, 131);
			this->labelarticlenature->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelarticlenature->Name = L"labelarticlenature";
			this->labelarticlenature->Size = System::Drawing::Size(70, 25);
			this->labelarticlenature->TabIndex = 37;
			this->labelarticlenature->Text = L"Nature";
			// 
			// labelnnamearticle
			// 
			this->labelnnamearticle->AutoSize = true;
			this->labelnnamearticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnnamearticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnnamearticle->Location = System::Drawing::Point(20, 89);
			this->labelnnamearticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnnamearticle->Name = L"labelnnamearticle";
			this->labelnnamearticle->Size = System::Drawing::Size(53, 25);
			this->labelnnamearticle->TabIndex = 36;
			this->labelnnamearticle->Text = L"Nom";
			// 
			// textBoxquantité
			// 
			this->textBoxquantité->Location = System::Drawing::Point(564, 102);
			this->textBoxquantité->Name = L"textBoxquantité";
			this->textBoxquantité->Size = System::Drawing::Size(100, 20);
			this->textBoxquantité->TabIndex = 35;
			// 
			// textBoxseuil
			// 
			this->textBoxseuil->Location = System::Drawing::Point(564, 131);
			this->textBoxseuil->Name = L"textBoxseuil";
			this->textBoxseuil->Size = System::Drawing::Size(100, 20);
			this->textBoxseuil->TabIndex = 34;
			// 
			// textBoxpuht
			// 
			this->textBoxpuht->Location = System::Drawing::Point(324, 94);
			this->textBoxpuht->Name = L"textBoxpuht";
			this->textBoxpuht->Size = System::Drawing::Size(100, 20);
			this->textBoxpuht->TabIndex = 33;
			// 
			// textBoxnature
			// 
			this->textBoxnature->Location = System::Drawing::Point(85, 136);
			this->textBoxnature->Name = L"textBoxnature";
			this->textBoxnature->Size = System::Drawing::Size(154, 20);
			this->textBoxnature->TabIndex = 32;
			// 
			// textBoxnom
			// 
			this->textBoxnom->Location = System::Drawing::Point(85, 94);
			this->textBoxnom->Name = L"textBoxnom";
			this->textBoxnom->Size = System::Drawing::Size(154, 20);
			this->textBoxnom->TabIndex = 31;
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(298, 191);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 45;
			this->labelrecherche->Text = L"Recherche";
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(664, 235);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(118, 41);
			this->buttonrechercher->TabIndex = 56;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			this->buttonrechercher->Click += gcnew System::EventHandler(this, &ModifierArticle::buttonrechercher_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label4->Location = System::Drawing::Point(345, 243);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 25);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Quantité";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label5->Location = System::Drawing::Point(10, 265);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 25);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Nature";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label6->Location = System::Drawing::Point(20, 223);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 25);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(447, 249);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 50;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 270);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(154, 20);
			this->textBox4->TabIndex = 47;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(85, 228);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(154, 20);
			this->textBox5->TabIndex = 46;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id_article,
					this->article_nom, this->article_quantite, this->article_puht, this->article_nature, this->article_seuil_reapprovisionnement
			});
			this->dataGridView1->Location = System::Drawing::Point(25, 312);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(743, 154);
			this->dataGridView1->TabIndex = 59;
			// 
			// id_article
			// 
			this->id_article->HeaderText = L"id_article";
			this->id_article->Name = L"id_article";
			// 
			// article_nom
			// 
			this->article_nom->HeaderText = L"article_nom";
			this->article_nom->Name = L"article_nom";
			// 
			// article_quantite
			// 
			this->article_quantite->HeaderText = L"article_quantite";
			this->article_quantite->Name = L"article_quantite";
			// 
			// article_puht
			// 
			this->article_puht->HeaderText = L"article_puht";
			this->article_puht->Name = L"article_puht";
			// 
			// article_nature
			// 
			this->article_nature->HeaderText = L"article_nature";
			this->article_nature->Name = L"article_nature";
			// 
			// article_seuil_reapprovisionnement
			// 
			this->article_seuil_reapprovisionnement->HeaderText = L"article_seuil_reapprovisionnement";
			this->article_seuil_reapprovisionnement->Name = L"article_seuil_reapprovisionnement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(461, 153);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 25);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Id article";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(564, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 60;
			// 
			// ModifierArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->labelmodifier);
			this->Controls->Add(this->buttonmodifier);
			this->Controls->Add(this->labelarticlepuht);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelarticlequantité);
			this->Controls->Add(this->labelarticlenature);
			this->Controls->Add(this->labelnnamearticle);
			this->Controls->Add(this->textBoxquantité);
			this->Controls->Add(this->textBoxseuil);
			this->Controls->Add(this->textBoxpuht);
			this->Controls->Add(this->textBoxnature);
			this->Controls->Add(this->textBoxnom);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModifierArticle";
			this->Text = L"ModifierArticle";
			this->Load += gcnew System::EventHandler(this, &ModifierArticle::ModifierArticle_Load);
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModifierArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelarticlephut_Click(System::Object^ sender, System::EventArgs^ e) {
}
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
			ModifierArticle::Left += e->X - PanelMouseDownLocation.X;
			ModifierArticle::Top += e->Y - PanelMouseDownLocation.Y;
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
private: System::Void buttonmodifier_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ article_nom = textBoxnom->Text;
	String^ article_quantite = textBoxquantité->Text;
	String^ article_puht = textBoxpuht->Text;
	String^ article_nature = textBoxnature->Text;
	String^ article_seuil_reapprovisionnement = textBoxseuil->Text;
	int id_article = int::Parse(textBox2->Text);

	String^ constring = "Data Source=LAPTOP-J0DFQRK5\\MSSQL;Initial Catalog=PROJET_POO2;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	conDataBase->Open();
	if (textBoxnom->Text != "")
	{
		SqlCommand^ cmdDataBase = gcnew SqlCommand("update Article set article_nom = '" + article_nom + "' WHERE id_article = '" + id_article + "'", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Rows->Clear();
		while (myReader->Read())
		{
			dataGridView1->Rows->Add(myReader[0]);
		}
	}
	else
	{ }
	if (textBoxquantité->Text != "")
	{
		SqlCommand^ cmdDataBase = gcnew SqlCommand("update Article set article_quantite = '" + article_quantite + "' WHERE id_article = '" + id_article + "'", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Rows->Clear();
		while (myReader->Read())
		{
			dataGridView1->Rows->Add(myReader[2]);
		}
	}
	else
	{
	}
	if (textBoxpuht->Text != "")
	{
		SqlCommand^ cmdDataBase = gcnew SqlCommand("update Article set article_puht = '" + article_puht + "' WHERE id_article = '" + id_article + "'", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Rows->Clear();
		while (myReader->Read())
		{
			dataGridView1->Rows->Add(myReader[3]);
		}
	}
	else
	{
	}
	if (textBoxnature->Text != "")
	{
		SqlCommand^ cmdDataBase = gcnew SqlCommand("update Article set article_nature = '" + article_nature + "' WHERE id_article = '" + id_article + "'", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Rows->Clear();
		while (myReader->Read())
		{
			dataGridView1->Rows->Add(myReader[4]);
		}
	}
	else
	{
	}
	if (textBoxseuil->Text != "")
	{
		SqlCommand^ cmdDataBase = gcnew SqlCommand("update Article set article_seuil_reapprovisionnement = '" + article_seuil_reapprovisionnement + "' WHERE id_article = '" + id_article + "'", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Rows->Clear();
		while (myReader->Read())
		{
			dataGridView1->Rows->Add(myReader[5]);
		}
	}
	else
	{
	}

	conDataBase->Close();
}

private: System::Void buttonrechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	//RECHERCHE ARTICLE
	
	String^ article_nom = textBox5->Text;
	String^ article_nature = textBox4->Text;

	String^ constring = "Data Source=LAPTOP-J0DFQRK5\\MSSQL;Initial Catalog=PROJET_POO2;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Article where article_nom = '" + article_nom + "' and article_nature = '" + article_nature + "';", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{

		dataGridView1->Rows->Add(myReader[0], myReader[1], myReader[2], myReader[3], myReader[4], myReader[5]);
	}
	conDataBase->Close();
}
};
}
