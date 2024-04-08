#pragma once

#include <cmath>
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
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			this->pictureBox1->Size = System::Drawing::Size(665, 555);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(733, 37);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"DWT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(733, 88);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(665, 555);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(863, 52);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(863, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"passes";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(1011, 57);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 19);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"要不要畫白線";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 758);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox2);
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
	void dwt(Byte* image_in, Byte* image_out, int height, int width, int stride) {
		int* ans = new int[height * width]();
		for (int i = 0; i < height; ++i) {
			for (int j = 1; j < width; j += 2) {
				Byte* curOri = image_in + i * stride + j * 3;
				ans[i * width + j / 2] = round((*(curOri - 3) + *curOri) / 2);
				ans[i * width + (width / 2 + j / 2)] = *(curOri - 3) - ans[i * width + j / 2];
			}
		}

		for (int j = 0; j < width; ++j) {
			int* h = new int[height / 2]();
			for (int i = 1; i < height; i += 2) {
				int oriN = ans[(i - 1) * width + j];
				ans[i / 2 * width + j] = round((ans[(i - 1) * width + j] + ans[i * width + j]) / 2.0);
				h[i / 2] = oriN - ans[i / 2 * width + j];
			}
			for (int i = 0; i < height / 2; ++i)
				ans[(height / 2 + i) * width + j] = h[i];
			delete[] h;
		}

		bool state = checkBox1->Checked;  // 取得checkBox1的boolean值
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* curOut = image_out + i * stride + j * 3;
				int temp = ans[i * width + j];
				
				if (i >= height / 2 || j >= width / 2) {
					temp += 80;
					temp = temp <= 0 ? 0 : temp;
					temp = temp >= 255 ? 255 : temp;
				}

				if (state && (i == height / 2 || j == width / 2))  // 只是為了更好觀察(白線)
					temp = 255;
				
				for (int k = 0; k < 3; ++k)
					curOut[k] = temp;
			}
		}
		delete[] ans;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// DWT
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		Bitmap^ output = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_ori->Stride;

		/*int* ans = new int[height * width]();
		for (int i = 0; i < height; ++i) {
			for (int j = 1; j < width; j += 2) {
				Byte* curOri = ori_ptr + i * stride + j * 3;
				ans[i * width + j / 2] = round( ( *(curOri - 3) + *curOri ) / 2 );
				ans[i * width + (width / 2 + j / 2)] = *(curOri - 3) - ans[i * width + j / 2];
			}
		}

		for (int j = 0; j < width; ++j) {
			int* h = new int[height / 2]();
			for (int i = 1; i < height; i += 2) {
				int oriN = ans[(i - 1) * width + j];
				ans[i / 2 * width + j] = round((ans[(i-1) * width + j] + ans[i*width + j]) / 2.0);
				h[i / 2] = oriN - ans[i / 2 * width + j];
			}
			for (int i = 0; i < height / 2; ++i)
				ans[(height / 2 + i) * width + j] = h[i];
			delete[] h;
		}

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* curOut = output_ptr + i * stride + j * 3;
				int temp = ans[i * width + j];
				if (i >= height / 2 || j >= width / 2) {
					temp += 80;
					temp = temp <= 0 ? 0 : temp;
					temp = temp >= 255 ? 255 : temp;
				}
				for (int k = 0; k < 3; ++k)
					curOut[k] = temp;
			}
		}
		delete[] ans;*/

		// 先複製一份給output
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* curOri = ori_ptr + i * stride + j * 3;
				Byte* curOut = output_ptr + i * stride + j * 3;

				for (int k = 0; k < 3; ++k)
					curOut[k] = *curOri;
			}
		}

		int passes = (int)numericUpDown1->Value;
		for (int i = 0, exp = 1; i < passes; ++i, exp*=2)
			dwt(output_ptr, output_ptr, height/exp, width/exp, stride);

		ori_image->UnlockBits(bd_ori);
		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
};
}