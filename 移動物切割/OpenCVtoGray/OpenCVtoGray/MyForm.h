#pragma once
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <vector>


namespace OpenCVtoGray {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;

	cv::VideoCapture vc;
	cv::Mat input;
	cv::Mat output;
	cv::Mat prev;
	cv::Mat first;

	long frame_counts;
	double fps;
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
	private:Bitmap ^gray;



		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::ComboBox^ comboBox1;

		private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		private: System::Windows::Forms::Label^ label1;
			   ColorPalette^ cp;
#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
			 /// 這個方法的內容。
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(16, 15);
				 this->button1->Margin = System::Windows::Forms::Padding(4);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(100, 29);
				 this->button1->TabIndex = 0;
				 this->button1->Text = L"Open";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(13, 65);
				 this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(667, 592);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox1->TabIndex = 1;
				 this->pictureBox1->TabStop = false;
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(124, 15);
				 this->button2->Margin = System::Windows::Forms::Padding(4);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(100, 29);
				 this->button2->TabIndex = 2;
				 this->button2->Text = L"Start";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // timer1
				 // 
				 this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->Location = System::Drawing::Point(688, 65);
				 this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(667, 592);
				 this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox2->TabIndex = 6;
				 this->pictureBox2->TabStop = false;
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"背景相減法", L"相鄰相減法" });
				 this->comboBox1->Location = System::Drawing::Point(248, 19);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(121, 23);
				 this->comboBox1->TabIndex = 7;
				 this->comboBox1->SelectedIndex = 0;
				 // 
				 // numericUpDown1
				 // 
				 this->numericUpDown1->Location = System::Drawing::Point(433, 19);
				 this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
				 this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
				 this->numericUpDown1->Name = L"numericUpDown1";
				 this->numericUpDown1->Size = System::Drawing::Size(120, 25);
				 this->numericUpDown1->TabIndex = 9;
				 this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(375, 22);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(52, 15);
				 this->label1->TabIndex = 10;
				 this->label1->Text = L"臨界值";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1438, 670);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->numericUpDown1);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->pictureBox2);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->button1);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button2->Text == "Start") {
			timer1->Enabled = true;
			button2->Text = "Stop";
		}
		else {
			timer1->Enabled = false;
			button2->Text = "Start";
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->FileName = "";
		openFileDialog1->Filter = "所有檔案(*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName != "") {
			const char *sc = (char*)((void*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(openFileDialog1->FileName).ToPointer()));
			std::string s = sc;
			vc = cv::VideoCapture(s);
			fps = vc.get(cv::CAP_PROP_FPS);
			frame_counts = vc.get(cv::CAP_PROP_FRAME_COUNT);  // 總共幀數
			timer1->Interval = 1000.0 / fps;  // 這是Timer元件的屬性，表示兩次定時器事件之間的間隔時間。(ms)
			vc >> first;
			prev = first.clone();
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		long pos_now = vc.get(cv::CAP_PROP_POS_FRAMES);
		if (pos_now >= frame_counts - 1) {
			button2_Click(nullptr, nullptr);
			vc.set(cv::CAP_PROP_POS_FRAMES, 0);  // 將幀數位置設為0
		}
		vc >> input;  // current image

		String^ txt = comboBox1->Text;
		cv::Mat currTemp, prevTemp;
		prevTemp = prev.clone();
		currTemp = input.clone();

		// 算法
		int thold = (int)numericUpDown1->Value;

		int height = input.rows;
		int width = input.cols;

		uchar* cdata = currTemp.data;
		uchar* pdata = prevTemp.data;
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				uchar* ctdata = cdata + i * width * 3 + j * 3;
				uchar* ptdata = pdata + i * width * 3 + j * 3;

				for (int k = 0; k < 3; ++k) {
					int t = abs(ctdata[k] - ptdata[k]);
					if (t < thold) t = 0;
					else t = INT_MAX;
					ctdata[k] = (int)ctdata[k] & t;
				}
			}
		}

		if (txt == "相鄰相減法") {
			prev = input.clone();  // 將prev變成現在這幀
		}
		else {
			prev = first.clone();  // 將prev變成第一幀
		}

		output = currTemp.clone();
		pictureBox1->Image = MatToBitmap(input);
		pictureBox2->Image = MatToBitmap(output);

		/*pictureBox1->Image = MatToBitmap(input);
		pictureBox2->Image = MatToBitmap(currTemp);*/
	}
	private: void ToGray(cv::Mat input, cv::Mat &output) {
		if (input.channels() == 1) {
			output = input.clone();
		}
		// BGR
		cv::Mat process = cv::Mat(input.rows,input.cols,CV_8UC1);
		uchar* idata = input.data;
		uchar* pdata = process.data;
		for (int y = 0; y < input.rows; y++) {
			for (int x = 0; x < input.cols; x++) {
				int pixel = 0.114 * idata[0] + 0.587*idata[1] + 0.299*idata[2];
				pdata[0] = (uchar)pixel;
				idata += 3;
				pdata += 1;
			}
		}
		
		output = process.clone();
	}
	private:Bitmap ^MatToBitmap(cv::Mat mat) {
		if (mat.empty()) return nullptr;
		if (mat.channels() == 3) {
			return gcnew Bitmap(mat.cols, mat.rows, mat.step, PixelFormat::Format24bppRgb, (IntPtr)mat.data);
		}
		else {
			Bitmap ^ b = gcnew Bitmap(mat.cols, mat.rows, mat.step, PixelFormat::Format8bppIndexed, (IntPtr)mat.data);;
			b->Palette = cp;
			return b;
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		gray = gcnew Bitmap(1, 1, PixelFormat::Format8bppIndexed);
		cp = gray->Palette;
		for (int i = 0; i < 256; i++) {
			cp->Entries[i] = Color::FromArgb(i, i, i);
		}
	}
};
}
