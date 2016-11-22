#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGo;
	protected: 

	private: System::Windows::Forms::TextBox^  txbUsuario;
	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;
	protected: 



	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbEscolha;



	private: System::Windows::Forms::GroupBox^  grpCor;
	private: System::Windows::Forms::RadioButton^  rdbAzul;


	private: System::Windows::Forms::RadioButton^  rdbVerde;

	private: System::Windows::Forms::RadioButton^  rdbVerm;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->txbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbEscolha = (gcnew System::Windows::Forms::ComboBox());
			this->grpCor = (gcnew System::Windows::Forms::GroupBox());
			this->rdbAzul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVerde = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVerm = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grpCor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGo
			// 
			this->btnGo->Location = System::Drawing::Point(63, 281);
			this->btnGo->Margin = System::Windows::Forms::Padding(4);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(112, 34);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"GO";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &Form1::btnGo_Click);
			// 
			// txbUsuario
			// 
			this->txbUsuario->Location = System::Drawing::Point(12, 67);
			this->txbUsuario->Margin = System::Windows::Forms::Padding(4);
			this->txbUsuario->Name = L"txbUsuario";
			this->txbUsuario->Size = System::Drawing::Size(375, 26);
			this->txbUsuario->TabIndex = 1;
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->BackColor = System::Drawing::Color::Transparent;
			this->chkNome->Location = System::Drawing::Point(56, 101);
			this->chkNome->Margin = System::Windows::Forms::Padding(4);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(66, 23);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = false;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->BackColor = System::Drawing::Color::Transparent;
			this->chkIdade->Location = System::Drawing::Point(56, 150);
			this->chkIdade->Margin = System::Windows::Forms::Padding(4);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(63, 23);
			this->chkIdade->TabIndex = 3;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = false;
			// 
			// lblMensagem
			// 
			this->lblMensagem->BackColor = System::Drawing::Color::Transparent;
			this->lblMensagem->Location = System::Drawing::Point(27, 13);
			this->lblMensagem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(720, 28);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"MTP\r\n";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cmbEscolha
			// 
			this->cmbEscolha->BackColor = System::Drawing::Color::White;
			this->cmbEscolha->ForeColor = System::Drawing::Color::Black;
			this->cmbEscolha->FormattingEnabled = true;
			this->cmbEscolha->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Correr", L"Pular", L"Morrer"});
			this->cmbEscolha->Location = System::Drawing::Point(32, 200);
			this->cmbEscolha->Margin = System::Windows::Forms::Padding(4);
			this->cmbEscolha->Name = L"cmbEscolha";
			this->cmbEscolha->Size = System::Drawing::Size(180, 27);
			this->cmbEscolha->TabIndex = 5;
			this->cmbEscolha->Text = L"Choose";
			// 
			// grpCor
			// 
			this->grpCor->BackColor = System::Drawing::Color::Transparent;
			this->grpCor->Controls->Add(this->rdbAzul);
			this->grpCor->Controls->Add(this->rdbVerde);
			this->grpCor->Controls->Add(this->rdbVerm);
			this->grpCor->Location = System::Drawing::Point(232, 101);
			this->grpCor->Margin = System::Windows::Forms::Padding(4);
			this->grpCor->Name = L"grpCor";
			this->grpCor->Padding = System::Windows::Forms::Padding(4);
			this->grpCor->Size = System::Drawing::Size(155, 213);
			this->grpCor->TabIndex = 6;
			this->grpCor->TabStop = false;
			this->grpCor->Text = L"Cor";
			// 
			// rdbAzul
			// 
			this->rdbAzul->AutoSize = true;
			this->rdbAzul->Location = System::Drawing::Point(11, 131);
			this->rdbAzul->Margin = System::Windows::Forms::Padding(4);
			this->rdbAzul->Name = L"rdbAzul";
			this->rdbAzul->Size = System::Drawing::Size(54, 23);
			this->rdbAzul->TabIndex = 2;
			this->rdbAzul->TabStop = true;
			this->rdbAzul->Text = L"Azul";
			this->rdbAzul->UseVisualStyleBackColor = true;
			// 
			// rdbVerde
			// 
			this->rdbVerde->AutoSize = true;
			this->rdbVerde->Location = System::Drawing::Point(11, 80);
			this->rdbVerde->Margin = System::Windows::Forms::Padding(4);
			this->rdbVerde->Name = L"rdbVerde";
			this->rdbVerde->Size = System::Drawing::Size(63, 23);
			this->rdbVerde->TabIndex = 1;
			this->rdbVerde->TabStop = true;
			this->rdbVerde->Text = L"Verde";
			this->rdbVerde->UseVisualStyleBackColor = true;
			// 
			// rdbVerm
			// 
			this->rdbVerm->AutoSize = true;
			this->rdbVerm->Location = System::Drawing::Point(11, 29);
			this->rdbVerm->Margin = System::Windows::Forms::Padding(4);
			this->rdbVerm->Name = L"rdbVerm";
			this->rdbVerm->Size = System::Drawing::Size(84, 23);
			this->rdbVerm->TabIndex = 0;
			this->rdbVerm->TabStop = true;
			this->rdbVerm->Text = L"Vermelho";
			this->rdbVerm->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(395, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 319);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(765, 395);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->grpCor);
			this->Controls->Add(this->cmbEscolha);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txbUsuario);
			this->Controls->Add(this->btnGo);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Super Mario";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpCor->ResumeLayout(false);
			this->grpCor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblMensagem->Text="O personagem: ";
				 if(chkNome->Checked)
					 lblMensagem->Text=  lblMensagem->Text + "Super MARIO ";
				 if(chkIdade->Checked)
					 lblMensagem->Text=  lblMensagem->Text + "tem 50 anos";
				 lblMensagem->Text=  lblMensagem->Text + "gosta de " + cmbEscolha->SelectedItem->ToString() +" , ";
				
				  if(rdbVerm->Checked)
					  lblMensagem->ForeColor=System::Drawing::Color::DarkRed;
				  if(rdbVerde->Checked)
					  lblMensagem->ForeColor=System::Drawing::Color::ForestGreen;
				  if(rdbAzul->Checked)
					  lblMensagem->ForeColor=System::Drawing::Color::MidnightBlue;
				     


			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbEscolha->SelectedIndex=0;
		 }
};
}

