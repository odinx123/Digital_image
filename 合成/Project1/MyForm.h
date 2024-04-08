#pragma once

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
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::PictureBox^ pictureBox3;

		Bitmap^ ori_image1;
		Bitmap^ ori_image2;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;



		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;


		private: System::Windows::Forms::TrackBar^ trackBar1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 99);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(344, 265);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(415, 99);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(326, 265);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(793, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(793, 99);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(316, 265);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 396);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"m";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 433);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"n";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(51, 392);
			this->trackBar1->Maximum = 9;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 56);
			this->trackBar1->TabIndex = 13;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 396);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 15);
			this->label3->TabIndex = 17;
			this->label3->Text = L"0.1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 15);
			this->label4->TabIndex = 18;
			this->label4->Text = L"0.9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1563, 677);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
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
				ori_image1 = gcnew Bitmap(ofd->FileName);
				//顯示ori_image1於pictureBox1
				pictureBox1->Image = ori_image1;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
				ori_image2 = gcnew Bitmap(ofd->FileName);
				//顯示ori_image1於pictureBox1
				pictureBox2->Image = ori_image2;
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			//若沒開啟影像，則離開this process
			if (ori_image1 == nullptr || ori_image2 == nullptr) {
				//return nothing because function System::Void 回傳Void
				return;
			}
			Bitmap^ output = gcnew Bitmap(ori_image1->Width, ori_image1->Height, ori_image1->PixelFormat);
			//BitmapData 需要加入 namespace
			//Lock Memory
			BitmapData^ bd_ori1 = ori_image1->LockBits(Rectangle(0, 0, ori_image1->Width, ori_image1->Height), ImageLockMode::ReadWrite, ori_image1->PixelFormat);
			BitmapData^ bd_ori2 = ori_image2->LockBits(Rectangle(0, 0, ori_image1->Width, ori_image1->Height), ImageLockMode::ReadWrite, ori_image1->PixelFormat);
			BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

			//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
			int ori_byteskip1 = bd_ori1->Stride - bd_ori1->Width * 3;
			int ori_byteskip2 = bd_ori2->Stride - bd_ori2->Width * 3;
			int output_byteskip = bd_output->Stride - bd_output->Width * 3;

			//設定指標再開始的位置
			Byte* ori_ptr1 = (Byte*)((void*)bd_ori1->Scan0);
			Byte* ori_ptr2 = (Byte*)((void*)bd_ori2->Scan0);
			Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

			// image1的圖像改灰階
			for (int y = 0; y < bd_ori1->Height; y++) {
				for (int x = 0; x < bd_ori1->Width; x++) {
					int B = (int)ori_ptr1[0];
					int G = (int)ori_ptr1[1];
					int R = (int)ori_ptr1[2];

					int gray = (R + G + B) / 3;

					//將處理完的結果放回output
					ori_ptr1[0] = gray;
					ori_ptr1[1] = gray;
					ori_ptr1[2] = gray;

					//跳到下一像素
					ori_ptr1 += 3;
				}
				//捨棄非必要資訊
				ori_ptr1 += ori_byteskip1;
			}

			// image2的圖像改灰階
			for (int y = 0; y < bd_ori1->Height; ++y) {
				for (int x = 0; x < bd_ori2->Width; ++x) {
					int B = (int)ori_ptr2[0];
					int G = (int)ori_ptr2[1];
					int R = (int)ori_ptr2[2];

					int gray = (R + G + B) / 3;

					ori_ptr2[0] = gray;
					ori_ptr2[1] = gray;
					ori_ptr2[2] = gray;

					ori_ptr2 += 3;
				}

				ori_ptr2 += ori_byteskip2;
			}

			/*double m = Double::Parse(textBox1->Text);
			double n = Double::Parse(textBox2->Text);*/
			double m = static_cast<double>(trackBar1->Value) / 10.0;
			double n = 1 - m;

			//std::cout << "M: " << m << " n:" << n << std::endl;
			ori_ptr1 = (Byte*)((void*)bd_ori1->Scan0);
			ori_ptr2 = (Byte*)((void*)bd_ori2->Scan0);


			for (int i = 0; i < bd_output->Height; ++i) {
				for (int j = 0; j < bd_output->Width; ++j) {
					int gray1 = (int)ori_ptr1[0];
					int gray2 = (int)ori_ptr2[0];

					auto F = gray1 * m + gray2 * n;
					
					output_ptr[0] = F;
					output_ptr[1] = F;
					output_ptr[2] = F;

					ori_ptr1 += 3;
					ori_ptr2 += 3;
					output_ptr += 3;
				}

				ori_ptr1 += ori_byteskip1;
				ori_ptr2 += ori_byteskip2;
				output_ptr += output_byteskip;
			}

			//Unlock Memory 以便顯示
			ori_image1->UnlockBits(bd_ori1);
			ori_image2->UnlockBits(bd_ori2);
			output->UnlockBits(bd_output);
			//顯示pictureBox
			pictureBox1->Image = ori_image1;
			pictureBox2->Image = ori_image2;
			pictureBox3->Image = output;
		}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		double value = static_cast<double>(trackBar1->Value) / 10.0;

		label3->Text = value.ToString();
		label4->Text = (1 - value).ToString();
	}
};
}
