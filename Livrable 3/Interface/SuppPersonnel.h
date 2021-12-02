#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de SuppPersonnel
	/// </summary>
	public ref class SuppPersonnel : public System::Windows::Forms::Form
	{
	public:
		SuppPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	private:
		Point PanelMouseDownLocation;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~SuppPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;
	private: System::Windows::Forms::Label^ labelrecherche;
	private: System::Windows::Forms::Button^ buttonsupprimer;
	private: System::Windows::Forms::Button^ buttonrechercher;
	private: System::Windows::Forms::Label^ labelsupprimer;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ prénom;
	private: System::Windows::Forms::Label^ labelnpersonnel;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->labelrecherche = (gcnew System::Windows::Forms::Label());
			this->buttonsupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonrechercher = (gcnew System::Windows::Forms::Button());
			this->labelsupprimer = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->prénom = (gcnew System::Windows::Forms::Label());
			this->labelnpersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppPersonnel::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SuppPersonnel::panelmove1_MouseMove);
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
			this->X->Click += gcnew System::EventHandler(this, &SuppPersonnel::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &SuppPersonnel::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &SuppPersonnel::X_MouseLeave);
			// 
			// labelrecherche
			// 
			this->labelrecherche->AutoSize = true;
			this->labelrecherche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelrecherche->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelrecherche->Location = System::Drawing::Point(110, 41);
			this->labelrecherche->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelrecherche->Name = L"labelrecherche";
			this->labelrecherche->Size = System::Drawing::Size(101, 25);
			this->labelrecherche->TabIndex = 37;
			this->labelrecherche->Text = L"Recherche";
			// 
			// buttonsupprimer
			// 
			this->buttonsupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonsupprimer->Location = System::Drawing::Point(657, 89);
			this->buttonsupprimer->Margin = System::Windows::Forms::Padding(2);
			this->buttonsupprimer->Name = L"buttonsupprimer";
			this->buttonsupprimer->Size = System::Drawing::Size(127, 41);
			this->buttonsupprimer->TabIndex = 36;
			this->buttonsupprimer->Text = L"Supprimer";
			this->buttonsupprimer->UseVisualStyleBackColor = true;
			// 
			// buttonrechercher
			// 
			this->buttonrechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonrechercher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonrechercher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonrechercher->Location = System::Drawing::Point(252, 97);
			this->buttonrechercher->Margin = System::Windows::Forms::Padding(2);
			this->buttonrechercher->Name = L"buttonrechercher";
			this->buttonrechercher->Size = System::Drawing::Size(127, 41);
			this->buttonrechercher->TabIndex = 35;
			this->buttonrechercher->Text = L"Rechercher";
			this->buttonrechercher->UseVisualStyleBackColor = true;
			// 
			// labelsupprimer
			// 
			this->labelsupprimer->AutoSize = true;
			this->labelsupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsupprimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelsupprimer->Location = System::Drawing::Point(508, 41);
			this->labelsupprimer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelsupprimer->Name = L"labelsupprimer";
			this->labelsupprimer->Size = System::Drawing::Size(122, 25);
			this->labelsupprimer->TabIndex = 34;
			this->labelsupprimer->Text = L"Suppression";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->nom->Location = System::Drawing::Point(51, 119);
			this->nom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(53, 25);
			this->nom->TabIndex = 33;
			this->nom->Text = L"Nom";
			// 
			// prénom
			// 
			this->prénom->AutoSize = true;
			this->prénom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prénom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->prénom->Location = System::Drawing::Point(51, 79);
			this->prénom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->prénom->Name = L"prénom";
			this->prénom->Size = System::Drawing::Size(78, 25);
			this->prénom->TabIndex = 32;
			this->prénom->Text = L"Prénom";
			// 
			// labelnpersonnel
			// 
			this->labelnpersonnel->AutoSize = true;
			this->labelnpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnpersonnel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->labelnpersonnel->Location = System::Drawing::Point(434, 100);
			this->labelnpersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelnpersonnel->Name = L"labelnpersonnel";
			this->labelnpersonnel->Size = System::Drawing::Size(116, 25);
			this->labelnpersonnel->TabIndex = 31;
			this->labelnpersonnel->Text = L"N°Personnel";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(554, 105);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 30;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 86);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 29;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 128);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 28;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(56, 167);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(677, 291);
			this->dataGridView1->TabIndex = 27;
			// 
			// SuppPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->panelmove1);
			this->Controls->Add(this->labelrecherche);
			this->Controls->Add(this->buttonsupprimer);
			this->Controls->Add(this->buttonrechercher);
			this->Controls->Add(this->labelsupprimer);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->prénom);
			this->Controls->Add(this->labelnpersonnel);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuppPersonnel";
			this->Text = L"SuppPersonnel";
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
			SuppPersonnel::Left += e->X - PanelMouseDownLocation.X;
			SuppPersonnel::Top += e->Y - PanelMouseDownLocation.Y;
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
};
}
