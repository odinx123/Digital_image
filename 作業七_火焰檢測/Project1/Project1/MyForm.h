#pragma once

#include <cmath>
#include <iostream>

#define min(a, b) ((a) <= (b) ? (a) : (b))

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->button2->Text = L"火焰偵測";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 758);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

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

				/*int width = ori_image->Width;
				int height = ori_image->Height;

				BitmapData^ bdOri = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

				int byteSkip = bdOri->Stride - width * 3;
				int ySize = bdOri->Stride;

				Byte* oriPtr = (Byte*)(void*)bdOri->Scan0;

				for (int i = 0; i < height; ++i) {
					for (int j = 0; j < width; ++j) {
						Byte* currPtr = oriPtr + i * ySize + j * 3;

						currPtr[0] = currPtr[1] = currPtr[2] = (currPtr[0] * 0.114 + currPtr[1] * 0.587 + currPtr[2] * 0.299);
					}
				}*/

				//顯示ori_image於pictureBox1
				//ori_image->UnlockBits(bdOri);
				pictureBox1->Image = ori_image;
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// 火焰偵測
		if (ori_image == nullptr) return;

		int width = ori_image->Width;
		int height = ori_image->Height;

		Bitmap^ output = gcnew Bitmap(width, height);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);

		Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
		Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;

		int stride = bd_ori->Stride;

		bool light = true;   // true 是較暗環境

		int sum = 0;
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* curOri = ori_ptr + i * stride + j * 3;

				int num = (curOri[0] + curOri[1] + curOri[2]) / 3;
				if (num < 128)
					++sum;
			}
		}

		light = sum >= (height * width) * 0.8;    // 8成以上就是較暗環境
		std::cout << sum << " " << (height * width) * 0.8 << "\n";

		const int r_m = 217;  // red mean(火焰圖的紅色)
		const int it = 205;  // 亮度閥值
		
		// RGB fire dectect
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				Byte* curOri = ori_ptr + i * stride + j * 3;
				Byte* curOut = output_ptr + i * stride + j * 3;

				int R = curOri[2];
				int G = curOri[1];
				int B = curOri[0];

				double S = (R + G + B != 0 ? 1 - (3.0 / (R + G + B) * min(min(R, G), B)) : 0);
				double I = 1.0 / 3.0 * (R + G + B);

				bool RGBState = R > r_m && R >= curOri[1] && curOri[1] >= curOri[0];
				// 使用RGB加上HSI來判斷火焰
				// 同時顏色飽和較低也就是偏白色(被稀釋的飽和度)的都不要
				// 最後如果亮度較暗的環境就將亮度超過某個閥值的都算是火焰(如果是較亮的環境可能會有很多背景色亮度很高)
				if (RGBState && S >= 0.1 || (light && I > it)) {
					for (int k = 0; k < 3; ++k)
						curOut[k] = curOri[k];
				}
			}
		}

		ori_image->UnlockBits(bd_ori);
		output->UnlockBits(bd_output);

		pictureBox2->Image = output;
	}
};
}