#pragma once

#include "RN.h"
#include "RN_Ksi.h"

namespace SBERBANK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  N_in;
	private: System::Windows::Forms::TextBox^  B_in;
	private: System::Windows::Forms::TextBox^  A_in;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  Data_Table_0;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Seed_in;

	private: ZedGraph::ZedGraphControl^  zedGraphControl1;













	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  N_Exp_in;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  N_lvl_in;




	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  MSE_out_ksi;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  Median_out_ksi;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  Mode_out_ksi;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  Swing_out_ksi;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  Dispersion_out_ksi;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  Expected_value_out_ksi;
	private: System::Windows::Forms::Label^  label24;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  Stat_D_out_ksi;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  Sub_D_out;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  Sub_E_out;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridView^  Data_Table_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^  Sub_f_out;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::TextBox^  Alp_in;

	private: System::Windows::Forms::Label^  label5;




	private: System::Windows::Forms::Label^  Xi_Check_out;
	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  N_exp;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Left_b_tab;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  RN_tbl;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->N_Exp_in = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->N_lvl_in = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Seed_in = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->N_in = (gcnew System::Windows::Forms::TextBox());
			this->B_in = (gcnew System::Windows::Forms::TextBox());
			this->A_in = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Data_Table_0 = (gcnew System::Windows::Forms::DataGridView());
			this->N_exp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Left_b_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RN_tbl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Sub_f_out = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Data_Table_1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sub_D_out = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Sub_E_out = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Stat_D_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->MSE_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Median_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Mode_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Swing_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Dispersion_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Expected_value_out_ksi = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Xi_Check_out = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Alp_in = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data_Table_0))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data_Table_1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Black;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->N_Exp_in);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->N_lvl_in);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->Seed_in);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->N_in);
			this->groupBox1->Controls->Add(this->B_in);
			this->groupBox1->Controls->Add(this->A_in);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 210);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные параметры";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Эксперементов:";
			// 
			// N_Exp_in
			// 
			this->N_Exp_in->Location = System::Drawing::Point(133, 143);
			this->N_Exp_in->Name = L"N_Exp_in";
			this->N_Exp_in->Size = System::Drawing::Size(100, 20);
			this->N_Exp_in->TabIndex = 16;
			this->N_Exp_in->Text = L"2000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Частотные уровни:";
			// 
			// N_lvl_in
			// 
			this->N_lvl_in->Location = System::Drawing::Point(133, 117);
			this->N_lvl_in->Name = L"N_lvl_in";
			this->N_lvl_in->Size = System::Drawing::Size(100, 20);
			this->N_lvl_in->TabIndex = 14;
			this->N_lvl_in->Text = L"21";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(133, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Смоделировать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Зерно: (0 - time(0))";
			// 
			// Seed_in
			// 
			this->Seed_in->Location = System::Drawing::Point(133, 91);
			this->Seed_in->Name = L"Seed_in";
			this->Seed_in->Size = System::Drawing::Size(100, 20);
			this->Seed_in->TabIndex = 12;
			this->Seed_in->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"(N) Число вкладов:";
			// 
			// N_in
			// 
			this->N_in->Location = System::Drawing::Point(133, 65);
			this->N_in->Name = L"N_in";
			this->N_in->Size = System::Drawing::Size(100, 20);
			this->N_in->TabIndex = 10;
			this->N_in->Text = L"12";
			this->N_in->TextChanged += gcnew System::EventHandler(this, &MyForm::N_in_TextChanged);
			// 
			// B_in
			// 
			this->B_in->Location = System::Drawing::Point(133, 39);
			this->B_in->Name = L"B_in";
			this->B_in->Size = System::Drawing::Size(100, 20);
			this->B_in->TabIndex = 9;
			this->B_in->Text = L"10000";
			// 
			// A_in
			// 
			this->A_in->Location = System::Drawing::Point(133, 13);
			this->A_in->Name = L"A_in";
			this->A_in->Size = System::Drawing::Size(100, 20);
			this->A_in->TabIndex = 8;
			this->A_in->Text = L"2000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"(В) Дисперсия:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"(А) Мат. ожидание:";
			// 
			// Data_Table_0
			// 
			this->Data_Table_0->BackgroundColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Data_Table_0->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->Data_Table_0->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Data_Table_0->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->N_exp, this->Left_b_tab,
					this->RN_tbl
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Data_Table_0->DefaultCellStyle = dataGridViewCellStyle2;
			this->Data_Table_0->GridColor = System::Drawing::Color::White;
			this->Data_Table_0->Location = System::Drawing::Point(9, 45);
			this->Data_Table_0->Name = L"Data_Table_0";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Data_Table_0->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->Data_Table_0->RowHeadersVisible = false;
			this->Data_Table_0->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Data_Table_0->Size = System::Drawing::Size(224, 151);
			this->Data_Table_0->TabIndex = 8;
			// 
			// N_exp
			// 
			this->N_exp->HeaderText = L"№";
			this->N_exp->Name = L"N_exp";
			this->N_exp->Width = 30;
			// 
			// Left_b_tab
			// 
			this->Left_b_tab->HeaderText = L"Left border";
			this->Left_b_tab->Name = L"Left_b_tab";
			this->Left_b_tab->Width = 95;
			// 
			// RN_tbl
			// 
			this->RN_tbl->HeaderText = L"Right border";
			this->RN_tbl->Name = L"RN_tbl";
			this->RN_tbl->Width = 95;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(242, 235);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(401, 194);
			this->zedGraphControl1->TabIndex = 9;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(9, 155);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(224, 74);
			this->richTextBox1->TabIndex = 33;
			this->richTextBox1->Text = L"В сбербанк внести деньги N>>1 человек. \nСумма вклада каждого из них есть случайна"
				L"я величина \"эта\" \nсо средним A и дисперсией B. \nС. в. \"кси\" - общая сумма вклада"
				L".";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Black;
			this->groupBox3->Controls->Add(this->Sub_f_out);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->Data_Table_1);
			this->groupBox3->Controls->Add(this->Sub_D_out);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->Sub_E_out);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->zedGraphControl1);
			this->groupBox3->Controls->Add(this->richTextBox1);
			this->groupBox3->Controls->Add(this->Stat_D_out_ksi);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->zedGraphControl2);
			this->groupBox3->Controls->Add(this->MSE_out_ksi);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->Median_out_ksi);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->Mode_out_ksi);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->Swing_out_ksi);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->Dispersion_out_ksi);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->Expected_value_out_ksi);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(252, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(651, 439);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Характеристики случайной величины \"кси\"";
			// 
			// Sub_f_out
			// 
			this->Sub_f_out->AutoSize = true;
			this->Sub_f_out->ForeColor = System::Drawing::Color::White;
			this->Sub_f_out->Location = System::Drawing::Point(120, 133);
			this->Sub_f_out->Name = L"Sub_f_out";
			this->Sub_f_out->Size = System::Drawing::Size(22, 13);
			this->Sub_f_out->TabIndex = 41;
			this->Sub_f_out->Text = L"0.0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(6, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 13);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Макс. отклонение f =";
			// 
			// Data_Table_1
			// 
			this->Data_Table_1->BackgroundColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Data_Table_1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->Data_Table_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Data_Table_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Data_Table_1->DefaultCellStyle = dataGridViewCellStyle5;
			this->Data_Table_1->GridColor = System::Drawing::Color::White;
			this->Data_Table_1->Location = System::Drawing::Point(9, 235);
			this->Data_Table_1->Name = L"Data_Table_1";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Data_Table_1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->Data_Table_1->RowHeadersVisible = false;
			this->Data_Table_1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Data_Table_1->Size = System::Drawing::Size(224, 194);
			this->Data_Table_1->TabIndex = 9;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Ksi";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 74;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"f(ksi)";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 73;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"f_stat(ksi)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 73;
			// 
			// Sub_D_out
			// 
			this->Sub_D_out->AutoSize = true;
			this->Sub_D_out->ForeColor = System::Drawing::Color::White;
			this->Sub_D_out->Location = System::Drawing::Point(120, 55);
			this->Sub_D_out->Name = L"Sub_D_out";
			this->Sub_D_out->Size = System::Drawing::Size(22, 13);
			this->Sub_D_out->TabIndex = 39;
			this->Sub_D_out->Text = L"0.0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(6, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"|Dksi - Dksi(etalon)| =";
			// 
			// Sub_E_out
			// 
			this->Sub_E_out->AutoSize = true;
			this->Sub_E_out->ForeColor = System::Drawing::Color::White;
			this->Sub_E_out->Location = System::Drawing::Point(120, 29);
			this->Sub_E_out->Name = L"Sub_E_out";
			this->Sub_E_out->Size = System::Drawing::Size(22, 13);
			this->Sub_E_out->TabIndex = 37;
			this->Sub_E_out->Text = L"0.0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(6, 29);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"|Eksi - Eksi(etalon)| =";
			// 
			// Stat_D_out_ksi
			// 
			this->Stat_D_out_ksi->AutoSize = true;
			this->Stat_D_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Stat_D_out_ksi->Location = System::Drawing::Point(120, 120);
			this->Stat_D_out_ksi->Name = L"Stat_D_out_ksi";
			this->Stat_D_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Stat_D_out_ksi->TabIndex = 35;
			this->Stat_D_out_ksi->Text = L"0.0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(6, 120);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(88, 13);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Отклонение D =";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(242, 16);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(403, 194);
			this->zedGraphControl2->TabIndex = 33;
			// 
			// MSE_out_ksi
			// 
			this->MSE_out_ksi->AutoSize = true;
			this->MSE_out_ksi->ForeColor = System::Drawing::Color::White;
			this->MSE_out_ksi->Location = System::Drawing::Point(120, 107);
			this->MSE_out_ksi->Name = L"MSE_out_ksi";
			this->MSE_out_ksi->Size = System::Drawing::Size(22, 13);
			this->MSE_out_ksi->TabIndex = 32;
			this->MSE_out_ksi->Text = L"0.0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(6, 107);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Ср. кв. отклонение =";
			// 
			// Median_out_ksi
			// 
			this->Median_out_ksi->AutoSize = true;
			this->Median_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Median_out_ksi->Location = System::Drawing::Point(120, 94);
			this->Median_out_ksi->Name = L"Median_out_ksi";
			this->Median_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Median_out_ksi->TabIndex = 30;
			this->Median_out_ksi->Text = L"0.0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(6, 94);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Медиана =";
			// 
			// Mode_out_ksi
			// 
			this->Mode_out_ksi->AutoSize = true;
			this->Mode_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Mode_out_ksi->Location = System::Drawing::Point(120, 81);
			this->Mode_out_ksi->Name = L"Mode_out_ksi";
			this->Mode_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Mode_out_ksi->TabIndex = 28;
			this->Mode_out_ksi->Text = L"0.0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(6, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 13);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Мода =";
			// 
			// Swing_out_ksi
			// 
			this->Swing_out_ksi->AutoSize = true;
			this->Swing_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Swing_out_ksi->Location = System::Drawing::Point(120, 68);
			this->Swing_out_ksi->Name = L"Swing_out_ksi";
			this->Swing_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Swing_out_ksi->TabIndex = 26;
			this->Swing_out_ksi->Text = L"0.0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(6, 68);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 13);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Размах =";
			// 
			// Dispersion_out_ksi
			// 
			this->Dispersion_out_ksi->AutoSize = true;
			this->Dispersion_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Dispersion_out_ksi->Location = System::Drawing::Point(120, 42);
			this->Dispersion_out_ksi->Name = L"Dispersion_out_ksi";
			this->Dispersion_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Dispersion_out_ksi->TabIndex = 24;
			this->Dispersion_out_ksi->Text = L"0.0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(6, 42);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(73, 13);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Дисперсия =";
			// 
			// Expected_value_out_ksi
			// 
			this->Expected_value_out_ksi->AutoSize = true;
			this->Expected_value_out_ksi->ForeColor = System::Drawing::Color::White;
			this->Expected_value_out_ksi->Location = System::Drawing::Point(120, 16);
			this->Expected_value_out_ksi->Name = L"Expected_value_out_ksi";
			this->Expected_value_out_ksi->Size = System::Drawing::Size(22, 13);
			this->Expected_value_out_ksi->TabIndex = 22;
			this->Expected_value_out_ksi->Text = L"0.0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(6, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(92, 13);
			this->label24->TabIndex = 21;
			this->label24->Text = L"Мат. ожидание =";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Black;
			this->groupBox4->Controls->Add(this->Xi_Check_out);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->Alp_in);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->Data_Table_0);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(3, 219);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(243, 223);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Таблица реализаций случайных величин";
			// 
			// Xi_Check_out
			// 
			this->Xi_Check_out->AutoSize = true;
			this->Xi_Check_out->Location = System::Drawing::Point(130, 200);
			this->Xi_Check_out->Name = L"Xi_Check_out";
			this->Xi_Check_out->Size = System::Drawing::Size(101, 13);
			this->Xi_Check_out->TabIndex = 23;
			this->Xi_Check_out->Text = L"Ещё не проверена";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 199);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Гипотеза H0: ";
			// 
			// Alp_in
			// 
			this->Alp_in->Location = System::Drawing::Point(133, 19);
			this->Alp_in->Name = L"Alp_in";
			this->Alp_in->Size = System::Drawing::Size(100, 20);
			this->Alp_in->TabIndex = 19;
			this->Alp_in->Text = L"0.05";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"(alp) Ур. значимости:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(907, 448);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа Минеева Ильи";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data_Table_0))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data_Table_1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//GRN eta(Convert::ToInt32(N_RN_in->Text, CultureInfo::InvariantCulture), sd);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// ZEDGRAPH INITIALIZATION
		GraphPane^ panel0 = zedGraphControl1->GraphPane;
		panel0->CurveList->Clear();

		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();

		PointPairList^ IFM_list = gcnew ZedGraph::PointPairList();

		PointPairList^ IFM_list_1 = gcnew ZedGraph::PointPairList();

		PointPairList^ Distr_list = gcnew ZedGraph::PointPairList();

		PointPairList^ Deten_list = gcnew ZedGraph::PointPairList();

		PointPairList^ X_Del_Line = gcnew ZedGraph::PointPairList();		// TEST

		panel0->Title->Text = "Кривая распределения";
		panel0->XAxis->Title->Text = "Ось X";
		panel0->YAxis->Title->Text = "Ось вероятности";

		panel1->Title->Text = "Плотность распределения";
		panel1->XAxis->Title->Text = "Ось X";
		panel1->YAxis->Title->Text = "Ось частотных уровней";


		GRN eta(Convert::ToInt32(N_in->Text, CultureInfo::InvariantCulture),
			Convert::ToDouble(A_in->Text, CultureInfo::InvariantCulture),
			Convert::ToDouble(B_in->Text, CultureInfo::InvariantCulture),
			Convert::ToInt32(Seed_in->Text, CultureInfo::InvariantCulture));

		KSI ksi(Convert::ToInt32(N_lvl_in->Text, CultureInfo::InvariantCulture),
			Convert::ToInt32(N_in->Text, CultureInfo::InvariantCulture),
			Convert::ToDouble(A_in->Text, CultureInfo::InvariantCulture),
			Convert::ToDouble(B_in->Text, CultureInfo::InvariantCulture));

		int N_Exp = Convert::ToInt32(N_Exp_in->Text, CultureInfo::InvariantCulture);

		for (int j = 0; j < N_Exp; j++)
		{
			eta.Reload();
			double Add = 0.0;
			for (int i = 0; i < eta.N_RN; i++)
				Add += eta.RN_IFM[i];
			ksi.Push(Add);
		}

		ksi.Calc_All();

		Data_Table_1->Rows->Clear();
		Data_Table_1->RowCount = ksi.N_Level;
		double z = 0.0;
		double Sub_f = 0.0;
		for (int i = 0; i < ksi.N_Level; i++)
		{
			z = (ksi.RN_IFM_Max - ksi.RN_IFM_Min) / (double)ksi.N_Level  * (i + 0.5) + ksi.RN_IFM_Min;
			Data_Table_1->Rows[i]->Cells[0]->Value = z;
			Data_Table_1->Rows[i]->Cells[1]->Value = ksi.f_detency(z);
			Data_Table_1->Rows[i]->Cells[2]->Value = ksi.frequency[i];

			if (Sub_f < abs(ksi.frequency[i] - ksi.f_detency(z)))
				Sub_f = abs(ksi.frequency[i] - ksi.f_detency(z));
		}

		// fill the IFM_list_ksi

		IFM_list->Add(ksi.RN_IFM_Min, 0.0);
		double Delta = 0;
		double X_Delta = 0.0;
		for (int i = 0; i < ksi.N_RN - 1; i++)
		{
			IFM_list->Add(ksi.RN_IFM[i], (double)(i + 1) / ksi.N_RN);
			IFM_list->Add(ksi.RN_IFM[i + 1], (double)(i + 1) / ksi.N_RN);

			if (abs((double)(i + 1) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i])) > Delta)
			{
				Delta = abs((double)(i + 1) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i]));
				X_Delta = ksi.RN_IFM[i];
			}

			if (abs((double)(i) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i] - 1.1)) > Delta)
			{
				Delta = abs((double)(i) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i] - 1.1));
				X_Delta = ksi.RN_IFM[i] - 1.1;
			}

			if (abs((double)(i + 2) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i] + 1.1)) > Delta)
			{
				Delta = abs((double)(i + 2) / ksi.N_RN - ksi.Calc_DF_NRN(ksi.RN_IFM[i] + 1.1));
				X_Delta = ksi.RN_IFM[i] + 1.1;
			}
		}
		X_Del_Line->Add(X_Delta, 0.0);
		X_Del_Line->Add(X_Delta, 1.0);

		IFM_list->Add(ksi.RN_IFM_Max, 1.0);

		// fill the stat. detency ksi
		double step = (ksi.RN_IFM_Max - ksi.RN_IFM_Min) / (double)ksi.N_Level;
		for (int i = 0; i < ksi.N_Level; i++)
		{
			IFM_list_1->Add(ksi.RN_IFM_Min + step * i, ksi.frequency[i] / ((ksi.RN_IFM_Max - ksi.RN_IFM_Min) / (double)ksi.N_Level));
			IFM_list_1->Add(ksi.RN_IFM_Min + step * (i + 1), ksi.frequency[i] / ((ksi.RN_IFM_Max - ksi.RN_IFM_Min) / (double)ksi.N_Level));
		}

		// DRAWING

		// Theoretical Distribution function & Detency
		double X_Plot = ksi.RN_IFM_Min;
		if (abs(ksi.RN_IFM_Max - ksi.Expected_value) > abs(ksi.Expected_value - ksi.RN_IFM_Min))
			X_Plot = 2 * ksi.Expected_value - ksi.RN_IFM_Max;
		while (X_Plot <= ksi.RN_IFM_Max)
		{
			Distr_list->Add(X_Plot, ksi.Calc_DF_NRN(X_Plot));
			Deten_list->Add(X_Plot, ksi.f_detency(X_Plot));
			X_Plot += (ksi.RN_IFM_Max - ksi.RN_IFM_Min) / 1000.0;
		}

		// CHI-SQUARE CRITERION
		double Alpha = Convert::ToDouble(Alp_in->Text, CultureInfo::InvariantCulture);
		step = (ksi.RN_IFM_Max - ksi.RN_IFM_Min) / (double)ksi.N_Level;

		Data_Table_0->Rows->Clear();
		Data_Table_0->RowCount = ksi.N_Level;
		for (int i = 0; i < ksi.N_Level; i++)
		{
			Data_Table_0->Rows[i]->Cells[0]->Value = i;
			Data_Table_0->Rows[i]->Cells[1]->Value = ksi.RN_IFM_Min + step * i;
			Data_Table_0->Rows[i]->Cells[2]->Value = ksi.RN_IFM_Min + step * (i + 1);
		}

		if (ksi.Xi_Sqr_Check(Alpha) == true)
			Xi_Check_out->Text = L"Принята";
		else
			Xi_Check_out->Text = L"Отвергнута";

		// raspredelenie ksi
		LineItem^ Curve3 = panel0->AddCurve("IFM", IFM_list, Color::Black, SymbolType::None);

		LineItem^ Curve0 = panel0->AddCurve("Distribution", Distr_list, Color::Red, SymbolType::None);

		LineItem^ Curve4 = panel0->AddCurve("IFM", X_Del_Line, Color::Green, SymbolType::None);

		// plotnost' ksi
		LineItem^ Curve1 = panel1->AddCurve("IFM", IFM_list_1, Color::Black, SymbolType::None);

		LineItem^ Curve2 = panel1->AddCurve("Detency", Deten_list, Color::Red, SymbolType::None);

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		// REFERENCE

		// ksi
		Expected_value_out_ksi->Text = Convert::ToString(ksi.Expected_value);
		Sub_E_out->Text = Convert::ToString(abs(Convert::ToDouble(A_in->Text, CultureInfo::InvariantCulture) * Convert::ToDouble(N_in->Text, CultureInfo::InvariantCulture) - ksi.Expected_value));
		Dispersion_out_ksi->Text = Convert::ToString(ksi.Dispersion);
		Sub_D_out->Text = Convert::ToString(abs(Convert::ToDouble(B_in->Text, CultureInfo::InvariantCulture) * Convert::ToDouble(N_in->Text, CultureInfo::InvariantCulture) - ksi.Dispersion));
		Swing_out_ksi->Text = Convert::ToString(ksi.Swing);
		Mode_out_ksi->Text = Convert::ToString(ksi.Mode);
		Median_out_ksi->Text = Convert::ToString(ksi.Median);
		MSE_out_ksi->Text = Convert::ToString(ksi.MSE);
		Stat_D_out_ksi->Text = Convert::ToString(Delta);
		Sub_f_out->Text = Convert::ToString(Sub_f);
	}
private: System::Void N_in_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}		
};
}
