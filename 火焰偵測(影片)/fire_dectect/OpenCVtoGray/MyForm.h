#pragma once
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <vector>
#include <cmath>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(min(a, b), c)

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
	cv::Mat output2;

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
			srand(time(nullptr));
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
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::TrackBar^ trackBar1;
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
				 this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				 this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
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
				 this->pictureBox1->Size = System::Drawing::Size(453, 399);
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
				 this->pictureBox2->Location = System::Drawing::Point(492, 65);
				 this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(453, 399);
				 this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox2->TabIndex = 11;
				 this->pictureBox2->TabStop = false;
				 // 
				 // pictureBox3
				 // 
				 this->pictureBox3->Location = System::Drawing::Point(972, 65);
				 this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
				 this->pictureBox3->Name = L"pictureBox3";
				 this->pictureBox3->Size = System::Drawing::Size(453, 399);
				 this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox3->TabIndex = 12;
				 this->pictureBox3->TabStop = false;
				 // 
				 // trackBar1
				 // 
				 this->trackBar1->Location = System::Drawing::Point(181, 529);
				 this->trackBar1->Maximum = 100;
				 this->trackBar1->Name = L"trackBar1";
				 this->trackBar1->Size = System::Drawing::Size(616, 56);
				 this->trackBar1->TabIndex = 13;
				 this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1438, 670);
				 this->Controls->Add(this->trackBar1);
				 this->Controls->Add(this->pictureBox3);
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
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
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
			//vc >> input;
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		long pos_now = vc.get(cv::CAP_PROP_POS_FRAMES);
		if (pos_now >= frame_counts - 1) {
			button2_Click(nullptr, nullptr);
			vc.set(cv::CAP_PROP_POS_FRAMES, 0);  // 將幀數位置設為0
		}
		vc >> input;  // current image
		trackBar1->Value = (pos_now + 1.0) / frame_counts * trackBar1->Maximum;

		int height = input.rows;
		int width = input.cols;
		//output = cv::Mat(height, width, CV_8UC3);
		output = input.clone();
		output2 = input.clone();
		
		// 算法
		uchar* idata = input.data;
		uchar* odata = output.data;

		const int r_t = 115;  // 115 ~ 135
		const int s_t = 65;  // 55 ~ 65
		const int i_t = 215;  // 205 ~ 215

		// the detection condition of flame’s colors is defined as R >= G > B
		// it is reasonable to assume that the color of general flames belongs to the red-yellow section
		// the saturation of flame will change with various background illuminations that the saturation obtained during the day is larger than that of during the night
		// The reason is that the flame in the night will become the major and only illumination source if there is no other background illumination.

		bool dark = true;   // true 是較暗環境

		int sum = 0;
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				uchar* itdata = idata + i * width * 3 + j * 3;

				int num = (itdata[0] + itdata[1] + itdata[2]) / 3;
				if (num < 128)
					++sum;
			}
		}

		dark = sum >= (height * width) * 0.8;    // 8成以上就是較暗環境

		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				uchar* itdata = idata + i * width * 3 + j * 3;
				uchar* otdata = odata + i * width * 3 + j * 3;

				int r = itdata[2];
				int g = itdata[1];
				int b = itdata[0];
				
				double H = 0, S = 0, I = 0;
				bgrToHSI(itdata, H, S, I);
				// HSI
				/*if (!(H >= 0 && H <= 60 && ((S * 255 >= 30 || (dark && S*255 >= 20)) && S*255 <= 100) && I*255 >= 127 && I*255 <= 255)) {
					for (int k = 0; k < 3; ++k)
						otdata[k] = 0;
				}*/

				// HSV
				/*double h = 0, s = 0, v = 0;
				bgrToHSV(itdata, h, s, v);
				if (!((h <= 30 && h >= 330 || h <= 360) && s * 255 >= 50 && s * 255 <= 255 && v * 255 >= 50 && v * 255 <= 255)) {
					for (int k = 0; k < 3; ++k)
						otdata[k] = 0;
				}*/

				if (!((r > r_t && (r >= g && g > b) && S * 255 >= (255.0 - r) * s_t / r_t && (dark ? I > 0.72 : I < 0.85)) || (dark && I * 255 > i_t))) {
					for (int k = 0; k < 3; ++k)
						otdata[k] = 0;
				}
			}
		}

		int pos_x = 0, pos_y = 0;
		std::vector<std::vector<int>> label(height, std::vector<int>(width, 0));
		int have_obj = labelComponents(odata, height, width, label, pos_y, pos_x);

		if (have_obj) {  // 如果有物件就畫框
			static const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
			static const int dy[] = {0, -1, -1, -1, 0, 1, 1, 1};

			std::vector<std::pair<int, int>> stack;
			std::vector<std::vector<int>> state(height, std::vector<int>(width, 0));
			
			int min_x = pos_x;
			int min_y = pos_y;
			int max_x = pos_x;
			int max_y = pos_y;

			// 第一點是回傳過來的，一定是有物件的pixel
			stack.push_back({pos_y, pos_x});
			state[pos_y][pos_x] = 1;

			// 找最大最小座標
			while (!stack.empty()) {
				std::pair<int, int> point = stack.back();
				stack.pop_back();
				//std::cout << point.first << " " << point.second << "\n";
				min_x = min(min_x, point.second);
				min_y = min(min_y, point.first);
				max_x = max(max_x, point.second);
				max_y = max(max_y, point.first);

				for (int k = 0; k < 8; ++k) {
					int x = point.second + dx[k];
					int y = point.first + dy[k];

					uchar *input_pixel = odata + y * width * 3 + x * 3;
					bool is_obj = input_pixel[0] | input_pixel[1] | input_pixel[2];
					if (x >= 0 && x < width && y >= 0 && y < height &&
						is_obj && state[y][x] == 0) {
						state[y][x] = 1;
						stack.push_back({y, x});
					}
				}
			}

			// 畫框
			static const int offset = 2;

			uchar* o2data = output2.data;
			for (int i = 0; i < height; ++i) {
				for (int j = 0; j < width; ++j) {
					uchar* o2tdata = o2data + i * width * 3 + j * 3;

					// 只要往外面框，往裡面可能獲把火焰遮到
					if ((unsigned(min_y - i) <= offset || unsigned(i - max_y) <= offset) && j <= max_x && j >= min_x ||
						(unsigned(min_x - j) <= offset || unsigned(j - max_x) <= offset) && i <= max_y && i >= min_y) {
						o2tdata[0] = o2tdata[1] = 0;
						o2tdata[2] = 255;
					}
				}
			}
		}

		pictureBox1->Image = MatToBitmap(input);
		pictureBox3->Image = MatToBitmap(output);
		pictureBox2->Image = MatToBitmap(output2);
	}

	// 8連通連通分量標記
	// xi, yi represent the object with the most pixels.
	int labelComponents(uchar* input, int height, int width, std::vector<std::vector<int>>& output, int& yi, int& xi) {
		static const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
		static const int dy[] = {0, -1, -1, -1, 0, 1, 1, 1};

		int label = 1;
		output.assign(height, std::vector<int>(width, 0));  // output and input are the same size.

		int most_pixels = 0;
		for (int i = 0; i < height; ++i) {
			for (int j = 0; j < width; ++j) {
				uchar* input_pixel = input + i * width * 3 + j * 3;
				bool is_obj = input_pixel[0] | input_pixel[1] | input_pixel[2];
				// 這個pixel是白點(有物件的pixel) && 沒有標記過
				if (is_obj && output[i][j] == 0) {
					std::vector<std::pair<int, int>> stack;
					stack.push_back({i, j});
					output[i][j] = label;

					int cnt = 0;
					// 使用dfs標記連通分量的物件
					while (!stack.empty()) {
						std::pair<int, int> point = stack.back();
						stack.pop_back();
						++cnt;

						for (int k = 0; k < 8; ++k) {
							int y = point.first + dy[k];
							int x = point.second + dx[k];

							input_pixel = input + y * width * 3 + x * 3;
							is_obj = input_pixel[0] | input_pixel[1] | input_pixel[2];
							if (x >= 0 && x < width && y >= 0 && y < height &&
								is_obj && output[y][x] == 0) {
								output[y][x] = label;
								stack.push_back({y, x});
							}
						}
					}

					if (cnt > most_pixels) {
						most_pixels = cnt;
						yi = i;
						xi = j;
					}
					++label;
				}
			}
		}

		return most_pixels;  // 不為0就代表有物件可以標
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

	void bgrToHSV(const uchar bgr[], double& H, double& S, double& V) {
		double b = bgr[0] / 255.0;
		double g = bgr[1] / 255.0;
		double r = bgr[2] / 255.0;

		double max_val = max(max(b, g), r);
		double min_val = min(min(b, g), r);
		double delta = max_val - min_val;

		if (delta == 0) {
			H = 0;
		}
		else if (max_val == r) {
			H = 60 * fmod(((g - b) / delta), 6.0);
		}
		else if (max_val == g) {
			H = 60 * (((b - r) / delta) + 2);
		}
		else if (max_val == b) {
			H = 60 * (((r - g) / delta) + 4);
		}
		if (H < 0) {
			H += 360;
		}

		if (max_val == 0) {
			S = 0;
		}
		else {
			S = delta / max_val;
		}

		V = max_val;
	}

	void bgrToHSI(const uchar bgr[], double& H, double& S, double& I) {
		int total = bgr[0] + bgr[1] + bgr[2];
		if (total > 0) {
			double r = bgr[2] / 255.0;
			double g = bgr[1] / 255.0;
			double b = bgr[0] / 255.0;

			I = total / 3.0 / 255.0;  // normalization

			double min_val = min3(r, g, b);
			S = 1 - 3 * min_val / (r + g + b);

			if (S != 0) {
				H = std::acos(0.5 * ((r - g) + (r - b)) / std::sqrt((r - g) * (r - g) + (r - b) * (g - b)));
				H *= 180 / 3.14159265358979323846;
				if (b > g)
					H = 360 - H;
			}
			else {
				H = 0;
			}
		}
		else {
			// 當total為0時，將HSI值都設為0
			H = S = I = 0;
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		long pos_now = (double)trackBar1->Value / trackBar1->Maximum * frame_counts;
		vc.set(cv::CAP_PROP_POS_FRAMES, pos_now);
	}
};
}
