#pragma once

#include <iostream>
#include <cmath>

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
			String^ temp = round((double)numericUpDown1->Value).ToString();
			this->label1->Text = temp + " x " + temp;
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
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::PictureBox^ pictureBox4;
			   Bitmap^ ori_image;

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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 13);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(373, 131);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(374, 488);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(733, 13);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"全部均衡化";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(766, 153);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(381, 447);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1134, 29);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 80);
			this->button3->TabIndex = 4;
			this->button3->Text = L"局部均衡化";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1155, 141);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(383, 469);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1339, 29);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 35, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(160, 25);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1336, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 15);
			this->label1->TabIndex = 7;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(4, 131);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(361, 488);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1723, 726);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
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

				Bitmap^ RGB = gcnew Bitmap(ori_image);

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
				pictureBox4->Image = RGB;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!ori_image) return;

			int width = ori_image->Width;
			int height = ori_image->Height;

			Bitmap^ output = gcnew Bitmap(width, height, ori_image->PixelFormat);

			BitmapData^ bdOri = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
			BitmapData^ bdOut = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, output->PixelFormat);

			int ySize = bdOri->Stride;

			Byte* outPtr = (Byte*)(void*)bdOut->Scan0;
			Byte* oriPtr = (Byte*)(void*)bdOri->Scan0;

			int grayLevelNum[256] = {0};

			int total = height * width;

			// sum of every gray Level.
			for (int i = 0; i < height; ++i) {
				for (int j = 0; j < width; ++j) {
					Byte* currOri = oriPtr + i * ySize + j * 3;
					
					++grayLevelNum[(int)currOri[0]];
				}
			}

			for (int i = 1; i < 256; ++i)
				grayLevelNum[i] += grayLevelNum[i - 1];

			for (int i = 0; i < height; ++i) {
				for (int j = 0; j < width; ++j) {
					Byte* currOri = oriPtr + i * ySize + j * 3;
					Byte* currOut = outPtr + i * ySize + j * 3;

					currOut[0] = currOut[1] = currOut[2] = round(255 * grayLevelNum[(int)currOri[0]] / total);
				}
			}

			ori_image->UnlockBits(bdOri);
			output->UnlockBits(bdOut);

			pictureBox2->Image = output;
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!ori_image) return;
		
		int width = ori_image->Width;
		int height = ori_image->Height;

		Bitmap^ output = gcnew Bitmap(width, height, ori_image->PixelFormat);

		BitmapData^ bdOri = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bdOut = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, output->PixelFormat);

		int ySize = bdOri->Stride;

		Byte* outPtr = (Byte*)(void*)bdOut->Scan0;
		Byte* oriPtr = (Byte*)(void*)bdOri->Scan0;


		int val = round((double)numericUpDown1->Value);
		int total = val * val;

		int leftBorder = val / 2 - 1 + (val & 1);
		int rightBorder = val / 2;

		for (int y = 0; y < height; ++y) {
			for (int x = 0; x < width; ++x) {
				if (y - leftBorder < 0 || y + rightBorder >= height) break;
				if (x - leftBorder < 0 || x + rightBorder >= width) continue;

				// sum of every gray Level.
				int grayLevelNum[256] = {0};
				for (int i = y-leftBorder; i <= y+rightBorder; ++i) {
					for (int j = x-leftBorder; j <= x+rightBorder; ++j) {
						Byte* currOri = oriPtr + i * ySize + j * 3;

						++grayLevelNum[(int)currOri[0]];
					}
				}

				for (int i = 1; i < 256; ++i)
					grayLevelNum[i] += grayLevelNum[i - 1];

				Byte* currOut = outPtr + y * ySize + x * 3;
				Byte* currOri = oriPtr + y * ySize + x * 3;

				currOut[0] = currOut[1] = currOut[2] = round(255 * grayLevelNum[(int)currOri[0]] / total);
			}
		}

		ori_image->UnlockBits(bdOri);
		output->UnlockBits(bdOut);

		pictureBox3->Image = output;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ temp = round((double)numericUpDown1->Value).ToString();
		label1->Text = temp + " x " + temp;
	}
};
}
