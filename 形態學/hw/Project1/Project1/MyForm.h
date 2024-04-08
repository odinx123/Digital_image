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

		Bitmap^ ori_image;
		Bitmap^ output;

		private: System::Windows::Forms::Button^ button3;


		private: System::Windows::Forms::Button^ button6;

		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button5;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 36);
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
			this->pictureBox1->Location = System::Drawing::Point(40, 88);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(694, 604);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(916, 9);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 75);
			this->button2->TabIndex = 2;
			this->button2->Text = L"dilation";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1172, 11);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 73);
			this->button3->TabIndex = 14;
			this->button3->Text = L"opening";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1261, 11);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 73);
			this->button6->TabIndex = 34;
			this->button6->Text = L"closing";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1014, 10);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 75);
			this->button5->TabIndex = 36;
			this->button5->Text = L"erosion";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(740, 88);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(694, 604);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 37;
			this->pictureBox2->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(776, 52);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 38;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(773, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 15);
			this->label1->TabIndex = 39;
			this->label1->Text = L"結構元素大小";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(171, 36);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 48);
			this->button4->TabIndex = 40;
			this->button4->Text = L"reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 758);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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
				output = gcnew Bitmap(width, height);

				BitmapData^ bdOri = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
				BitmapData^ bdout = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

				//int byteSkip = bdOri->Stride - width * 3;
				int ySize = bdOri->Stride;

				Byte* oriPtr = (Byte*)(void*)bdOri->Scan0;
				Byte* outPtr = (Byte*)(void*)bdout->Scan0;

				for (int i = 0; i < height; ++i) {
					for (int j = 0; j < width; ++j) {
						Byte* currPtr = oriPtr + i * ySize + j * 3;
						Byte* currOut = outPtr + i * ySize + j * 3;

						for (int k = 0; k < 3; ++k)
							currOut[k] = currPtr[k] = (currPtr[0] * 0.114 + currPtr[1] * 0.587 + currPtr[2] * 0.299);
					}
				}

				output->UnlockBits(bdout);
				//顯示ori_image於pictureBox1
				ori_image->UnlockBits(bdOri);
				pictureBox1->Image = ori_image;
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// dilation
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_output->Stride;

		dilation(output_ptr, output_ptr, height, width, stride);

		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// opening
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_output->Stride;

		erosion(output_ptr, output_ptr, height, width, stride);
		dilation(output_ptr, output_ptr, height, width, stride);

		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// erosion
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_output->Stride;

		erosion(output_ptr, output_ptr, height, width, stride);

		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// closing
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_output->Stride;

		dilation(output_ptr, output_ptr, height, width, stride);
		erosion(output_ptr, output_ptr, height, width, stride);

		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int n = (int)numericUpDown1->Value;
		if (n < 0) numericUpDown1->Value = 0;
		else if (!(n & 1)) numericUpDown1->Value = n + 1;
	}

	void dilation(Byte* ori_ptr, Byte* output_ptr, int height, int width, int stride) {
		int n = (int)numericUpDown1->Value;
		int b = n / 2;

		int** temp = new int* [height];
		for (int i = 0; i < height; ++i)
			temp[i] = new int[width]();


		for (int i = b; i < height - b; ++i) {
			for (int j = b; j < width - b; ++j) {
				//Byte* out = output_ptr + i * stride + j * 3;
				int update = 0;  // 不會有255變0的情況，所以給0就好

				for (int y = 0; y < n; ++y) {
					for (int x = 0; x < n; ++x) {
						Byte* ori = ori_ptr + (i + y - b) * stride + (j + x - b) * 3;
						if (*ori != 0)
							update = 255;
					}
				}

				for (int k = 0; k < 3; ++k)
					temp[i][j] = update;
			}
		}

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* out = output_ptr + i * stride + j * 3;

				for (int k = 0; k < 3; ++k)
					out[k] = temp[i][j];
			}
		}

		for (int i = 0; i < height; ++i)
			delete[] temp[i];

		delete[] temp;
	}

	void erosion(Byte* ori_ptr, Byte* output_ptr, int height, int width, int stride) {
		int n = (int)numericUpDown1->Value;
		int b = n / 2;

		int** temp = new int* [height];
		for (int i = 0; i < height; ++i)
			temp[i] = new int[width]();

		for (int i = b; i < height - b; ++i) {
			for (int j = b; j < width - b; ++j) {
				Byte* out = output_ptr + i * stride + j * 3;
				int update = 255;

				for (int y = 0; y < n; ++y) {
					for (int x = 0; x < n; ++x) {
						Byte* ori = ori_ptr + (i + y - b) * stride + (j + x - b) * 3;
						if (*ori == 0)
							update = 0;
					}
				}

				for (int k = 0; k < 3; ++k)
					temp[i][j] = update;
			}
		}

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* out = output_ptr + i * stride + j * 3;

				for (int k = 0; k < 3; ++k)
					out[k] = temp[i][j];
			}
		}

		for (int i = 0; i < height; ++i)
			delete[] temp[i];

		delete[] temp;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// dilation
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;
		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;

		int stride = bd_output->Stride;

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* ori = ori_ptr + i * stride + j * 3;
				Byte* out = output_ptr + i * stride + j * 3;

				for (int k = 0; k < 3; ++k)
					out[k] = ori[k];
			}
		}

		output->UnlockBits(bd_output);
		ori_image->UnlockBits(bd_ori);

		pictureBox2->Image = output;
	}
};
}