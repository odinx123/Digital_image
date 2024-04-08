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
                   this->label3 = (gcnew System::Windows::Forms::Label());
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
                   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
                   this->button3->Location = System::Drawing::Point(772, 43);
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
            if (ori_image == nullptr) return;
            
            int k = Convert::ToInt32(textBox1->Text); //從numeric工具取值，可自行設定數值
            Bitmap^ Image3 = gcnew Bitmap((int)((ori_image->Width) / (k)), (int)((ori_image->Height) / (k)));
            Rectangle rect3 = System::Drawing::Rectangle(0, 0, Image3->Width, Image3->Height);
            Rectangle rect1 = Rectangle(0, 0, ori_image->Width, ori_image->Height);
            
            int ByteNumber_Width3 = Image3->Width * 3;
            int ByteNumber_Width = ori_image->Width * 3;
            
            BitmapData^ ImageData1 = mask->LockBits(rect1, ImageLockMode::ReadWrite, mask->PixelFormat);
            BitmapData^ ImageData3 = Image3->LockBits(rect3, ImageLockMode::ReadWrite, ori_image->PixelFormat);
            
            //將int指標指向Image像素資料的最前面位置
            IntPtr ptr = ImageData1->Scan0;
            IntPtr ptr3 = ImageData3->Scan0;
            
            //掃瞄寬度- Byte資料寬度
            int BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
            int BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
            
            //設定指標
            Byte* p = (Byte*)((Void*)ptr);
            Byte* p3 = (Byte*)((Void*)ptr3); //N[n]
            
            //*** N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel ***// 運算式
            //主要處理部分
            int x, y;
            float r; //rate 
            int src_w;//New x
            int src_h;//New y
            for (y = 0; y < Image3->Height; y++) {
                for (x = 0; x < Image3->Width; x++) {
                    src_w = x * k;
                    src_h = y * k;
                    r = fmod(x, k); //對x 放大倍率 fmod #include “math.h”
                    //避免超出記憶體設定範圍
                    if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(ori_image->Height))) &&
                        (src_w < ((int)(ori_image->Width)) - 1)) {
                        //將p歸位置Image1起始點
                        p = ((Byte*)((Void*)ptr));
                        //*** N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel ***// 運算式
                        p3[0] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride))) * (k - r) + ((*(p + (src_w * 3) + (src_h * ImageData1->Stride)
                                + 3)) * (r))) / k);
                        p3[1] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride) + 1)) * (k - r) + ((*(p + (src_w * 3) +
                                (src_h * ImageData1->Stride) + 3 + 1)) * (r))) / k);
                        p3[2] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride) + 2)) * (k - r) + ((*(p + (src_w * 3) +
                                (src_h * ImageData1->Stride) + 3 + 2)) * (r))) / k);
                    }
                    else {
                        p3[0] = (Byte)255;
                        p3[1] = (Byte)255;
                        p3[2] = (Byte)255;
                    }
                    p3 += 3;
                }
                p3 += BytesOfSkip3;
            }
            //歸位，回到Image3的起始點
            p3 = (Byte*)((Void*)ptr3);
            for (y = 0; y < Image3->Height; y++) {
                for (x = 0; x < Image3->Width; x++) {
                    src_h = y * k;
                    src_w = x * k;
                    //對y 放大倍率
                    r = fmod(y, k);
                    //避免超出記憶體設定範圍
                    if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(ori_image->Height))) &&
                        (src_w < ((int)(ori_image->Width)) - 1)) {
                        p = ((Byte*)((Void*)ptr));
                        p3[0] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride))) * (k - r) + ((*(p + (src_w * 3) + (src_h * ImageData1->Stride)
                                + 3)) * (r))) / k);
                        p3[1] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride) + 1)) * (k - r) + ((*(p + (src_w * 3) +
                                (src_h * ImageData1->Stride) + 3 + 1)) * (r))) / k);
                        p3[2] = (Byte)(int)((double)((*(p + (src_w * 3) +
                            (src_h * ImageData1->Stride) + 2)) * (k - r) + ((*(p + (src_w * 3) +
                                (src_h * ImageData1->Stride) + 3 + 2)) * (r))) / k);
                    }
                    else {
                        p3[0] = (Byte)255;
                        p3[1] = (Byte)255;
                        p3[2] = (Byte)255;
                    }
                    p3 += 3;
                }
                p3 += BytesOfSkip3;
            }
            Bitmap^ output = gcnew Bitmap(ori_image->Width, ori_image->Height);
            BitmapData^ bitOut = output->LockBits(Rectangle(0, 0, ori_image->Width, ori_image->Height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
            Byte* outPtr = (Byte*)(void*)bitOut->Scan0;
            int ySize = bitOut->Stride;

            p3 = (Byte*)(void*)ImageData3->Scan0;
            p = (Byte*)(void*)ImageData1->Scan0;
            // 移動到output
            for (int i = 0; i < ImageData3->Height; ++i) {
                for (int j = 0; j < ImageData3->Width; ++j) {
                    auto out = outPtr + i * ySize + j * 3;
                    auto im3 = p3 + i * ImageData3->Stride + j * 3;
                    out[0] = out[1] = out[2] = im3[0];
                }
            }

            //Unlock處理完畢的像素範圍
            output->UnlockBits(bitOut);
            mask->UnlockBits(ImageData1);
            Image3->UnlockBits(ImageData3);
            //將影像顯示在pictureBox3
            pictureBox2->Image = output;

        }
        private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
            // 檢查是否開啟圖像檔案
            if (ori_image == nullptr) return;

            // 生成一個Bitmap用來儲存縮放的結果
            int width = ori_image->Width;
            int height = ori_image->Height;

            int k = Convert::ToInt32(textBox1->Text);
            std::cout << k << std::endl;

            Bitmap^ image2 = gcnew Bitmap(int(width / k), int(height / k), ori_image->PixelFormat);
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

            std::cout << height << " " << width << std::endl;
            std::cout << height2 << " " << width2 << std::endl;

            // Todo
            std::cout << k << std::endl;
            for (int i = 0; i < height2; ++i) {
                for (int j = 0; j < width2; ++j) {
                    // 原圖位置
                    double x = j * k;
                    double y = i * k;

                    // 找4個點，先找整數->上下取整
                    int X1 = floor(x);
                    int Y1 = floor(y);
                    int X2 = ceil(x);
                    int Y2 = ceil(y);

                    if (X2 >= width || Y2 >= height) break;

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
            for (int i = 0; i < height2; ++i) {
                for (int j = 0; j < width2; ++j) {
                    auto out = output_ptr + i * outySize + j * 3;
                    auto im2 = image2_ptr + i * im2ySize + j * 3;
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
};
}
