#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <windows.h>
#include <string>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
using std::string;

namespace Tes1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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

		static int time;
	private: System::Windows::Forms::Timer^  timer1;
	public: 
		String^ strTime;

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


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox5;


	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::ListView^  listView2;

	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader(0));
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(572, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 26);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseLeave);
			this->pictureBox1->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseHover);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->Location = System::Drawing::Point(544, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 26);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->WaitOnLoad = true;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox2_MouseLeave);
			this->pictureBox2->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox2_MouseHover);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Location = System::Drawing::Point(517, 8);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 26);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->WaitOnLoad = true;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox3_MouseLeave);
			this->pictureBox3->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox3_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(224, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Compress";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(306, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Decompress";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->Location = System::Drawing::Point(228, 44);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(58, 62);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->WaitOnLoad = true;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox4_MouseLeave);
			this->pictureBox4->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox4_MouseHover);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 18);
			this->label4->TabIndex = 15;
			this->label4->Text = L"File Compress";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(107, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Output Name";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->pictureBox11);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->pictureBox10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->pictureBox6);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox9);
			this->groupBox1->Controls->Add(this->listView2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(0, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(608, 332);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(143, 281);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 33);
			this->label14->TabIndex = 46;
			this->label14->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(19, 281);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 33);
			this->label13->TabIndex = 45;
			this->label13->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(139, 259);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 18);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Time";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(17, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 18);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Ratio";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox11->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.ErrorImage")));
			this->pictureBox11->Location = System::Drawing::Point(363, 77);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(25, 25);
			this->pictureBox11->TabIndex = 42;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->WaitOnLoad = true;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::pictureBox11_Click);
			this->pictureBox11->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox11_MouseLeave);
			this->pictureBox11->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox11_MouseHover);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(192, 76);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(164, 26);
			this->textBox4->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(107, 81);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 18);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Output at";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(374, 153);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(164, 26);
			this->textBox2->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(348, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 18);
			this->label9->TabIndex = 37;
			this->label9->Text = L"at";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(248, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 40);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Decompress !";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Goldenrod;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(248, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 40);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Compress !";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(248, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 40);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Search File!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(209, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 18);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Start crazy by clicking below button ...";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(187, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(276, 18);
			this->label7->TabIndex = 32;
			this->label7->Text = L"you\'re in pop compresser. Be Wild with me!";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(275, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 78);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Hi,";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox10->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.ErrorImage")));
			this->pictureBox10->Location = System::Drawing::Point(547, 45);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 25);
			this->pictureBox10->TabIndex = 30;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->WaitOnLoad = true;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			this->pictureBox10->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox10_MouseLeave);
			this->pictureBox10->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox10_MouseHover);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(110, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(432, 26);
			this->textBox3->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 18);
			this->label3->TabIndex = 28;
			this->label3->Text = L"File Decompress";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->Location = System::Drawing::Point(259, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 25);
			this->pictureBox6->TabIndex = 27;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->WaitOnLoad = true;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			this->pictureBox6->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox6_MouseLeave);
			this->pictureBox6->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox6_MouseHover);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Location = System::Drawing::Point(228, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 25);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->WaitOnLoad = true;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			this->pictureBox5->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox5_MouseLeave);
			this->pictureBox5->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox5_MouseHover);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox9->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.ErrorImage")));
			this->pictureBox9->Location = System::Drawing::Point(544, 155);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(25, 25);
			this->pictureBox9->TabIndex = 26;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->WaitOnLoad = true;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			this->pictureBox9->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox9_MouseLeave);
			this->pictureBox9->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox9_MouseHover);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->listView2->Location = System::Drawing::Point(110, 43);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(461, 97);
			this->listView2->TabIndex = 24;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView2_SelectedIndexChanged_1);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Path";
			this->columnHeader1->Width = 111;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 103;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Size";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(209, 153);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 26);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.ErrorImage")));
			this->pictureBox8->Location = System::Drawing::Point(8, 70);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(38, 36);
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->WaitOnLoad = true;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			this->pictureBox8->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox8_MouseLeave);
			this->pictureBox8->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox8_MouseHover);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox7->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.ErrorImage")));
			this->pictureBox7->Location = System::Drawing::Point(312, 44);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(67, 62);
			this->pictureBox7->TabIndex = 24;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->WaitOnLoad = true;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			this->pictureBox7->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox7_MouseLeave);
			this->pictureBox7->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox7_MouseHover);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(605, 475);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(5);
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"    ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
	{
			pictureBox4->Visible = true;
			pictureBox7->Visible = true;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label9->Visible = false;
			label10->Visible = false;
			textBox1->Visible = false;
			listView2->Visible = false;
			textBox2->Visible = false;
			textBox3->Visible = false;
			textBox4->Visible = false;
			pictureBox5->Visible = false;
			pictureBox6->Visible = false;
			pictureBox9->Visible = false;
			pictureBox10->Visible = false;
			pictureBox11->Visible = false;
			button2->Visible = false;
			button3->Visible = false;
	}

	private: string getFileName(const string& s) 
	{
		char sep = '/';

		#ifdef _WIN32
		   sep = '\\';
		#endif

		size_t i = s.rfind(sep, s.length());
		if (i != string::npos) {
			return(s.substr(i+1, s.length() - i));
		}

		return("");
	}

	/*button1 - SearchFile*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Multiselect = true;
		openFileDialog1->InitialDirectory = "C:\\";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{ 
				for (int i=0;i<openFileDialog1->FileNames->Length;i++)
				{
					String^ filePath = openFileDialog1->FileNames[i];
					String^ fileName = openFileDialog1->SafeFileNames[i];
					myStream->Close();

					std::string stringFilePath = msclr::interop::marshal_as<std::string>(filePath);

					/*Get Extension*/
					std::string::size_type idx;
					std::string extension;

					idx = stringFilePath.rfind('.');

					if(idx != std::string::npos)
					{
						extension = stringFilePath.substr(idx+1);
					}

					String^ SystemExtension = gcnew String(extension.c_str());

					if (extension != "pop")
					{
						pictureBox4_Click(System::EventArgs::Empty,System::EventArgs::Empty);
						/*File Size*/
						/*From : http://stackoverflow.com/questions/5840148/how-can-i-get-a-files-size-in-c */
						struct stat stat_buf;
						int rc = stat(stringFilePath.c_str(), &stat_buf);
						long long intFileSize = rc == 0 ? stat_buf.st_size : -1;
						std::string fileSize = std::to_string(intFileSize);			   
						String^ SystemStrFileSize = gcnew String(fileSize.c_str());

						ListViewItem^ newItem = gcnew ListViewItem(filePath);
						newItem->SubItems->Add(fileName);
						newItem->SubItems->Add(SystemStrFileSize);
						listView2->Items->Add(newItem);
					}
					else
					{
						pictureBox7_Click(System::EventArgs::Empty,System::EventArgs::Empty);
						textBox3->Text = filePath;
					}
				}
				/*
				std::string str_dir = msclr::interop::marshal_as<std::string>(strfilename);
				std::size_t found = str_dir.find_last_of("/\\");
				std::string str_fileName = str_dir.substr(found+1);
				String^ SysStr_FileName = gcnew String(str_fileName.c_str());

				MessageBox::Show(SysStr_FileName);
				*/
			}
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		 Application::Exit();
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		 Application::Exit();
	}
	private: System::Void pictureBox1_MouseHover(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox1->BackgroundImage = Image::FromFile(L"icon_close_hover1.png");
	}

	private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox1->BackgroundImage = Image::FromFile(L"icon_close_template2.png");
	}

	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}

	private: System::Void pictureBox2_MouseHover(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox2->BackgroundImage = Image::FromFile(L"icon_minimize_hover.png");
	}

	private: System::Void pictureBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox2->BackgroundImage = Image::FromFile(L"icon_minimize_template.png");
	}

	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}

	private: System::Void pictureBox3_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		 pictureBox3->BackgroundImage = Image::FromFile(L"icon_help_hover.png");
	}

	private: System::Void pictureBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		 pictureBox3->BackgroundImage = Image::FromFile(L"icon_help_template.png");
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listView2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

	/*Picture Box 5 - Compress Button*/
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e)
	{	
		   label1->Font = gcnew System::Drawing::Font(L"Calibri", 27);
		   label1->Location = System::Drawing::Point(240, 65);
		   pictureBox4->Visible = false;
		   pictureBox5->Visible = true;
		   pictureBox6->Visible = true;
		   pictureBox7->Visible = false;
		   pictureBox9->Visible = true;
		   pictureBox10->Visible = false;
		   pictureBox11->Visible = false;
		   label2->Visible = false;
		   label3->Visible = false;
		   label4->Visible = true;
		   label5->Visible = true;
		   label6->Visible = false;
		   label7->Visible = false;
		   label8->Visible = false;
		   label9->Visible = true;
		   label10->Visible = false;
		   label11->Visible = true;
			label12->Visible = true;
			label13->Visible = true;
			label14->Visible = true;
		   listView2->Visible = true;
		   pictureBox8->BackgroundImage = Image::FromFile(L"home_button_template.png");
		   textBox1->Visible = true;
		   textBox2->Visible = true;
		   textBox3->Visible = false;
		   textBox4->Visible = false;
		   button1->Visible = false;
		   button2->Visible = true;
		   button3->Visible = false;
	}

	private: System::Void pictureBox4_MouseHover(System::Object^  sender, System::EventArgs^  e)
	{	
		   pictureBox4->BackgroundImage = Image::FromFile(L"box_compress_hover.png");
	}

	private: System::Void pictureBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{	
		   pictureBox4->BackgroundImage = Image::FromFile(L"box_compress.png");
	}

	/*Picture Box 5 - Add ListViewItem*/
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			Stream^ myStream;
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->Multiselect = true;
			openFileDialog1->InitialDirectory = "C:\\";

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = openFileDialog1->OpenFile()) != nullptr)
				{
					for (int i=0;i<openFileDialog1->FileNames->Length;i++)
					{
						String^ filePath = openFileDialog1->FileNames[i];
						String^ fileName = openFileDialog1->SafeFileNames[i];
						myStream->Close();
					
					
						std::string stringFilePath = msclr::interop::marshal_as<std::string>(filePath);

						/*File Size*/
						/*From : http://stackoverflow.com/questions/5840148/how-can-i-get-a-files-size-in-c */
						struct stat stat_buf;
						int rc = stat(stringFilePath.c_str(), &stat_buf);
						long long intFileSize = rc == 0 ? stat_buf.st_size : -1;
						std::string fileSize = std::to_string(intFileSize);			   
						String^ SystemStrFileSize = gcnew String(fileSize.c_str());

						ListViewItem^ newItem = gcnew ListViewItem(filePath);
						newItem->SubItems->Add(fileName);
						newItem->SubItems->Add(SystemStrFileSize);
						listView2->Items->Add(newItem);
					}
				}
			}			
	}

	private: System::Void pictureBox5_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox5->BackgroundImage = Image::FromFile(L"plus_hover.png");
	}

	private: System::Void pictureBox5_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox5->BackgroundImage = Image::FromFile(L"plus_template.png");
	}

	/*Picture Box 6 - Delete ListViewItem*/
	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		for (int i=(listView2->SelectedItems->Count)-1;i>=0;i--)
		{
			listView2->Items->Remove(listView2->SelectedItems[i]);
		}
	}

	private: System::Void pictureBox6_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox6->BackgroundImage = Image::FromFile(L"delete_hover.png");
	}

	private: System::Void pictureBox6_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox6->BackgroundImage = Image::FromFile(L"delete_template.png");
	}

	/*Picture Box 7 - Decompress Button*/
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		   label2->Font = gcnew System::Drawing::Font(L"Calibri", 27);
		   pictureBox4->Visible = false;
		   pictureBox5->Visible = false;
		   pictureBox6->Visible = false;
		   pictureBox7->Visible = false;
		   pictureBox9->Visible = false;
		   pictureBox10->Visible = true;
		   pictureBox11->Visible = true;
		   label1->Visible = false;
		   label3->Visible = true;
		   label4->Visible = false;
		   label5->Visible = false;
		   label6->Visible = false;
		   label7->Visible = false;
		   label8->Visible = false;
		   label11->Visible = false;
			label12->Visible = false;
			label13->Visible = false;
			label14->Visible = false;
		   label10->Visible = true;
		   textBox1->Visible = false;
		   textBox2->Visible = false;
		   textBox3->Visible = true;
		   textBox4->Visible = true;
		   listView2->Visible= false;
		   button1->Visible = false;
		   button2->Visible = false;
		   button3->Visible = true;
		   label2->Location = System::Drawing::Point(232, 65);
		   pictureBox8->BackgroundImage = Image::FromFile(L"home_button_template.png");
		   label9->Visible = false;
	}

	private: System::Void pictureBox7_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
			pictureBox7->BackgroundImage = Image::FromFile(L"box_decompress_hover.png");
	}

	private: System::Void pictureBox7_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
			pictureBox7->BackgroundImage = Image::FromFile(L"box_decompress.png");
	}

	/*Picture Box 8 - Home Button*/
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			pictureBox4->Visible = true;
			pictureBox7->Visible = true;
			pictureBox11->Visible = true;
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = true;
		    label7->Visible = true;
		    label8->Visible = true;
			label9->Visible = false;
			label10->Visible = false;
			label11->Visible = false;
			label12->Visible = false;
			label13->Visible = false;
			label14->Visible = false;
			textBox1->Visible = false;
			textBox4->Visible = false;
			listView2->Visible = false;
			textBox2->Visible = false;
			textBox3->Visible = false;
			pictureBox5->Visible = false;
			pictureBox6->Visible = false;
			pictureBox9->Visible = false;
			pictureBox10->Visible = false;
			pictureBox11->Visible = false;
			button1->Visible = true;
			button2->Visible = false;
			button3->Visible = false;

			label2->Location = System::Drawing::Point(306, 104);
			label1->Location = System::Drawing::Point(224, 104);
			label1->Font = gcnew System::Drawing::Font(L"Calibri", 11.25);
			label2->Font = gcnew System::Drawing::Font(L"Calibri", 11.25);
			pictureBox8->BackgroundImage = Image::FromFile(L"home_button_template.png");
	}

	private: System::Void pictureBox8_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
			 pictureBox8->BackgroundImage = Image::FromFile(L"home_button_hover.png");
	}

	private: System::Void pictureBox8_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
			pictureBox8->BackgroundImage = Image::FromFile(L"home_button_template.png");
	}

	/*Picture Box 9 - Folder Directory*/
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;

		  if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		  {
				textBox2->Text = folderBrowserDialog1->SelectedPath;
		  }
	}

	private: System::Void pictureBox9_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox9->BackgroundImage = Image::FromFile(L"folder_hover.png");
	}

	private: System::Void pictureBox9_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox9->BackgroundImage = Image::FromFile(L"folder_template.png");
	}

	/*Picture Box 9 - Add File Decompress*/
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			Stream^ myStream;
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->Multiselect = true;
			openFileDialog1->InitialDirectory = "C:\\";

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = openFileDialog1->OpenFile()) != nullptr)
				{
					String^ filePath = openFileDialog1->FileName;
					String^ fileName = openFileDialog1->SafeFileName;
					myStream->Close();
					
					
					std::string stringFilePath = msclr::interop::marshal_as<std::string>(filePath);

					/*Get Extension*/
					std::string::size_type idx;
					std::string extension;

					idx = stringFilePath.rfind('.');

					if(idx != std::string::npos)
					{
						extension = stringFilePath.substr(idx+1);
					}

					String^ SystemExtension = gcnew String(extension.c_str());

					if (extension != "pop")
					{
						MessageBox::Show("File must be in extension *.pop","Invalid File", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						textBox3->Text = filePath;
					}
				}
			}			
	}

	private: System::Void pictureBox10_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		   pictureBox10->BackgroundImage = Image::FromFile(L"plus_hover.png");
	}

	private: System::Void pictureBox10_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		   pictureBox10->BackgroundImage = Image::FromFile(L"plus_template.png");
	}

	/*button2 - startCompress*/
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{  
		String^ command;
		String^ outputPath;
		int i;
		std::string* allFilePath;
		long long sizeBefore = 0;
		allFilePath = new std::string[listView2->Items->Count];

		command = "huffman.exe 1" + " " + listView2->Items->Count;
		for (i=0;i<listView2->Items->Count;i++)
		{
			 allFilePath[i] = msclr::interop::marshal_as<std::string>(listView2->Items[i]->Text);
			 struct stat stat_buf;
			 int rc = stat(allFilePath[i].c_str(), &stat_buf);
			 long long intFileSize = rc == 0 ? stat_buf.st_size : -1;
			 
			 sizeBefore = sizeBefore + intFileSize;
			 command = command + " " + listView2->Items[i]->Text;
		}

		command = command + " " + textBox2->Text + "\\" + textBox1->Text + ".pop";
		outputPath =  textBox2->Text + "\\" + textBox1->Text + ".pop";
		std::string stringOut = msclr::interop::marshal_as<std::string>(outputPath);
		std::string stdCommand = msclr::interop::marshal_as<std::string>(command);

		timer1->Start();
		system(stdCommand.c_str());
		timer1->Stop();

		struct stat stat_buf;
		int rc = stat(stringOut.c_str(), &stat_buf);
		long long sizeAfter = rc == 0 ? stat_buf.st_size : -1;

		float ratio = (float)sizeAfter/(float)sizeBefore * 100;		   
		String^ SystemStrFileSize = Convert::ToString(ratio);
		SystemStrFileSize = SystemStrFileSize +"%";

		strTime = Convert::ToString(time);
		label14->Text = strTime;
		label13->Text = SystemStrFileSize;

		

		textBox1->Clear();
		textBox2->Clear();

		for (int i=0;i<listView2->Items->Count;i++)
		{
			listView2->Items[i]->Remove();
		}
		
	}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }

	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) 
	{

	}

	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ command;

		command = "huffman.exe 2" + " " + textBox3->Text + " " + textBox4->Text;
		std::string stdCommand = msclr::interop::marshal_as<std::string>(command);

		MessageBox::Show(command);

		system(stdCommand.c_str());
		textBox3 -> Clear();
		textBox4 -> Clear();

	}
	/*Picture Box 11 - Folder Directory Decompress*/
	private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;

		  if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		  {
				textBox4->Text = folderBrowserDialog1->SelectedPath;
		  }
	}

	private: System::Void pictureBox11_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox11->BackgroundImage = Image::FromFile(L"folder_hover.png");
	}

	private: System::Void pictureBox11_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
	{
		  pictureBox11->BackgroundImage = Image::FromFile(L"folder_template.png");
	}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		 time++;
		 MessageBox::Show("aaf");
		 }
};
} 