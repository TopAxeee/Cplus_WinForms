#pragma once
#include <fstream>
#include <cmath>
#include <string>
#include <cstdio>
#include <conio.h>
#include <math.h>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:





	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt1;

	private: System::Windows::Forms::Button^ button;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Button^ random;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ min;
	private: System::Windows::Forms::TextBox^ max;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ cout;
	private: System::Windows::Forms::TextBox^ txtinput;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ input;

	private: System::Windows::Forms::Button^ Zadanie;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::TextBox^ txtsave;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RichTextBox^ TextMassiv;



	private: System::Windows::Forms::Button^ Zadanie4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Words;
	private: System::Windows::Forms::Label^ Numbers;
	private: System::Windows::Forms::Button^ Result4;
	private: System::Windows::Forms::TextBox^ txtinput4;

	private: System::Windows::Forms::Button^ save4;
	private: System::Windows::Forms::Button^ input4;


	private: System::Windows::Forms::Label^ ITOG2;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ min2;

	private: System::Windows::Forms::Button^ random2;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ max2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ stroka;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ stolb;
	private: System::Windows::Forms::RichTextBox^ Matrix2;


	private: System::Windows::Forms::TextBox^ txtinput2;
	private: System::Windows::Forms::Button^ input2;

	private: System::Windows::Forms::TextBox^ txtsave2;
	private: System::Windows::Forms::Button^ save2;
	private: System::Windows::Forms::TextBox^ out3;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ M3box;

	private: System::Windows::Forms::Label^ label21;


	private: System::Windows::Forms::Label^ label19;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ MINIMUMS;
	private: System::Windows::Forms::Button^ Zadanie2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ random3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txtsave3;

	private: System::Windows::Forms::Button^ save3;

	private: System::Windows::Forms::TextBox^ txtinput3;

	private: System::Windows::Forms::Button^ input3;

	private: System::Windows::Forms::Button^ Zadanie3;
	private: System::Windows::Forms::TextBox^ txtsave4;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog8;
	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label18;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->txtsave = (gcnew System::Windows::Forms::TextBox());
			this->Zadanie = (gcnew System::Windows::Forms::Button());
			this->txtinput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->min = (gcnew System::Windows::Forms::TextBox());
			this->max = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cout = (gcnew System::Windows::Forms::TextBox());
			this->random = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Zadanie2 = (gcnew System::Windows::Forms::Button());
			this->MINIMUMS = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtsave2 = (gcnew System::Windows::Forms::TextBox());
			this->save2 = (gcnew System::Windows::Forms::Button());
			this->txtinput2 = (gcnew System::Windows::Forms::TextBox());
			this->input2 = (gcnew System::Windows::Forms::Button());
			this->ITOG2 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->min2 = (gcnew System::Windows::Forms::TextBox());
			this->random2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->max2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->stroka = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->stolb = (gcnew System::Windows::Forms::TextBox());
			this->Matrix2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txtsave3 = (gcnew System::Windows::Forms::TextBox());
			this->save3 = (gcnew System::Windows::Forms::Button());
			this->txtinput3 = (gcnew System::Windows::Forms::TextBox());
			this->input3 = (gcnew System::Windows::Forms::Button());
			this->Zadanie3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->out3 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->random3 = (gcnew System::Windows::Forms::Button());
			this->M3box = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtsave4 = (gcnew System::Windows::Forms::TextBox());
			this->txtinput4 = (gcnew System::Windows::Forms::TextBox());
			this->save4 = (gcnew System::Windows::Forms::Button());
			this->input4 = (gcnew System::Windows::Forms::Button());
			this->Result4 = (gcnew System::Windows::Forms::Button());
			this->Numbers = (gcnew System::Windows::Forms::Label());
			this->Words = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Zadanie4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextMassiv = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog5 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog6 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog7 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog8 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(2, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(772, 416);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Cornsilk;
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->save);
			this->tabPage1->Controls->Add(this->txtsave);
			this->tabPage1->Controls->Add(this->Zadanie);
			this->tabPage1->Controls->Add(this->txtinput);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->input);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->buttonClose);
			this->tabPage1->Controls->Add(this->button);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txt2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txt1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(764, 390);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 57";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label7->Location = System::Drawing::Point(184, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->save->Location = System::Drawing::Point(11, 336);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(149, 47);
			this->save->TabIndex = 16;
			this->save->Text = L"Сохранить в файл";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// txtsave
			// 
			this->txtsave->Enabled = false;
			this->txtsave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtsave->Location = System::Drawing::Point(187, 356);
			this->txtsave->Name = L"txtsave";
			this->txtsave->ReadOnly = true;
			this->txtsave->Size = System::Drawing::Size(149, 22);
			this->txtsave->TabIndex = 15;
			// 
			// Zadanie
			// 
			this->Zadanie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->Zadanie->Location = System::Drawing::Point(586, 114);
			this->Zadanie->Name = L"Zadanie";
			this->Zadanie->Size = System::Drawing::Size(171, 53);
			this->Zadanie->TabIndex = 15;
			this->Zadanie->Text = L"Задание";
			this->Zadanie->UseVisualStyleBackColor = true;
			this->Zadanie->Click += gcnew System::EventHandler(this, &MyForm::Zadanie_Click);
			// 
			// txtinput
			// 
			this->txtinput->Enabled = false;
			this->txtinput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtinput->Location = System::Drawing::Point(586, 84);
			this->txtinput->Name = L"txtinput";
			this->txtinput->ReadOnly = true;
			this->txtinput->Size = System::Drawing::Size(171, 22);
			this->txtinput->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label6->Location = System::Drawing::Point(586, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Имя файла ввода:";
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->input->Location = System::Drawing::Point(586, 6);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(171, 41);
			this->input->TabIndex = 10;
			this->input->Text = L"Ввод из файла";
			this->input->UseVisualStyleBackColor = true;
			this->input->Click += gcnew System::EventHandler(this, &MyForm::input_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->min);
			this->groupBox1->Controls->Add(this->max);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cout);
			this->groupBox1->Controls->Add(this->random);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->groupBox1->Location = System::Drawing::Point(11, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(569, 147);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные для генерации";
			// 
			// min
			// 
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->min->Location = System::Drawing::Point(271, 105);
			this->min->Name = L"min";
			this->min->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->min->Size = System::Drawing::Size(115, 24);
			this->min->TabIndex = 7;
			this->min->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// max
			// 
			this->max->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->max->Location = System::Drawing::Point(271, 68);
			this->max->Name = L"max";
			this->max->Size = System::Drawing::Size(115, 24);
			this->max->TabIndex = 6;
			this->max->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(7, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Максимальное значение диапазона\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(7, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(252, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Минимальное значение диапазона";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->label5->Location = System::Drawing::Point(6, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 18);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Колчество элементов массива";
			// 
			// cout
			// 
			this->cout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->cout->Location = System::Drawing::Point(271, 31);
			this->cout->Name = L"cout";
			this->cout->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cout->Size = System::Drawing::Size(115, 24);
			this->cout->TabIndex = 0;
			this->cout->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// random
			// 
			this->random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random->Location = System::Drawing::Point(398, 24);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(165, 62);
			this->random->TabIndex = 8;
			this->random->Text = L"Генерация массива";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click_1);
			// 
			// buttonClose
			// 
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->buttonClose->Location = System::Drawing::Point(623, 333);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(134, 48);
			this->buttonClose->TabIndex = 5;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::buttonClose_Click);
			// 
			// button
			// 
			this->button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button->Location = System::Drawing::Point(12, 219);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(283, 51);
			this->button->TabIndex = 4;
			this->button->Text = L"Создать новый массив";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(16, 273);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Новый массив";
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->txt2->Location = System::Drawing::Point(11, 301);
			this->txt2->Name = L"txt2";
			this->txt2->ReadOnly = true;
			this->txt2->Size = System::Drawing::Size(747, 29);
			this->txt2->TabIndex = 2;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(16, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный массив";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->txt1->Location = System::Drawing::Point(11, 184);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(747, 29);
			this->txt1->TabIndex = 0;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage2->Controls->Add(this->Zadanie2);
			this->tabPage2->Controls->Add(this->MINIMUMS);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->txtsave2);
			this->tabPage2->Controls->Add(this->save2);
			this->tabPage2->Controls->Add(this->txtinput2);
			this->tabPage2->Controls->Add(this->input2);
			this->tabPage2->Controls->Add(this->ITOG2);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->Matrix2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(764, 390);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 117";
			// 
			// Zadanie2
			// 
			this->Zadanie2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Zadanie2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zadanie2->Location = System::Drawing::Point(642, 259);
			this->Zadanie2->Name = L"Zadanie2";
			this->Zadanie2->Size = System::Drawing::Size(114, 69);
			this->Zadanie2->TabIndex = 21;
			this->Zadanie2->Text = L"Задание";
			this->Zadanie2->UseVisualStyleBackColor = true;
			this->Zadanie2->Click += gcnew System::EventHandler(this, &MyForm::Zadanie2_Click);
			// 
			// MINIMUMS
			// 
			this->MINIMUMS->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->MINIMUMS->Location = System::Drawing::Point(296, 338);
			this->MINIMUMS->MaximumSize = System::Drawing::Size(1000, 20);
			this->MINIMUMS->Name = L"MINIMUMS";
			this->MINIMUMS->ReadOnly = true;
			this->MINIMUMS->Size = System::Drawing::Size(460, 20);
			this->MINIMUMS->TabIndex = 20;
			this->MINIMUMS->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MINIMUMS_KeyPress);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(375, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 69);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txtsave2
			// 
			this->txtsave2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtsave2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtsave2->Location = System::Drawing::Point(137, 302);
			this->txtsave2->Name = L"txtsave2";
			this->txtsave2->ReadOnly = true;
			this->txtsave2->Size = System::Drawing::Size(232, 26);
			this->txtsave2->TabIndex = 18;
			// 
			// save2
			// 
			this->save2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->save2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->save2->Location = System::Drawing::Point(9, 302);
			this->save2->Name = L"save2";
			this->save2->Size = System::Drawing::Size(122, 29);
			this->save2->TabIndex = 17;
			this->save2->Text = L"Сохранить в файл";
			this->save2->UseVisualStyleBackColor = true;
			this->save2->Click += gcnew System::EventHandler(this, &MyForm::save2_Click);
			// 
			// txtinput2
			// 
			this->txtinput2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtinput2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtinput2->Location = System::Drawing::Point(505, 215);
			this->txtinput2->Name = L"txtinput2";
			this->txtinput2->ReadOnly = true;
			this->txtinput2->Size = System::Drawing::Size(245, 26);
			this->txtinput2->TabIndex = 16;
			// 
			// input2
			// 
			this->input2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->input2->Location = System::Drawing::Point(375, 215);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(124, 26);
			this->input2->TabIndex = 15;
			this->input2->Text = L"Ввод из файла";
			this->input2->UseVisualStyleBackColor = true;
			this->input2->Click += gcnew System::EventHandler(this, &MyForm::input2_Click);
			// 
			// ITOG2
			// 
			this->ITOG2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ITOG2->AutoSize = true;
			this->ITOG2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->ITOG2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ITOG2->Location = System::Drawing::Point(293, 369);
			this->ITOG2->Name = L"ITOG2";
			this->ITOG2->Size = System::Drawing::Size(0, 18);
			this->ITOG2->TabIndex = 14;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(15, 369);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(281, 18);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Индексы наибольшего из наименьших:";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label15->Location = System::Drawing::Point(6, 337);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(290, 18);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Наименьшие значения в каждой строке:";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->min2);
			this->groupBox2->Controls->Add(this->random2);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->max2);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->stroka);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->stolb);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(375, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(381, 190);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Генерация массива ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(68, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 20);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Количество строк";
			// 
			// min2
			// 
			this->min2->Location = System::Drawing::Point(221, 112);
			this->min2->Name = L"min2";
			this->min2->Size = System::Drawing::Size(127, 26);
			this->min2->TabIndex = 9;
			this->min2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::min2_KeyPress);
			// 
			// random2
			// 
			this->random2->BackColor = System::Drawing::Color::Gainsboro;
			this->random2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random2->Location = System::Drawing::Point(31, 144);
			this->random2->Name = L"random2";
			this->random2->Size = System::Drawing::Size(317, 28);
			this->random2->TabIndex = 0;
			this->random2->Text = L"Сгенерировать матрицу";
			this->random2->UseVisualStyleBackColor = false;
			this->random2->Click += gcnew System::EventHandler(this, &MyForm::random2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(39, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 20);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Количество столбцов";
			// 
			// max2
			// 
			this->max2->Location = System::Drawing::Point(221, 83);
			this->max2->Name = L"max2";
			this->max2->Size = System::Drawing::Size(127, 26);
			this->max2->TabIndex = 8;
			this->max2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::max2_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(82, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(133, 20);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Нижняя граница";
			// 
			// stroka
			// 
			this->stroka->Location = System::Drawing::Point(221, 52);
			this->stroka->Name = L"stroka";
			this->stroka->Size = System::Drawing::Size(127, 26);
			this->stroka->TabIndex = 7;
			this->stroka->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::stroka_KeyPress);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(78, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(137, 20);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Верхняя граница";
			// 
			// stolb
			// 
			this->stolb->Location = System::Drawing::Point(221, 24);
			this->stolb->Name = L"stolb";
			this->stolb->Size = System::Drawing::Size(127, 26);
			this->stolb->TabIndex = 6;
			this->stolb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::stolb_KeyPress);
			// 
			// Matrix2
			// 
			this->Matrix2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix2->Font = (gcnew System::Drawing::Font(L"Courier New", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix2->Location = System::Drawing::Point(6, 6);
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->Size = System::Drawing::Size(363, 290);
			this->Matrix2->TabIndex = 1;
			this->Matrix2->Text = L"";
			this->Matrix2->WordWrap = false;
			this->Matrix2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Matrix2_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Azure;
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->txt3);
			this->tabPage3->Controls->Add(this->txtsave3);
			this->tabPage3->Controls->Add(this->save3);
			this->tabPage3->Controls->Add(this->txtinput3);
			this->tabPage3->Controls->Add(this->input3);
			this->tabPage3->Controls->Add(this->Zadanie3);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->out3);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(764, 390);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 173";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(627, 314);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 48);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txt3
			// 
			this->txt3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt3->Location = System::Drawing::Point(7, 165);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(750, 38);
			this->txt3->TabIndex = 27;
			this->txt3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt3_KeyPress);
			// 
			// txtsave3
			// 
			this->txtsave3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->txtsave3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtsave3->Location = System::Drawing::Point(349, 336);
			this->txtsave3->Name = L"txtsave3";
			this->txtsave3->ReadOnly = true;
			this->txtsave3->Size = System::Drawing::Size(151, 26);
			this->txtsave3->TabIndex = 26;
			// 
			// save3
			// 
			this->save3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->save3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->save3->Location = System::Drawing::Point(228, 336);
			this->save3->Name = L"save3";
			this->save3->Size = System::Drawing::Size(115, 29);
			this->save3->TabIndex = 25;
			this->save3->Text = L"Сохранить в файл";
			this->save3->UseVisualStyleBackColor = true;
			this->save3->Click += gcnew System::EventHandler(this, &MyForm::save3_Click);
			// 
			// txtinput3
			// 
			this->txtinput3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtinput3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtinput3->Location = System::Drawing::Point(599, 16);
			this->txtinput3->Name = L"txtinput3";
			this->txtinput3->ReadOnly = true;
			this->txtinput3->Size = System::Drawing::Size(158, 26);
			this->txtinput3->TabIndex = 24;
			// 
			// input3
			// 
			this->input3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->input3->Location = System::Drawing::Point(476, 15);
			this->input3->Name = L"input3";
			this->input3->Size = System::Drawing::Size(117, 27);
			this->input3->TabIndex = 23;
			this->input3->Text = L"Ввод из файла";
			this->input3->UseVisualStyleBackColor = true;
			this->input3->Click += gcnew System::EventHandler(this, &MyForm::input3_Click);
			// 
			// Zadanie3
			// 
			this->Zadanie3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Zadanie3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zadanie3->Location = System::Drawing::Point(476, 75);
			this->Zadanie3->Name = L"Zadanie3";
			this->Zadanie3->Size = System::Drawing::Size(281, 55);
			this->Zadanie3->TabIndex = 22;
			this->Zadanie3->Text = L"Задание";
			this->Zadanie3->UseVisualStyleBackColor = true;
			this->Zadanie3->Click += gcnew System::EventHandler(this, &MyForm::Zadanie3_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(11, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 93);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// out3
			// 
			this->out3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->out3->Location = System::Drawing::Point(349, 368);
			this->out3->Name = L"out3";
			this->out3->ReadOnly = true;
			this->out3->Size = System::Drawing::Size(408, 20);
			this->out3->TabIndex = 4;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(8, 367);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(336, 18);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Числа с возрастающей последовательностью:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(6, 133);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(210, 29);
			this->label20->TabIndex = 2;
			this->label20->Text = L"n-значные числа";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->random3);
			this->groupBox3->Controls->Add(this->M3box);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(11, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(459, 127);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Генерация чисел";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Crimson;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(9, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(408, 20);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Количество цифр в числах не должно первышать 9!";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(195, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 24);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// random3
			// 
			this->random3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random3->Location = System::Drawing::Point(345, 62);
			this->random3->Name = L"random3";
			this->random3->Size = System::Drawing::Size(108, 53);
			this->random3->TabIndex = 4;
			this->random3->Text = L"Генерация";
			this->random3->UseVisualStyleBackColor = true;
			this->random3->Click += gcnew System::EventHandler(this, &MyForm::random3_Click);
			// 
			// M3box
			// 
			this->M3box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->M3box->Location = System::Drawing::Point(195, 94);
			this->M3box->Name = L"M3box";
			this->M3box->Size = System::Drawing::Size(144, 24);
			this->M3box->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(61, 99);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(131, 16);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Количество чисел:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(6, 65);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(186, 16);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Количество цифр в числах:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::MistyRose;
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->txtsave4);
			this->tabPage4->Controls->Add(this->txtinput4);
			this->tabPage4->Controls->Add(this->save4);
			this->tabPage4->Controls->Add(this->input4);
			this->tabPage4->Controls->Add(this->Result4);
			this->tabPage4->Controls->Add(this->Numbers);
			this->tabPage4->Controls->Add(this->Words);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->Zadanie4);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->TextMassiv);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(764, 390);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 254";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(587, 335);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 48);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtsave4
			// 
			this->txtsave4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->txtsave4->Location = System::Drawing::Point(377, 357);
			this->txtsave4->Name = L"txtsave4";
			this->txtsave4->ReadOnly = true;
			this->txtsave4->Size = System::Drawing::Size(170, 20);
			this->txtsave4->TabIndex = 25;
			// 
			// txtinput4
			// 
			this->txtinput4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtinput4->Location = System::Drawing::Point(587, 146);
			this->txtinput4->Name = L"txtinput4";
			this->txtinput4->ReadOnly = true;
			this->txtinput4->Size = System::Drawing::Size(170, 20);
			this->txtinput4->TabIndex = 24;
			// 
			// save4
			// 
			this->save4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->save4->Location = System::Drawing::Point(377, 326);
			this->save4->Name = L"save4";
			this->save4->Size = System::Drawing::Size(170, 25);
			this->save4->TabIndex = 23;
			this->save4->Text = L"Сохранить данные";
			this->save4->UseVisualStyleBackColor = true;
			this->save4->Click += gcnew System::EventHandler(this, &MyForm::save4_Click);
			// 
			// input4
			// 
			this->input4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->input4->Location = System::Drawing::Point(586, 103);
			this->input4->Name = L"input4";
			this->input4->Size = System::Drawing::Size(171, 36);
			this->input4->TabIndex = 22;
			this->input4->Text = L"Ввод текста из файла";
			this->input4->UseVisualStyleBackColor = true;
			this->input4->Click += gcnew System::EventHandler(this, &MyForm::input4_Click);
			// 
			// Result4
			// 
			this->Result4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Result4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Result4->Location = System::Drawing::Point(586, 239);
			this->Result4->Name = L"Result4";
			this->Result4->Size = System::Drawing::Size(171, 84);
			this->Result4->TabIndex = 21;
			this->Result4->Text = L"Выполнить";
			this->Result4->UseVisualStyleBackColor = true;
			this->Result4->Click += gcnew System::EventHandler(this, &MyForm::Result4_Click);
			// 
			// Numbers
			// 
			this->Numbers->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Numbers->AutoSize = true;
			this->Numbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->Numbers->Location = System::Drawing::Point(215, 356);
			this->Numbers->Name = L"Numbers";
			this->Numbers->Size = System::Drawing::Size(16, 18);
			this->Numbers->TabIndex = 20;
			this->Numbers->Text = L"0";
			// 
			// Words
			// 
			this->Words->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Words->AutoSize = true;
			this->Words->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->Words->Location = System::Drawing::Point(215, 326);
			this->Words->Name = L"Words";
			this->Words->Size = System::Drawing::Size(16, 18);
			this->Words->TabIndex = 19;
			this->Words->Text = L"0";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->label9->Location = System::Drawing::Point(7, 356);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(195, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Количество цифр в тексте";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->Location = System::Drawing::Point(6, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(211, 29);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Исходный текст";
			// 
			// Zadanie4
			// 
			this->Zadanie4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Zadanie4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->Zadanie4->Location = System::Drawing::Point(586, 44);
			this->Zadanie4->Name = L"Zadanie4";
			this->Zadanie4->Size = System::Drawing::Size(171, 53);
			this->Zadanie4->TabIndex = 16;
			this->Zadanie4->Text = L"Задание";
			this->Zadanie4->UseVisualStyleBackColor = true;
			this->Zadanie4->Click += gcnew System::EventHandler(this, &MyForm::Zadanie4_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic));
			this->label10->Location = System::Drawing::Point(6, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 18);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Количество слов в тексте";
			// 
			// TextMassiv
			// 
			this->TextMassiv->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextMassiv->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F));
			this->TextMassiv->Location = System::Drawing::Point(6, 44);
			this->TextMassiv->Name = L"TextMassiv";
			this->TextMassiv->Size = System::Drawing::Size(574, 279);
			this->TextMassiv->TabIndex = 0;
			this->TextMassiv->Text = L"";
			this->TextMassiv->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextMassiv_KeyPress);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"Save1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"Open1";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"Save2";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"Open2";
			// 
			// openFileDialog5
			// 
			this->openFileDialog5->FileName = L"Save3";
			// 
			// openFileDialog6
			// 
			this->openFileDialog6->FileName = L"Open3";
			// 
			// openFileDialog7
			// 
			this->openFileDialog7->FileName = L"Save4";
			// 
			// openFileDialog8
			// 
			this->openFileDialog8->FileName = L"Open4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(775, 422);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Персональные задания";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Задание 1
		int i, j, N, n, M, X, Y = 0, k = 0;
		int* arr = new int[n];
		int count = 0;
		bool MASSIV = 0;
	private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Исходный массив
		if ((e->KeyChar == 8) || ((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == '-' || (e->KeyChar == ' ')) {
			e->Handled = false;
			txt2->Clear();
			cout->Clear();
			max->Clear();
			min->Clear();
			MASSIV = 1;
		}
		else { e->Handled = true; }
	}
	private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Новый массив
		e->Handled = true;
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка 1 {
		if (txt1->Text == "" || txt1->Text == " " || txt1->Text == "-") {
			txt2->Clear();
			MessageBox::Show(this, "Некоректное значение!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			txt2->Clear();
			for (i = 0; i < n; i++) {
				arr[i] = 0;
			}
			String^ N = Convert::ToString(txt1->Text);
			N = N->Trim();
			int C = N->Length;
			for (i = 1; i < (C - 1); i++) {
				if ((N[i - 1] == ' ') && (N[i] == ' ')) {
					N = N->Remove((i - 1), 1);
					i--; C--;
				}
				if ((N[i - 1] == '-') && (N[i] == ' ')) {
					N = N->Remove((i - 1), 1);
					i--; C--;
				}
			}
			txt1->Clear();
			txt1->Text = Convert::ToString(N);
			array<String^>^ sNums = txt1->Text->Split(' ');
			C = sNums->Length; //длина массива
			n = C;
			txt1->Clear();

			for (i = 0; i < C; i++) {
				arr[i] = Int32::Parse(sNums[i]);
				txt1->Text = txt1->Text + Convert::ToString(arr[i]) + " ";
			}
			for (i = 0; i < C; i++) {
				for (j = 0; j < (i + 1); j++) {
					if (arr[i] == arr[j] && i != j) {
						Y++;
					}
				}
				if (Y == 0) {
					txt2->Text = txt2->Text + " " + Convert::ToString(arr[i]);
					Y = 0;
				}Y = 0;
			}
		};
	};
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void random_Click_1(System::Object^ sender, System::EventArgs^ e) {//Генерация массивва
		MASSIV = 1;
		int Min = 99999;
		int Max = -99999;
		int Count = 0;
		int S = 0;

		if ((min->Text == "") || (min->Text == "-") || (max->Text == "") || (max->Text == "-") || (cout->Text == "") || (cout->Text == "-")) {
			MessageBox::Show(this, "Заполните все поля для генерации", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			txt1->Clear();
			txt2->Clear();
			Min = Convert::ToInt32(min->Text);

			Max = Convert::ToInt32(max->Text);
			if (Min > Max) {
				MessageBox::Show(this, "Неверный диапазон знчений", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {

				Count = Convert::ToInt32(cout->Text);
				n = Count; k = n;
				for (i = 0; i < n; i++) {
					S = Max - Min + 1;
					arr[i] = Min + rand() % S;
					txt1->Text = txt1->Text + Convert::ToString(arr[i]) + " ";

				}S = 0;
			}
		}
	}
	private: System::Void input_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName = "";
		openFileDialog2->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog2->FilterIndex = 1;

		openFileDialog2->ShowReadOnly = true;

		openFileDialog2->RestoreDirectory = true;
		if (openFileDialog2->ShowDialog() == Windows::Forms::DialogResult::OK) {
			cout->Clear();
			max->Clear();
			min->Clear();
			MASSIV = 1;
			FileName = openFileDialog2->FileName;
			txtinput->Text = openFileDialog2->FileName;
			txt2->Clear();
		}
		try {
			StreamReader^ file = File::OpenText(FileName);
			txt1->Text = file->ReadToEnd();



		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}String^ N = Convert::ToString(txt1->Text);

		int p = N->Length;
		for (int i = 0; i < p; i++) {
			if ((N[i] != '0') && (N[i] != '1') && (N[i] != '2') && (N[i] != '3') && (N[i] != '4') && (N[i] != '5') && (N[i] != '6') && (N[i] != '7') && (N[i] != '8') && (N[i] != '9') && (N[i] != '-') && (N[i] != ' ')) {
				N = N->Replace(N[i], ' ');

			}
		}
		N = N->Trim();
		for (i = 1; i < (N->Length); i++) {
			if ((N[i - 1] == ' ') && (N[i] == ' ') || (N[i - 1] == '-') && (N[i] == '-')) {
				N = N->Remove((i - 1), 1);
				i--;
			}
		}
		txt1->Clear();
		txt1->Text = Convert::ToString(N);
	}
	private: System::Void Zadanie_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Дан одномерный массив чисел, среди элементов которого есть одинаковые. Создать новый массив из различных элементов исходного массива.", "Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FileName = "";
		openFileDialog1->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog1->FilterIndex = 1;

		openFileDialog1->ShowReadOnly = true;

		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog1->FileName;
			txtsave->Text = openFileDialog1->FileName;
		}
		try {
			StreamWriter^ file = File::AppendText(FileName);
			if (MASSIV == 1) {
				file->WriteLine("***");
				file->WriteLine("Задание №1");
				file->WriteLine("Исходный массив:" + txt1->Text);
				file->WriteLine("Новый массив:" + txt2->Text);
				MASSIV = 0;
			}
			file->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был сохранен", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}






		   // Номер 4//
		   int numbers = 0; // Итоговое количество цифр
		   int o; // Счетчик
		   char WORD;
		   int words;
		   int ALL; //Всего слов в тексте
		   String^ TEXT;
		   bool gen = 0;

	private: System::Void Zadanie4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Дана строка, содержащая произвольный текст. Сколько слов в тексте? Сколько цифр в тексте? ", "Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void TextMassiv_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		Numbers->Text = "0";
		Words->Text = "0";
		numbers = 0;
		ALL = 0;
	}
	private: System::Void Result4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextMassiv->Text == "") {
			MessageBox::Show(this, "Введите текст!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			String^ TEXT = Convert::ToString(TextMassiv->Text);
			int size4 = TEXT->Length;
			TEXT = TEXT->Trim();
			for (int o = 0; o < TEXT->Length; o++) { // Нахождение всех Слов и цифр
				if (Char::IsWhiteSpace(TEXT[o])) {
					ALL++;
				}
				if (Char::IsDigit(TEXT[o])) { // нахождение цифр
					numbers++;
				};
			}
			Words->Text = Convert::ToString(ALL + 1);
			Numbers->Text = Convert::ToString(numbers);
			ALL = 0;
			words = 0;
			numbers = 0;
		};
	}
	private: System::Void input4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName4 = "";
		openFileDialog8->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog8->FilterIndex = 1;

		openFileDialog8->ShowReadOnly = true;

		openFileDialog8->RestoreDirectory = true;
		if (openFileDialog8->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName4 = openFileDialog8->FileName;
			txtinput4->Text = openFileDialog8->FileName;
			TextMassiv->Clear();
			ALL = 0;
			words = 0;
			numbers = 0;
		}
		try {
			StreamReader^ file = File::OpenText(FileName4);
			TextMassiv->Text = file->ReadToEnd();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   // 2 работа
		   double** a = NULL;
		   int string2, stolb2;
	private: System::Void Zadanie2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Дана действительная матрица размером N x M, все элементы которой различны.В каждой строке выбирается элемент с наименьшим значением, затем среди этих чисел выбирается наибольшее.Указать индексы элемента с найденным значением.", "Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void input2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName = "";
		openFileDialog4->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog4->FilterIndex = 1;

		openFileDialog4->ShowReadOnly = true;

		openFileDialog4->RestoreDirectory = true;
		if (openFileDialog4->ShowDialog() == Windows::Forms::DialogResult::OK) {
			stolb->Clear();
			stroka->Clear();
			MINIMUMS->Clear();
			max2->Clear();
			min2->Clear();
			FileName = openFileDialog4->FileName;
			txtinput2->Text = openFileDialog4->FileName;
			Matrix2->Clear();

		}
		try {
			StreamReader^ file = File::OpenText(FileName);
			Matrix2->Text = file->ReadToEnd();

		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}String^ R = Convert::ToString(Matrix2->Text);

		int p = R->Length;
		for (int i = 0; i < p; i++) {
			if ((R[i] != '0') && (R[i] != '1') && (R[i] != '2') && (R[i] != '3') && (R[i] != '4') && (R[i] != '5') && (R[i] != '6') && (R[i] != '7') && (R[i] != '8') && (R[i] != '9') && (R[i] != '-') && (R[i] != ' ') && (R[i] != '\n')) {
				R = R->Replace(R[i], ' ');

			}
		}
		R = R->Trim();
		int C = R->Length;
		for (int i = 1; i < C; i++) {
			if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ')) {
				R = R->Remove((i - 1), 1);
				i--; C--;
			}

		}
		Matrix2->Text = Convert::ToString(R) + "  ";
		Matrix2->Text = Matrix2->Text->Replace("\n\n", "\n")->Replace("\n \n", "\n");
		Matrix2->Text = Matrix2->Text + " ";
	}
	private: System::Void random2_Click(System::Object^ sender, System::EventArgs^ e) {
		double mMin, mMax;

		Matrix2->Clear();
		ITOG2->Text = "0";
		MINIMUMS->Clear();

		if ((min2->Text == "-") || (max2->Text == "-") || (min2->Text == "") || (max2->Text == "") || (stolb->Text == "") || (stroka->Text == "")) {
			MessageBox::Show(this, "Заполните все поля для генерации.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			string2 = Convert::ToInt32(stroka->Text);
			stolb2 = Convert::ToInt32(stolb->Text);
			if (string2 < 2 || stolb2 < 2) {
				MessageBox::Show(this, "Минимальный размер матрицы 2х2.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {

				mMin = Convert::ToInt32(min2->Text) * 100;
				mMax = Convert::ToInt32(max2->Text) * 100;
				if (mMax < mMin) {
					MessageBox::Show(this, "Неверный диапозон значений.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					a = new double* [stolb2];
					for (int i = 0; i < string2; i++) {
						a[i] = new double[stolb2];
					}
					int S = 0;
					for (int i = 0; i < string2; i++) {
						for (int j = 0; j < stolb2; j++) {
							S = mMax - mMin + 1;
							a[i][j] = (double)(mMin + rand() % S) / 100;
							Matrix2->Text = Matrix2->Text + String::Format("{0:f2}", a[i][j]) + " ";

						}Matrix2->Text = Matrix2->Text + "\n";

					}S = 0; Matrix2->Text = Matrix2->Text->Remove(Matrix2->Text->Length - 1);
					gen = 1;
					//matrixN->Text = "";
					//matrixMin->Text = "";
					//matrixMax->Text = "";
					//private: System::Void OutputMatrix() {
					Matrix2->Text = "";
					int length_max1 = 0;
					int length_temp1 = 0;
					int count_of_probels1 = 0;
					String^ temp_member1 = "";
					int rows1 = string2;
					int columns1 = stolb2;
					for (int i = 0; i < rows1; i++) {
						for (int j = 0; j < columns1; j++) {
							temp_member1 = Convert::ToString(a[i][j]);
							length_temp1 = temp_member1->Length;
							if (length_temp1 > length_max1) length_max1 = length_temp1;
						}
					}
					for (int i = 0; i < rows1; i++) {
						for (int j = 0; j < columns1; j++) {
							temp_member1 = Convert::ToString(a[i][j]);
							length_temp1 = temp_member1->Length;
							count_of_probels1 = length_max1 - length_temp1;
							for (int k = 0; k < count_of_probels1; k++) {
								temp_member1 = " " + temp_member1;
							}
							Matrix2->Text = Matrix2->Text + temp_member1 + "  ";
						}
						Matrix2->Text = Matrix2->Text + "\n";
					}Matrix2->Text = Matrix2->Text->Remove(Matrix2->Text->Length - 1);
					MINIMUMS->Clear();
					ITOG2->Text = "";
					gen = 1;
				}
			}
		}

	}
	private: System::Void Matrix2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == '-') || (e->KeyChar == ' ') || (e->KeyChar == ',')) {
			e->Handled = false;
			ITOG2->Text = "0";
			stolb->Clear();
			stroka->Clear();
			max2->Clear();
			min2->Clear();
			gen = 0;
			MINIMUMS->Clear();
		}
		else { e->Handled = true; }
	}
	private: System::Void MINIMUMS_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void stolb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '-' && stolb->Text->IndexOf('-') == -1)
			stolb->SelectionStart = 0;

		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void stroka_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '-' && stroka->Text->IndexOf('-') == -1)
			stroka->SelectionStart = 0;

		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void max2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int x1;
		if (((max2->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
			max2->Text = "";
			max2->Text = max2->Text->Insert(x1, "-0,");
			(max2->SelectionStart = x1 + 3);
		}if (e->KeyChar == '-' && max2->Text->IndexOf('-') == -1)
			max2->SelectionStart = 0;

		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && max2->Text->IndexOf('-') == -1) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void min2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int x1;
		if (((min2->Text == "-")) && ((e->KeyChar == '.') || (e->KeyChar == ','))) {
			min2->Text = "";
			min2->Text = min2->Text->Insert(x1, "-0,");
			(min2->SelectionStart = x1 + 3);
		}if (e->KeyChar == '-' && min2->Text->IndexOf('-') == -1)
			min2->SelectionStart = 0;

		if ((e->KeyChar == 8) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || e->KeyChar == '-' && min2->Text->IndexOf('-') == -1) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//double** a = NULL;
		double* minimum = new double[string2];
		int* indexI = new int[string2];
		int* indexJ = new int[string2];
		ITOG2->Text = "0";
		MINIMUMS->Clear();
		if (Matrix2->Text == "" || Matrix2->Text == " ") {
			MessageBox::Show(this, "Неверный диапозон значений.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (gen == 0) {
				String^ R = Convert::ToString(Matrix2->Text);
				R = R->Trim();

				for (int i = 1; i < (R->Length); i++) {
					if ((R[i - 1] == ' ') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '-') || (R[i - 1] == '-') && (R[i] == ' ') || (R[i - 1] == '-') && (R[i] == '\n') || (R[i - 1] == ' ') && (R[i] == '\n')) {
						R = R->Remove((i - 1), 1);
						i--;
					}if ((R[i - 1] == ' ') && (R[i] == ',')) {
						R = R->Remove((i), 1);
						i--;
					}if (R[(R->Length) - 1] == '\n') {
						R = R->Remove(((R->Length) - 1), 1);
					}
				}Matrix2->Text = Convert::ToString(R);
				Matrix2->Text = Matrix2->Text->Replace("\n\n", "\n")->Replace("\n \n", "\n");

				string2 = Matrix2->Lines->Length;
				array<String^>^ S1 = Matrix2->Lines[0]->Split(' ');
				stolb2 = S1->Length;
				delete(S1);
				array<String^>^ as;
				a = new double* [string2];
				for (int i = 0; i < string2; i++) {//mass
					a[i] = new double[stolb2];

				}
				/*for (int i = 0; i < string2; i++) {
					for (int j = 0; j < stolb2; j++) {
						a[i][j] = 0;
					}
				}*/
				for (int i = 0; i < string2; i++) {//count Lines
					as = Matrix2->Lines[i]->Split(' ');
					int f = 0;
					for (int j = 0; j < stolb2; j++) {
						for (int w = f; w < as->Length; w++) {
							if (as[w] != " " && as[w] != "\n" && as[w] != "") {
								a[i][j] = Double::Parse(as[w]);
								w = as->Length;
								

							}
						}f++;
					}
				}


				Matrix2->Text = "";
				int length_max = 0;
				int length_temp = 0;
				int count_of_probels = 0;
				String^ temp_member = "";
				int rows = string2;
				int columns = stolb2;
				for (int i = 0; i < rows; i++) {
					for (int j = 0; j < columns; j++) {
						temp_member = Convert::ToString(a[i][j]);
						length_temp = temp_member->Length;
						if (length_temp > length_max) length_max = length_temp;
					}
				}
				for (int i = 0; i < rows; i++) {
					for (int j = 0; j < columns; j++) {
						temp_member = Convert::ToString(a[i][j]);
						length_temp = temp_member->Length;
						count_of_probels = length_max - length_temp;
						for (int k = 0; k < count_of_probels; k++) {
							temp_member = " " + temp_member;
						}
						Matrix2->Text = Matrix2->Text + temp_member + "  ";
					}
					Matrix2->Text = Matrix2->Text + "\n";
				}gen = 1;
			}//////////////////////////
			for (int i = 0; i < string2; i++) {
				minimum[i] = 999999;
				indexI[i] = 0;
				indexJ[i] = 0;
				for (int j = 0; j < stolb2; j++) {
					if (a[i][j] < minimum[i]) {
						minimum[i] = a[i][j];
						indexI[i] = i;
						indexJ[i] = j;
					}
				}
			}
			for (int i = 0; i < string2; i++) {
				MINIMUMS->Text += Convert::ToString(minimum[i])+";  ";
				//Matrix2->Text += Convert::ToString(indexI[i]) + ";  ";
				//Matrix2->Text += Convert::ToString(indexJ[i]) + ";  ";
			}
			double MAXIMUM = -999999;
			int I = 0, J = 0;
			for (int i = 0; i < string2; i++) {
					if (MAXIMUM < minimum[i]) {
						MAXIMUM = minimum[i];
						I = indexI[i];
						J = indexJ[i];
					}
			}
			ITOG2->Text = "Индекс строки=" + Convert::ToString(I + 1) + "; " + "Индекс столбца=" + Convert::ToString(J + 1);
			gen = 0;
			//a = NULL;
			
		}
	}

		   // # 3
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1;
		int* M3 = new int[n1];
		out3->Clear();
		bool Stop1 = 0;
		bool Stop2 = 0;


		if ((txt3->Text == "") || (txt3->Text == " ") || (txt3->Text == "-") || (txt3->Text == "- ")) {
			MessageBox::Show(this, "Заполните поля", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ R = Convert::ToString(txt3->Text);
			R = R->Trim();
			int C = R->Length;
			for (int i1 = 1; i1 < C; i1++) {
				if (((R[i1 - 1] == ' ') && (R[i1] == ' ')) || ((R[i1 - 1] == '-') && (R[i1] == '-')) || ((R[i1 - 1] == '-') && (R[i1] == ' '))) {
					R = R->Remove((i1 - 1), 1);
					i1--; C--;
				}
			}
			txt3->Clear();

			txt3->Text = Convert::ToString(R);
			array<String^>^ sNums = txt3->Text->Split(' ');
			C = sNums->Length;
			n1 = C;
			txt3->Clear();
			int f = 0;//конец(2)
			for (int i1 = 0; i1 < C; i1++) {
				for (int w1 = f; w1 < C; w1++) {
					if (sNums[w1] != " " && sNums[w1] != "") {
						M3[i1] = Int32::Parse(sNums[w1]);
						txt3->Text = txt3->Text + Convert::ToString(M3[i1]) + " ";
						w1 = C;
					}
					f++;
				}
			}
			delete(R);
			delete(sNums);


		}
		for (int i = 1; i < n1; i++) {
			int B3 = 1;
			int N3 = 1;
			int SOURCE;
			SOURCE = M3[i];
			int SOURCE2;//(конец3)
			while (M3[i] / 10 != 0) {
				N3 = N3 + 1;
				M3[i] = M3[i] / 10;
			}
			M3[i] = SOURCE;
			SOURCE2 = M3[i - 1];
			while (M3[i - 1] / 10 != 0) {
				B3 = B3 + 1;
				M3[i - 1] = M3[i - 1] / 10;
			}
			M3[i - 1] = SOURCE2;

			if (N3 != B3) {
				Stop1 = 1;
			}
		}
		int A3 = 1;
		int SOURCE3 = M3[0];
		while (SOURCE3 / 10 != 0) {
			A3 = A3 + 1;
			SOURCE3 = SOURCE3 / 10;
		}
		if (A3 > 9) {
			Stop2 = 1;
		}
		if (Stop1 == 1) {
			MessageBox::Show(this, "Числа имеют разное количество цифр", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			if (Stop2 == 1) {
				MessageBox::Show(this, "Количество цифр в числах превышает 9", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				txt3->Clear();
			}
			else {
				for (int i = 0; i < n1; i++) {
					int SOURCE4 = M3[i];
					int chet = 0;
					for (int j = 0; j < A3 - 1; j++) {
						if ((M3[i] % 10) > ((M3[i] / 10) % 10)) {
							M3[i] = M3[i] / 10;
							chet++;
						}
						else {
							continue;
						}
						if (chet == A3 - 1) {
							out3->Text += SOURCE4 + "; ";
						}
					}
				}
			}
		}
		if ((out3->Text == "") && (A3 > 2)) {
			out3->Text = "Таких чисел нет";
		}
		for (int i = 0; i < n1; i++) {
			M3[i] = 0;
		}

		//delete[]M3;

	} // Кнопка  



	private: System::Void random3_Click(System::Object^ sender, System::EventArgs^ e) {
		int a3 = Convert::ToInt32(textBox1->Text);
		if (a3 > 9) {
			MessageBox::Show(this, "Количество цифр в числах превышает 9", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			int m3 = Convert::ToInt32(M3box->Text);
			int* M3 = new int[a3];
			out3->Clear();
			txt3->Clear();
			for (int i = 0; i < m3; i++) {
				for (int j = 0; j < a3; j++) {
					if (j == 0) {
						M3[j] = (rand() % 9) + 1;
					}
					else {
						M3[j] = (rand() % 9) + 1;
					}
					txt3->Text += Convert::ToString(M3[j]);
				}
				txt3->Text += " ";
			}
		}
	}
	private: System::Void Zadanie3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Найти все натуральные n-значные числа, цифры в которых образуют строго возрастающую последовательность(например, 1234, 5789).", "Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void input3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName4 = "";
		openFileDialog6->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog6->FilterIndex = 1;

		openFileDialog6->ShowReadOnly = true;

		openFileDialog6->RestoreDirectory = true;
		if (openFileDialog6->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName4 = openFileDialog6->FileName;
			txtinput3->Text = openFileDialog6->FileName;
			out3->Clear();
			textBox1->Clear();
			M3box->Clear();
			txt3->Clear();
		}
		try {
			StreamReader^ file = File::OpenText(FileName4);
			txt3->Text = file->ReadToEnd();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был открыт", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		String^ N = Convert::ToString(txt3->Text);
		int p = N->Length;
		for (int i = 0; i < p; i++) {
			if ((N[i] != '0') && (N[i] != '1') && (N[i] != '2') && (N[i] != '3') && (N[i] != '4') && (N[i] != '5') && (N[i] != '6') && (N[i] != '7') && (N[i] != '8') && (N[i] != '9') && (N[i] != '-') && (N[i] != ' ')) {
				N = N->Replace(N[i], ' ');

			}
		}
		N = N->Trim();
		for (i = 1; i < (N->Length); i++) {
			if ((N[i - 1] == ' ') && (N[i] == ' ') || (N[i - 1] == '-') && (N[i] == '-')) {
				N = N->Remove((i - 1), 1);
				i--;
			}
		}
		txt3->Clear();
		txt3->Text = Convert::ToString(N);
	}
	private: System::Void txt3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {//Исходный массив
		if ((e->KeyChar == 8) || ((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == ' ')) {
			e->Handled = false;
			M3box->Clear();
			textBox1->Clear();
			out3->Clear();
		}
		else { e->Handled = true; }
	}
		   // Сейв 4

	private: System::Void save4_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FileName = "";
		openFileDialog7->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog7->FilterIndex = 1;

		openFileDialog7->ShowReadOnly = true;

		openFileDialog7->RestoreDirectory = true;
		if (openFileDialog7->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog7->FileName;
			txtsave4->Text = openFileDialog7->FileName;
		}
		try {
			StreamWriter^ file = File::AppendText(FileName);
			{
				file->WriteLine("***");
				file->WriteLine("Задание №4");
				file->WriteLine("Исходный текст: " + TextMassiv->Text);
				file->WriteLine("Количество слов в тексте: " + Words->Text);
				file->WriteLine("Количество цифр в тексте: " + Numbers->Text);
			}
			file->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был сохранен", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}

		   // Сейв 2
	private: System::Void save2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FileName = "";
		openFileDialog3->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog3->FilterIndex = 1;

		openFileDialog3->ShowReadOnly = true;

		openFileDialog3->RestoreDirectory = true;
		if (openFileDialog3->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog3->FileName;
			txtsave2->Text = openFileDialog3->FileName;
		}
		try {
			StreamWriter^ file = File::AppendText(FileName);
			{array<String^>^ S1 = Matrix2->Text->Split('\n');



			file->WriteLine("***");
			file->WriteLine("Задание №2");
			file->WriteLine("Исходная матрица: ");
			for (int i = 0; i < Matrix2->Lines->Length; i++) {
				file->WriteLine(S1[i]);
			}
			file->WriteLine("Наименьшие значения в каждой строке: " + MINIMUMS->Text);
			file->WriteLine("Индексы наибольшего значения из наименьших: " + ITOG2->Text);
			file->Close();
			}
			file->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был сохранен", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
		   // Сейв 3
	private: System::Void save3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FileName = "";
		openFileDialog5->Filter =

			"txt files (*.txt)|*.txt|All files (*.*)|*.*";

		openFileDialog5->FilterIndex = 1;

		openFileDialog5->ShowReadOnly = true;

		openFileDialog5->RestoreDirectory = true;
		if (openFileDialog5->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog5->FileName;
			txtsave3->Text = openFileDialog5->FileName;
		}
		try {
			StreamWriter^ file = File::AppendText(FileName);
			{
				file->WriteLine("***");
				file->WriteLine("Задание №3");
				file->WriteLine("Исходные данные: " + txt3->Text);
				file->WriteLine("Числа с возрастающей последовательностью: " + out3->Text);
				file->Close();
			}
			file->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не был сохранен", "Oшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//for (int i = 0; i < n1; +) 
		//M3[i] = 0;
		//}
		//delete[]M3;
	}
	};
}