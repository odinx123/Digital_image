#pragma once

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

		private: System::Windows::Forms::Label^ label1;





		private: System::Windows::Forms::Button^ button3;








		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
















		Bitmap^ ori_image;
		Bitmap^ gaussian;
		Bitmap^ impulse;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Label^ label2;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 36);
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
			this->pictureBox1->Location = System::Drawing::Point(47, 91);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 286);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(301, 36);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Spatial high-pass";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(444, 36);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 25);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(384, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"mask";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(558, 11);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 75);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Spatial high-boost filter with 3x3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(302, 90);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(253, 286);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(560, 90);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(253, 286);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(696, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 31;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(648, 39);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 15);
			this->label2->TabIndex = 32;
			this->label2->Text = L"A";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 490);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
		// Hight pass
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		gaussian = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = gaussian->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_ori->Stride;

		int mask = (int)numericUpDown1->Value;
		int size_ = mask * mask;
		int edge = mask / 2;

		for (int i = edge; i < height - edge; ++i) {
			for (int j = edge; j < width - edge; ++j) {
				int sum = 0;
				int cnt = 0;

				for (int y = i - edge; y <= i + edge; ++y) {
					for (int x = j - edge; x <= j + edge; ++x) {
						Byte* curOri = ori_ptr + y * stride + x * 3;

						if (cnt++ == size_ / 2)
							sum += (int)curOri[0] * (size_ - 1);
						else
							sum += (int)curOri[0] * (-1);
					}
				}

				sum /= size_;

				sum = sum < 0 ? 0 : sum;
				sum = sum > 255 ? 255 : sum;

				Byte* curOut = output_ptr + i * stride + j * 3;
				for (int z = 0; z < 3; ++z)
					curOut[z] = sum;
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
		int A = Convert::ToDouble(textBox1->Text);
		const int mask = 3;
		const int edge = mask / 2;
		const int size_ = mask * mask;

		int stride = bd_ori->Stride;

		for (int i = edge; i < height - edge; ++i) {
			for (int j = edge; j < width - edge; ++j) {
				int sum = 0;
				int cnt = 0;

				for (int y = i - edge; y <= i + edge; ++y) {
					for (int x = j - edge; x <= j + edge; ++x) {
						Byte* curOri = ori_ptr + y * stride + x * 3;

						if (cnt++ == size_ / 2)
							sum += (int)curOri[0] * (A - 1 + size_ - 1);
						else
							sum += (int)curOri[0] * (-1);
					}
				}

				sum = sum <= 0 ? 0 : sum;
				sum = sum >= 255 ? 255 : sum;

				Byte* curOut = output_ptr + i * stride + j * 3;
				for (int z = 0; z < 3; ++z)
					curOut[z] = sum;
			}
		}

		ori_image->UnlockBits(bd_ori);
		impulse->UnlockBits(bd_output);

		pictureBox3->Image = impulse;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!((int)numericUpDown1->Value & 1)) --numericUpDown1->Value;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0 && textBox1->Text[0] == '-') textBox1->Text = L"0";
	}
};
}