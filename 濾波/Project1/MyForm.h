#pragma once

#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Button^ button1;
		protected:
		private: System::Windows::Forms::PictureBox^ pictureBox1;









	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
		private: System::Windows::Forms::Button^ button2;

		private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown3;

		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::PictureBox^ pictureBox4;
		private: System::Windows::Forms::PictureBox^ pictureBox5;
		private: System::Windows::Forms::PictureBox^ pictureBox6;
		private: System::Windows::Forms::PictureBox^ pictureBox7;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
		private: System::Windows::Forms::PictureBox^ pictureBox8;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
		private: System::Windows::Forms::Button^ button7;

		Bitmap^ ori_image;
		Bitmap^ gaussian;
		Bitmap^ impulse;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label15;
			   Bitmap^ composite;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 58);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(214, 113);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 286);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(468, 58);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Gaussian Noise";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(611, 58);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 25);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(611, 81);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(68, 25);
			this->numericUpDown2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(551, 61);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"std_dev";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(551, 83);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 13;
			this->label2->Text = L"mean";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(808, 83);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 15);
			this->label3->TabIndex = 19;
			this->label3->Text = L"salt";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(808, 61);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 15);
			this->label4->TabIndex = 18;
			this->label4->Text = L"pepper";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(854, 58);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(68, 25);
			this->numericUpDown3->TabIndex = 17;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(725, 58);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 50);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Impulse Noise";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1074, 88);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 15);
			this->label5->TabIndex = 24;
			this->label5->Text = L"salt";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1074, 66);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 15);
			this->label6->TabIndex = 23;
			this->label6->Text = L"pepper";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(854, 81);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(68, 25);
			this->numericUpDown4->TabIndex = 22;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(986, 58);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 50);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Composite Noise";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1069, 34);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 28;
			this->label7->Text = L"mean";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1069, 12);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 15);
			this->label8->TabIndex = 27;
			this->label8->Text = L"std_dev";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(1120, 31);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(68, 25);
			this->numericUpDown5->TabIndex = 26;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(1120, 8);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(68, 25);
			this->numericUpDown6->TabIndex = 25;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 14, 0, 0, 0 });
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(469, 112);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(253, 286);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(727, 112);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(253, 286);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(985, 113);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(253, 286);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 31;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(985, 408);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(253, 286);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(727, 407);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(253, 286);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(468, 407);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(253, 286);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(921, 63);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 15);
			this->label9->TabIndex = 35;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(921, 87);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 15);
			this->label10->TabIndex = 36;
			this->label10->Text = L"%";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1188, 67);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 15);
			this->label11->TabIndex = 37;
			this->label11->Text = L"%";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1188, 92);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 15);
			this->label12->TabIndex = 38;
			this->label12->Text = L"%";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(1121, 86);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(68, 25);
			this->numericUpDown7->TabIndex = 40;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(1121, 63);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(68, 25);
			this->numericUpDown8->TabIndex = 39;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(214, 407);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(253, 286);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 41;
			this->pictureBox8->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 431);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 54);
			this->button5->TabIndex = 42;
			this->button5->Text = L"Lowpass";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 489);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 54);
			this->button6->TabIndex = 43;
			this->button6->Text = L"Median";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown9->Location = System::Drawing::Point(33, 623);
			this->numericUpDown9->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(68, 25);
			this->numericUpDown9->TabIndex = 44;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown9_ValueChanged);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 547);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 54);
			this->button7->TabIndex = 45;
			this->button7->Text = L"alpha-trimmed mean";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(109, 623);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 30);
			this->label13->TabIndex = 46;
			this->label13->Text = L"要上層圖片\r\n都有才可以";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(139, 576);
			this->numericUpDown10->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(68, 25);
			this->numericUpDown10->TabIndex = 47;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(123, 578);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 15);
			this->label14->TabIndex = 48;
			this->label14->Text = L"T";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 625);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 15);
			this->label15->TabIndex = 49;
			this->label15->Text = L"k";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1540, 708);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//開啟檔案對話窗 記得「^」
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->FileName = "";
			//name|format
			ofd->Filter = "All Files(*.*)|*.*";
			ofd->FilterIndex = 1;
			//對話窗回應OK，或是檔名不為空值，表示有資料了
			//開始讀取影像資訊
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
				//讀取影像
				ori_image = gcnew Bitmap(ofd->FileName);

				int width = ori_image->Width;
				int height = ori_image->Height;

				BitmapData^ bdOri = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

				//int byteSkip = bdOri->Stride - width * 3;
				int ySize = bdOri->Stride;

				Byte* oriPtr = (Byte*)(void*)bdOri->Scan0;

				for (int i = 0; i < height; ++i) {
					for (int j = 0; j < width; ++j) {
						Byte* currPtr = oriPtr + i * ySize + j * 3;

						currPtr[0] = currPtr[1] = currPtr[2] = (currPtr[0] * 0.114 + currPtr[1] * 0.587 + currPtr[2] * 0.299);
					}
				}

				//顯示ori_image於pictureBox1
				ori_image->UnlockBits(bdOri);
				pictureBox1->Image = ori_image;
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// gaussian
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		gaussian = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = gaussian->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int std_dev = (int)numericUpDown1->Value;
		int mean = (int)numericUpDown2->Value;

		srand(time(nullptr));

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				double U1 = rand() / (double)RAND_MAX;
				double U2 = rand() / (double)RAND_MAX;
				
				double z = sqrt(-2 * log(U1)) * cos(2 * 3.1415926 * U2);  // Box-Muller
				double n = z * std_dev + mean;

				Byte* out = output_ptr + i * bd_output->Stride + j * 3;
				Byte* ori = ori_ptr + i * bd_ori->Stride + j * 3;

				/*if (n > 127) n = 127;
				else if (n <= -128) n = -128;*/

				// Because ori[0] = ori[1] = ori[2] (轉灰階)
				if (ori[0] + n >= 255)
					out[0] = out[1] = out[2] = 255;
				else if (ori[0] + n <= 0)
					out[0] = out[1] = out[2] = 0;
				else
					out[0] = out[1] = out[2] = ori[0] + n;
			}
		}

		ori_image->UnlockBits(bd_ori);
		gaussian->UnlockBits(bd_output);

		pictureBox2->Image = gaussian;
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		impulse = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = impulse->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int pixelNum = width * height;
		int pepperNum = pixelNum * ((double)numericUpDown3->Value / 100.0);
		int saltNum = pixelNum * ((double)numericUpDown4->Value / 100.0);

		srand(time(nullptr));

		int stride = bd_ori->Stride;

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* ori = ori_ptr + i * stride + j * 3;
				Byte* out = output_ptr + i * stride + j * 3;

				for (int k = 0; k < 3; ++k)
					out[k] = *ori;
			}
		}

		int stateSize = height * width;
		bool* state = new bool[stateSize]();

		// pepper
		for (int i = 0; i < pepperNum; ++i) {
			int x = rand() % width;
			int y = rand() % height;
			
			int pos = y * width + x;
			if (state[pos]) continue;
			state[pos] = true;

			Byte* out = output_ptr + y * stride + x * 3;
			for (int j = 0; j < 3; ++j)
				out[j] = 0;  // 黑色
		}

		// salt
		for (int i = 0; i < saltNum; ++i) {
			int x = rand() % width;
			int y = rand() % height;

			if (state[y * width + x]) continue;

			Byte* out = output_ptr + y * stride + x * 3;
			for (int j = 0; j < 3; ++j)
				out[j] = 255;  // 白色
		}

		delete[] state;
		ori_image->UnlockBits(bd_ori);
		impulse->UnlockBits(bd_output);

		pictureBox3->Image = impulse;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		composite = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = composite->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		srand(time(nullptr));

		int std_dev = (int)numericUpDown6->Value;
		int mean = (int)numericUpDown5->Value;

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				double U1 = rand() / (double)RAND_MAX;
				double U2 = rand() / (double)RAND_MAX;

				double z = sqrt(-2 * log(U1)) * cos(2 * 3.1415926 * U2);  // Box-Muller
				double n = z * std_dev + mean;

				Byte* out = output_ptr + i * bd_output->Stride + j * 3;
				Byte* ori = ori_ptr + i * bd_ori->Stride + j * 3;

				/*if (n > 127) n = 127;
				else if (n <= -128) n = -128;*/

				// Because ori[0] = ori[1] = ori[2] (轉灰階)
				if (ori[0] + n >= 255)
					out[0] = out[1] = out[2] = 255;
				else if (ori[0] + n <= 0)
					out[0] = out[1] = out[2] = 0;
				else
					out[0] = out[1] = out[2] = ori[0] + n;
			}
		}

		int pixelNum = width * height;
		int pepperNum = pixelNum * ((double)numericUpDown8->Value / 100.0);
		int saltNum = pixelNum * ((double)numericUpDown7->Value / 100.0);

		int stride = bd_output->Stride;

		int stateSize = height * width;
		bool* state = new bool[stateSize]();

		// pepper
		for (int i = 0; i < pepperNum; ++i) {
			int x = rand() % width;
			int y = rand() % height;

			int pos = y * width + x;
			if (state[pos]) continue;
			state[pos] = true;

			Byte* out = output_ptr + y * stride + x * 3;
			for (int j = 0; j < 3; ++j)
				out[j] = 0;  // 黑色
		}

		// salt
		for (int i = 0; i < saltNum; ++i) {
			int x = rand() % width;
			int y = rand() % height;

			if (state[y * width + x]) continue;

			Byte* out = output_ptr + y * stride + x * 3;
			for (int j = 0; j < 3; ++j)
				out[j] = 255;  // 白色
		}
		
		delete[] state;
		ori_image->UnlockBits(bd_ori);
		composite->UnlockBits(bd_output);

		pictureBox4->Image = composite;
	}
	private: System::Void numericUpDown9_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!((int)numericUpDown9->Value & 1)) --numericUpDown9->Value;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Low pass
		if (!ori_image || !gaussian || !impulse || !composite) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		Rectangle rect = Rectangle(0, 0, width, height);

		Bitmap^ tempOri = gcnew Bitmap(width, height);
		Bitmap^ tempGau = gcnew Bitmap(width, height);
		Bitmap^ tempImp = gcnew Bitmap(width, height);
		Bitmap^ tempCom = gcnew Bitmap(width, height);

		// 原始資料
		BitmapData^ bd_ori = ori_image->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_gau = gaussian->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_imp = impulse->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_com = composite->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		
		// 新的資料
		BitmapData^ bd_tmpori = tempOri->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpgau = tempGau->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpimp = tempImp->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpcom = tempCom->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);


		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* gaussian_ptr = (Byte*)(void*)bd_gau->Scan0;
		Byte* impulse_ptr = (Byte*)(void*)bd_imp->Scan0;
		Byte* composite_ptr = (Byte*)(void*)bd_com->Scan0;
		
		Byte* tempOri_ptr = (Byte*)(void*)bd_tmpori->Scan0;
		Byte* tempGau_ptr = (Byte*)(void*)bd_tmpgau->Scan0;
		Byte* tempImp_ptr = (Byte*)(void*)bd_tmpimp->Scan0;
		Byte* tempCom_ptr = (Byte*)(void*)bd_tmpcom->Scan0;

		int stride = bd_ori->Stride;

		int k = (int)numericUpDown9->Value;
		
		int size_ = k * k;
		int edge = k / 2;

		for (int i = edge; i < height-edge; ++i) {
			for (int j = edge; j < width-edge; ++j) {
				int sum[4] = {0};
				for (int y = i - edge; y <= i + edge; ++y) {
					for (int x = j - edge; x <= j + edge; ++x) {
						int pos = y * stride + x * 3;
						
						Byte* oriPos = ori_ptr + pos;
						Byte* gauPos = gaussian_ptr + pos;
						Byte* impPos = impulse_ptr + pos;
						Byte* comPos = composite_ptr + pos;
						
						sum[0] += *oriPos;
						sum[1] += *gauPos;
						sum[2] += *impPos;
						sum[3] += *comPos;
					}
				}
				
				int pos = i * stride + j * 3;
				
				Byte* oriPos = tempOri_ptr + pos;
				Byte* gauPos = tempGau_ptr + pos;
				Byte* impPos = tempImp_ptr + pos;
				Byte* comPos = tempCom_ptr + pos;
				for (int z = 0; z < 3; ++z) {
					oriPos[z] = sum[0] / size_;
					gauPos[z] = sum[1] / size_;
					impPos[z] = sum[2] / size_;
					comPos[z] = sum[3] / size_;
				}
			}
		}

		ori_image->UnlockBits(bd_ori);
		gaussian->UnlockBits(bd_gau);
		impulse->UnlockBits(bd_imp);
		composite->UnlockBits(bd_com);
		
		tempOri->UnlockBits(bd_tmpori);
		tempGau->UnlockBits(bd_tmpgau);
		tempImp->UnlockBits(bd_tmpimp);
		tempCom->UnlockBits(bd_tmpcom);

		pictureBox8->Image = tempOri;
		pictureBox7->Image = tempGau;
		pictureBox6->Image = tempImp;
		pictureBox5->Image = tempCom;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Median
		if (!ori_image || !gaussian || !impulse || !composite) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		Rectangle rect = Rectangle(0, 0, width, height);

		Bitmap^ tempOri = gcnew Bitmap(width, height);
		Bitmap^ tempGau = gcnew Bitmap(width, height);
		Bitmap^ tempImp = gcnew Bitmap(width, height);
		Bitmap^ tempCom = gcnew Bitmap(width, height);

		// 原始資料
		BitmapData^ bd_ori = ori_image->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_gau = gaussian->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_imp = impulse->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_com = composite->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);

		// 新的資料
		BitmapData^ bd_tmpori = tempOri->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpgau = tempGau->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpimp = tempImp->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpcom = tempCom->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);


		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* gaussian_ptr = (Byte*)(void*)bd_gau->Scan0;
		Byte* impulse_ptr = (Byte*)(void*)bd_imp->Scan0;
		Byte* composite_ptr = (Byte*)(void*)bd_com->Scan0;

		Byte* tempOri_ptr = (Byte*)(void*)bd_tmpori->Scan0;
		Byte* tempGau_ptr = (Byte*)(void*)bd_tmpgau->Scan0;
		Byte* tempImp_ptr = (Byte*)(void*)bd_tmpimp->Scan0;
		Byte* tempCom_ptr = (Byte*)(void*)bd_tmpcom->Scan0;

		int stride = bd_ori->Stride;

		int k = (int)numericUpDown9->Value;

		int size_ = k * k;
		int edge = k / 2;

		Byte* oriArr = new Byte[size_ + 1]();
		Byte* gauArr = new Byte[size_ + 1]();
		Byte* impArr = new Byte[size_ + 1]();
		Byte* comArr = new Byte[size_ + 1]();
		for (int i = edge; i < height - edge; ++i) {
			for (int j = edge; j < width - edge; ++j) {
				int arrPos = 0;
				for (int y = i - edge; y <= i + edge; ++y) {
					for (int x = j - edge; x <= j + edge; ++x) {
						int pos = y * stride + x * 3;

						Byte* oriPos = ori_ptr + pos;
						Byte* gauPos = gaussian_ptr + pos;
						Byte* impPos = impulse_ptr + pos;
						Byte* comPos = composite_ptr + pos;

						oriArr[arrPos] = *oriPos;
						gauArr[arrPos] = *gauPos;
						impArr[arrPos] = *impPos;
						comArr[arrPos] = *comPos;

						++arrPos;
					}
				}

				std::sort(oriArr, oriArr + size_);
				std::sort(gauArr, gauArr + size_);
				std::sort(impArr, impArr + size_);
				std::sort(comArr, comArr + size_);

				int midPos = size_ / 2;
				int pos = i * stride + j * 3;

				Byte* oriPos = tempOri_ptr + pos;
				Byte* gauPos = tempGau_ptr + pos;
				Byte* impPos = tempImp_ptr + pos;
				Byte* comPos = tempCom_ptr + pos;
				for (int z = 0; z < 3; ++z) {
					oriPos[z] = oriArr[midPos];
					gauPos[z] = gauArr[midPos];
					impPos[z] = impArr[midPos];
					comPos[z] = comArr[midPos];
				}
			}
		}
		delete[] oriArr;
		delete[] gauArr;
		delete[] impArr;
		delete[] comArr;

		ori_image->UnlockBits(bd_ori);
		gaussian->UnlockBits(bd_gau);
		impulse->UnlockBits(bd_imp);
		composite->UnlockBits(bd_com);

		tempOri->UnlockBits(bd_tmpori);
		tempGau->UnlockBits(bd_tmpgau);
		tempImp->UnlockBits(bd_tmpimp);
		tempCom->UnlockBits(bd_tmpcom);

		pictureBox8->Image = tempOri;
		pictureBox7->Image = tempGau;
		pictureBox6->Image = tempImp;
		pictureBox5->Image = tempCom;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Alpha-trimmed mean
		if (!ori_image || !gaussian || !impulse || !composite) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		Rectangle rect = Rectangle(0, 0, width, height);

		Bitmap^ tempOri = gcnew Bitmap(width, height);
		Bitmap^ tempGau = gcnew Bitmap(width, height);
		Bitmap^ tempImp = gcnew Bitmap(width, height);
		Bitmap^ tempCom = gcnew Bitmap(width, height);

		// 原始資料
		BitmapData^ bd_ori = ori_image->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_gau = gaussian->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_imp = impulse->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_com = composite->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);

		// 新的資料
		BitmapData^ bd_tmpori = tempOri->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpgau = tempGau->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpimp = tempImp->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_tmpcom = tempCom->LockBits(rect, ImageLockMode::ReadWrite, ori_image->PixelFormat);


		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* gaussian_ptr = (Byte*)(void*)bd_gau->Scan0;
		Byte* impulse_ptr = (Byte*)(void*)bd_imp->Scan0;
		Byte* composite_ptr = (Byte*)(void*)bd_com->Scan0;

		Byte* tempOri_ptr = (Byte*)(void*)bd_tmpori->Scan0;
		Byte* tempGau_ptr = (Byte*)(void*)bd_tmpgau->Scan0;
		Byte* tempImp_ptr = (Byte*)(void*)bd_tmpimp->Scan0;
		Byte* tempCom_ptr = (Byte*)(void*)bd_tmpcom->Scan0;

		int stride = bd_ori->Stride;

		int k = (int)numericUpDown9->Value;
		int t = (int)numericUpDown10->Value;

		int size_ = k * k;
		int edge = k / 2;

		Byte* oriArr = new Byte[size_ + 1]();
		Byte* gauArr = new Byte[size_ + 1]();
		Byte* impArr = new Byte[size_ + 1]();
		Byte* comArr = new Byte[size_ + 1]();
		for (int i = edge; i < height - edge; ++i) {
			for (int j = edge; j < width - edge; ++j) {
				int arrPos = 0;
				for (int y = i - edge; y <= i + edge; ++y) {
					for (int x = j - edge; x <= j + edge; ++x) {
						int pos = y * stride + x * 3;

						Byte* oriPos = ori_ptr + pos;
						Byte* gauPos = gaussian_ptr + pos;
						Byte* impPos = impulse_ptr + pos;
						Byte* comPos = composite_ptr + pos;

						oriArr[arrPos] = *oriPos;
						gauArr[arrPos] = *gauPos;
						impArr[arrPos] = *impPos;
						comArr[arrPos] = *comPos;

						++arrPos;
					}
				}

				std::sort(oriArr, oriArr + size_);
				std::sort(gauArr, gauArr + size_);
				std::sort(impArr, impArr + size_);
				std::sort(comArr, comArr + size_);

				int sum[4] = {0};
				for (int z = t; z < size_ - t; ++z) {
					sum[0] += oriArr[z];
					sum[1] += gauArr[z];
					sum[2] += impArr[z];
					sum[3] += comArr[z];
				}

				int pos = i * stride + j * 3;
				int tempSize = size_ - t * 2;

				Byte* oriPos = tempOri_ptr + pos;
				Byte* gauPos = tempGau_ptr + pos;
				Byte* impPos = tempImp_ptr + pos;
				Byte* comPos = tempCom_ptr + pos;
				for (int z = 0; z < 3; ++z) {
					oriPos[z] = sum[0] / tempSize;
					gauPos[z] = sum[1] / tempSize;
					impPos[z] = sum[2] / tempSize;
					comPos[z] = sum[3] / tempSize;
				}
			}
		}
		delete[] oriArr;
		delete[] gauArr;
		delete[] impArr;
		delete[] comArr;

		ori_image->UnlockBits(bd_ori);
		gaussian->UnlockBits(bd_gau);
		impulse->UnlockBits(bd_imp);
		composite->UnlockBits(bd_com);

		tempOri->UnlockBits(bd_tmpori);
		tempGau->UnlockBits(bd_tmpgau);
		tempImp->UnlockBits(bd_tmpimp);
		tempCom->UnlockBits(bd_tmpcom);

		pictureBox8->Image = tempOri;
		pictureBox7->Image = tempGau;
		pictureBox6->Image = tempImp;
		pictureBox5->Image = tempCom;
	}
};
}