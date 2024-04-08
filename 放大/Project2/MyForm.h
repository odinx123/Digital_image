#pragma once

#include <iostream>
#include <cmath>

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    using namespace System::Drawing::Imaging;  // for BitmapData 、 ImageLockMode::ReadWrite
    using namespace System::Drawing::Design;  // for 

    /// <summary>
    /// MyForm 的摘要
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form {
        public:
        MyForm(void) {
            InitializeComponent();
            //
            //TODO:  在此加入建構函式程式碼
            //
        }

        protected:
        /// <summary>
        /// 清除任何使用中的資源。
        /// </summary>
        ~MyForm() {
            if (components) {
                delete components;
            }
        }
        private: System::Windows::Forms::PictureBox^ pictureBox1;
        protected:
        private: System::Windows::Forms::PictureBox^ pictureBox2;
        private: System::Windows::Forms::Button^ button1;
        private: System::Windows::Forms::Button^ button2;

        private:
        /// <summary>
        /// 設計工具所需的變數。
        /// </summary>
        System::ComponentModel::Container^ components;
        private: System::Windows::Forms::Button^ button3;
               Bitmap^ ori_image;
        private: System::Windows::Forms::TextBox^ textBox1;
        private: System::Windows::Forms::PictureBox^ pictureBox3;
               Bitmap^ mask;
               int x1 = 0;
               int y1 = 0;
               int x2 = 0;
        private: System::Windows::Forms::PictureBox^ pictureBox4;
        private: System::Windows::Forms::Button^ button4;
        private: System::Windows::Forms::TextBox^ textBox2;

        private: System::Windows::Forms::Label^ label2;
        private: System::Windows::Forms::Label^ label3;
               int y2 = 0;

           #pragma region Windows Form Designer generated code
               /// <summary>
               /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
               /// 這個方法的內容。
               /// </summary>
               void InitializeComponent(void) {
                   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
                   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
                   this->button1 = (gcnew System::Windows::Forms::Button());
                   this->button2 = (gcnew System::Windows::Forms::Button());
                   this->button3 = (gcnew System::Windows::Forms::Button());
                   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
                   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
                   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
                   this->button4 = (gcnew System::Windows::Forms::Button());
                   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
                   this->label2 = (gcnew System::Windows::Forms::Label());
                   this->label3 = (gcnew System::Windows::Forms::Label());
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
                   this->SuspendLayout();
                   // 
                   // pictureBox1
                   // 
                   this->pictureBox1->Location = System::Drawing::Point(-26, 147);
                   this->pictureBox1->Name = L"pictureBox1";
                   this->pictureBox1->Size = System::Drawing::Size(372, 418);
                   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                   this->pictureBox1->TabIndex = 0;
                   this->pictureBox1->TabStop = false;
                   // 
                   // pictureBox2
                   // 
                   this->pictureBox2->Location = System::Drawing::Point(352, 132);
                   this->pictureBox2->Name = L"pictureBox2";
                   this->pictureBox2->Size = System::Drawing::Size(414, 433);
                   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                   this->pictureBox2->TabIndex = 1;
                   this->pictureBox2->TabStop = false;
                   // 
                   // button1
                   // 
                   this->button1->Location = System::Drawing::Point(12, 47);
                   this->button1->Name = L"button1";
                   this->button1->Size = System::Drawing::Size(119, 60);
                   this->button1->TabIndex = 2;
                   this->button1->Text = L"load";
                   this->button1->UseVisualStyleBackColor = true;
                   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
                   // 
                   // button2
                   // 
                   this->button2->Location = System::Drawing::Point(464, 47);
                   this->button2->Name = L"button2";
                   this->button2->Size = System::Drawing::Size(119, 60);
                   this->button2->TabIndex = 3;
                   this->button2->Text = L"firstOrder";
                   this->button2->UseVisualStyleBackColor = true;
                   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
                   // 
                   // button3
                   // 
                   this->button3->Location = System::Drawing::Point(888, 47);
                   this->button3->Name = L"button3";
                   this->button3->Size = System::Drawing::Size(119, 60);
                   this->button3->TabIndex = 4;
                   this->button3->Text = L"Bilinear";
                   this->button3->UseVisualStyleBackColor = true;
                   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
                   // 
                   // textBox1
                   // 
                   this->textBox1->Location = System::Drawing::Point(158, 82);
                   this->textBox1->Name = L"textBox1";
                   this->textBox1->Size = System::Drawing::Size(100, 25);
                   this->textBox1->TabIndex = 5;
                   this->textBox1->Text = L"2";
                   // 
                   // pictureBox3
                   // 
                   this->pictureBox3->Location = System::Drawing::Point(772, 132);
                   this->pictureBox3->Name = L"pictureBox3";
                   this->pictureBox3->Size = System::Drawing::Size(414, 433);
                   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                   this->pictureBox3->TabIndex = 6;
                   this->pictureBox3->TabStop = false;
                   // 
                   // pictureBox4
                   // 
                   this->pictureBox4->Location = System::Drawing::Point(1192, 132);
                   this->pictureBox4->Name = L"pictureBox4";
                   this->pictureBox4->Size = System::Drawing::Size(414, 433);
                   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                   this->pictureBox4->TabIndex = 7;
                   this->pictureBox4->TabStop = false;
                   // 
                   // button4
                   // 
                   this->button4->Location = System::Drawing::Point(1237, 47);
                   this->button4->Name = L"button4";
                   this->button4->Size = System::Drawing::Size(118, 56);
                   this->button4->TabIndex = 9;
                   this->button4->Text = L"縮小";
                   this->button4->UseVisualStyleBackColor = true;
                   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
                   // 
                   // textBox2
                   // 
                   this->textBox2->Location = System::Drawing::Point(1395, 78);
                   this->textBox2->Name = L"textBox2";
                   this->textBox2->Size = System::Drawing::Size(100, 25);
                   this->textBox2->TabIndex = 10;
                   this->textBox2->Text = L"2";
                   // 
                   // label2
                   // 
                   this->label2->AutoSize = true;
                   this->label2->Location = System::Drawing::Point(1392, 47);
                   this->label2->Name = L"label2";
                   this->label2->Size = System::Drawing::Size(82, 15);
                   this->label2->TabIndex = 12;
                   this->label2->Text = L"輸入正整數";
                   // 
                   // label3
                   // 
                   this->label3->AutoSize = true;
                   this->label3->Location = System::Drawing::Point(155, 47);
                   this->label3->Name = L"label3";
                   this->label3->Size = System::Drawing::Size(82, 15);
                   this->label3->TabIndex = 13;
                   this->label3->Text = L"輸入正整數";
                   // 
                   // MyForm
                   // 
                   this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
                   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                   this->ClientSize = System::Drawing::Size(1663, 655);
                   this->Controls->Add(this->label3);
                   this->Controls->Add(this->label2);
                   this->Controls->Add(this->textBox2);
                   this->Controls->Add(this->button4);
                   this->Controls->Add(this->pictureBox4);
                   this->Controls->Add(this->pictureBox3);
                   this->Controls->Add(this->textBox1);
                   this->Controls->Add(this->button3);
                   this->Controls->Add(this->button2);
                   this->Controls->Add(this->button1);
                   this->Controls->Add(this->pictureBox2);
                   this->Controls->Add(this->pictureBox1);
                   this->Name = L"MyForm";
                   this->Text = L"MyForm";
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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

                // 轉灰階 & 畫紅線
                int width = ori_image->Width;
                int height = ori_image->Height;

                mask = gcnew Bitmap(width, height, ori_image->PixelFormat);  // gcnew一個新的Bitmap
                Bitmap^ temp = gcnew Bitmap(width, height, ori_image->PixelFormat);  // gcnew一個新的Bitmap

                BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
                BitmapData^ bd_msk = mask->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, mask->PixelFormat);
                BitmapData^ bd_tmp = temp->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, temp->PixelFormat);

                int ori_byteskip = bd_ori->Stride - width * 3;
                int mask_byteskip = bd_msk->Stride - width * 3;
                int temp_byteskip = bd_tmp->Stride - width * 3;

                Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
                Byte* mask_ptr = (Byte*)(void*)bd_msk->Scan0;
                Byte* temp_ptr = (Byte*)(void*)bd_tmp->Scan0;

                x1 = width / 2 - 40;
                y1 = 50;
                x2 = width / 2 + 160;
                y2 = height / 2 + 30;
                int gap = 2;

                for (int i = 0; i < height; ++i) {
                    for (int j = 0; j < width; ++j) {
                        int B = ori_ptr[0];
                        int G = ori_ptr[1];
                        int R = ori_ptr[2];

                        int gray = (B + G + R) / 3;

                        if (((i >= y1 - gap && i <= y1 + gap || i <= y2 + gap && i >= y2 - gap) && j <= x2 && j >= x1) ||
                            ((j >= x1 - gap && j <= x1 + gap || j <= x2 + gap && j >= x2 - gap) && i <= y2 && i >= y1)) {
                            temp_ptr[0] = temp_ptr[1] = gray;
                            temp_ptr[2] = 255;
                        }
                        else {
                            if (i > y1 + gap && i < y2 - gap && j > x1 + gap && j < x2 - gap)
                                mask_ptr[0] = mask_ptr[1] = mask_ptr[2] = gray;
                            else
                                mask_ptr[0] = mask_ptr[1] = mask_ptr[2] = 0;
                            temp_ptr[0] = temp_ptr[1] = temp_ptr[2] = gray;
                        }

                        ori_ptr[0] = ori_ptr[1] = ori_ptr[2] = gray;

                        mask_ptr += 3;
                        ori_ptr += 3;
                        temp_ptr += 3;
                    }

                    temp_ptr += temp_byteskip;
                    mask_ptr += mask_byteskip;
                    ori_ptr += ori_byteskip;
                }

                mask_ptr = (Byte*)(void*)bd_msk->Scan0;
                int orgySize = ori_byteskip + width * 3;
                for (int i = 0; i < height; ++i) {
                    for (int j = 0; j < width; ++j) {
                        auto pos1 = mask_ptr + j * 3 + i * orgySize;
                        if (j + x1 < width && i + y1 < height) {
                            auto pos2 = mask_ptr + (j + x1) * 3 + (i + y1) * orgySize;
                            pos1[0] = pos1[1] = pos1[2] = pos2[0];
                        }
                        else
                            pos1[0] = pos1[1] = pos1[2] = 0;
                    }
                }

                // Unlock
                ori_image->UnlockBits(bd_ori);
                mask->UnlockBits(bd_msk);
                temp->UnlockBits(bd_tmp);

                //顯示ori_image於pictureBox1
                pictureBox1->Image = temp;
            }
        }
        private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            /*first-order hold*/

            // 檢查是否開啟圖像檔案
            if (ori_image == nullptr) return;

            // 生成一個Bitmap用來儲存縮放的結果
            int width = ori_image->Width;
            int height = ori_image->Height;

            int k = Convert::ToInt32(textBox1->Text);

            Bitmap^ image2 = gcnew Bitmap(int(width * k), int(height * k), ori_image->PixelFormat);  // 先取一個放大的圖像來處理
            Bitmap^ output = gcnew Bitmap(width, height, ori_image->PixelFormat);

            int width2 = image2->Width;
            int height2 = image2->Height;

            // 使用LockBits來加速存取pixel的效率(記憶體控制)
            BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, output->PixelFormat);
            BitmapData^ bd_image2 = image2->LockBits(Rectangle(0, 0, width2, height2), ImageLockMode::ReadWrite, image2->PixelFormat);
            BitmapData^ bd_mask = mask->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, mask->PixelFormat);

            int output_byteskip = bd_output->Stride - bd_output->Width * 3;
            int image2_byteskip = bd_image2->Stride - bd_image2->Width * 3;
            int mask_byteskip = bd_mask->Stride - bd_mask->Width * 3;

            Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;
            Byte* image2_ptr = (Byte*)(void*)bd_image2->Scan0;
            Byte* mask_ptr = (Byte*)(void*)bd_mask->Scan0;

            int orgySize = mask_byteskip + width * 3;
            int im2ySize = image2_byteskip + width2 * 3;

            for (int i = 0; i < height2; ++i) {
                for (int j = 0; j < width2; ++j) {
                    int org_x = j * ((double)width / width2);
                    int org_y = i * ((double)height / height2);

                    if (org_x >= 0 && org_y >= 0 && org_x < width && org_y < height) {
                        //ans[i][j] = arr[org_y][org_x];
                        auto ans = (image2_ptr + i * im2ySize + j * 3);
                        auto arr = (mask_ptr + org_y * orgySize + org_x * 3);
                        ans[0] = ans[1] = ans[2] = arr[0];

                        int r = j % (k + 1);
                        if (r != 0 && org_x + 3 < width) {
                            int gap = arr[3] - *(ans - r * 3);
                            for (int t = 1; t <= k; ++t) {
                                ans[0] = ans[1] = ans[2] = *(ans - 1) + gap / k;
                            }
                        }
                    }
                }
            }

            for (int j = 0; j < width2; ++j) {
                for (int i = 0; i < height2; ++i) {
                    //ans[i][j] = arr[org_y][org_x];
                    auto ans = (image2_ptr + i * im2ySize + j * 3);

                    int r = i % (k + 1);
                    if (r != 0 && i + k - r + 1 < height) {
                        //int gap = ans[i + k - r + 1][j] - ans[i - r][j];
                        int gap = *(image2_ptr + (i + k - r + 1) * im2ySize + j * 3) - *(image2_ptr + (i - r) * im2ySize + j * 3);
                        for (int t = 1; t <= k; ++t) {
                            //ans[i][j] = ans[i - 1][j] + gap / k;
                            ans[0] = ans[1] = ans[2] = *(ans - im2ySize) + gap / k;
                        }
                    }
                }
            }

            int outySize = output_byteskip + width * 3;
            // 移動到output
            for (int i = 0; i < height; ++i) {
                for (int j = 0; j < width; ++j) {
                    auto out = output_ptr + i * outySize + j * 3;
                    auto im2 = image2_ptr + i * im2ySize + j * 3;
                    if (45 * (k - 1) + j < width2 && 35 * (k - 1) + i < height2)
                        im2 += (45 * 3 + 35 * im2ySize) * (k - 1);
                    out[0] = out[1] = out[2] = im2[0];
                }
            }

            // UnolckBits
            output->UnlockBits(bd_output);
            image2->UnlockBits(bd_image2);
            mask->UnlockBits(bd_mask);

            // output
            pictureBox2->Image = output;
        }
        private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
            // 檢查是否開啟圖像檔案
            if (ori_image == nullptr) return;

            // 生成一個Bitmap用來儲存縮放的結果
            int width = ori_image->Width;
            int height = ori_image->Height;

            int k = Convert::ToInt32(textBox1->Text);

            Bitmap^ image2 = gcnew Bitmap(int(width * k), int(height * k), ori_image->PixelFormat);
            Bitmap^ output = gcnew Bitmap(width, height, ori_image->PixelFormat);

            int width2 = image2->Width;
            int height2 = image2->Height;

            // 使用LockBits來加速存取pixel的效率(記憶體控制)
            BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, output->PixelFormat);
            BitmapData^ bd_image2 = image2->LockBits(Rectangle(0, 0, width2, height2), ImageLockMode::ReadWrite, image2->PixelFormat);
            BitmapData^ bd_mask = mask->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, mask->PixelFormat);

            int output_byteskip = bd_output->Stride - bd_output->Width * 3;
            int image2_byteskip = bd_image2->Stride - bd_image2->Width * 3;
            int mask_byteskip = bd_mask->Stride - bd_mask->Width * 3;

            Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;
            Byte* image2_ptr = (Byte*)(void*)bd_image2->Scan0;
            Byte* mask_ptr = (Byte*)(void*)bd_mask->Scan0;

            int maskySizes = mask_byteskip + width * 3;
            int im2ySize = image2_byteskip + width2 * 3;

            // Todo
            std::cout << k << std::endl;
            for (int i = 0; i < height2; ++i) {
                for (int j = 0; j < width2; ++j) {
                    // 前面已經放大過的矩陣image2
                    double x = j * ((double)width / width2);
                    double y = i * ((double)height / height2);
                    //double x = (double)j / k;
                    //double y = (double)i / k;

                    // 找4個點，先找整數->上下取整
                    int X1 = floor(x);
                    int Y1 = floor(y);
                    int X2 = ceil(x);
                    int Y2 = ceil(y);

                    if (X2 >= width || Y2 >= height) break;  // continue會繼續超過

                    // 依照比列找像素值
                    double u = x - X1;  // X1到目標比例，占比(1-u)
                    double v = y - Y1;  // Y1到目標比例，占比(1-v)

                    auto im2 = image2_ptr + i * im2ySize + j * 3;

                    auto Q1 = mask_ptr + Y1 * maskySizes + X1 * 3;
                    auto Q2 = mask_ptr + Y2 * maskySizes + X1 * 3;
                    auto Q3 = mask_ptr + Y1 * maskySizes + X2 * 3;
                    auto Q4 = mask_ptr + Y2 * maskySizes + X2 * 3;
                    double out = *Q1 * (1 - u) * (1 - v) + *Q2 * (1 - u) * v + *Q3 * u * (1 - v) + *Q4 * u * v;

                    im2[0] = im2[1] = im2[2] = out;
                }
            }

            int outySize = output_byteskip + width * 3;

            // 移動到output
            for (int i = 0; i < height; ++i) {
                for (int j = 0; j < width; ++j) {
                    auto out = output_ptr + i * outySize + j * 3;
                    auto im2 = image2_ptr + i * im2ySize + j * 3;
                    if (45*(k-1) + j < width2 && 35*(k-1) + i < height2)
                        im2 += (45 * 3 + 35 * im2ySize) * (k - 1);
                    out[0] = out[1] = out[2] = im2[0];
                }
            }
            
            // UnolckBits
            output->UnlockBits(bd_output);
            image2->UnlockBits(bd_image2);
            mask->UnlockBits(bd_mask);

            // output
            pictureBox3->Image = output;
        }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        // 檢查是否開啟圖像檔案
        if (ori_image == nullptr) return;

        // 生成一個Bitmap用來儲存縮放的結果
        int width = ori_image->Width;
        int height = ori_image->Height;

        int k = Convert::ToInt32(textBox2->Text);

        Bitmap^ output = gcnew Bitmap(width, height, ori_image->PixelFormat);

        // 使用LockBits來加速存取pixel的效率(記憶體控制)
        BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
        BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, output->PixelFormat);
        BitmapData^ bd_mask = mask->LockBits(Rectangle(0, 0, width, height), ImageLockMode::ReadWrite, mask->PixelFormat);

        int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
        int output_byteskip = bd_output->Stride - bd_output->Width * 3;
        int mask_byteskip = bd_mask->Stride - bd_mask->Width * 3;

        Byte* ori_ptr = (Byte*)(void*)bd_ori->Scan0;
        Byte* output_ptr = (Byte*)(void*)bd_output->Scan0;
        Byte* mask_ptr = (Byte*)(void*)bd_mask->Scan0;

        int orgySize = ori_byteskip + width * 3;

        double scale = 1.0 / k;

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                auto pos1 = output_ptr + int(round(i * scale)) * orgySize + int(round(j * scale)) * 3;
                auto pos2 = mask_ptr + j * 3 + i * orgySize;
                
                pos1[0] = pos1[1] = pos1[2] = pos2[0];
            }
        }

        // UnolckBits
        ori_image->UnlockBits(bd_ori);
        output->UnlockBits(bd_output);
        mask->UnlockBits(bd_mask);

        // output
        pictureBox4->Image = output;
    }
};
}
