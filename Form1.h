#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label4;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 442);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->trackBar2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->trackBar1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Location = System::Drawing::Point(7, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(242, 357);
			this->panel2->TabIndex = 1;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(6, 242);
			this->trackBar2->Maximum = 20;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(233, 45);
			this->trackBar2->TabIndex = 10;
			this->trackBar2->Value = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Толщина линий";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 92);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Поменять цвета местами";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(65, 3);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(58, 17);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"Линии";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Размер фигуры";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(3, 174);
			this->trackBar1->Maximum = 64;
			this->trackBar1->Minimum = 24;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(236, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 24;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Цвет фона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Цвет орнамента";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(121, 63);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Выбрать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(121, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Выбрать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(3, 3);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Сетка";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(7, 383);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(242, 53);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(273, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 442);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 466);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Pattern Generator";
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	double	size = 36;
	bool	draw_grid = false,
			draw_lines = true;

	float pen_size = 1.0f;

	Color pattern_color = Color::Black;
	Color background_color = Color::White;

	private: void draw_pattern() {
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ g = pictureBox1->CreateGraphics();
		g = Graphics::FromImage(bmp);
		pictureBox1->Image = bmp;

		Pen^ pen = gcnew Pen(Color::Blue, 1.0f);
		Pen^ pen_black = gcnew Pen(pattern_color, pen_size);

		g->Clear(background_color);

		double	height = size * pow(3, 0.5),
				width = size * 2,
				zero_point_x = -1.5 * width,
				zero_point_y = -3 * height,
				step_x = zero_point_x,
				step_y = zero_point_y;

		int		modifier_i = 0;

		if (draw_grid) {
			for (int i = 0; i <= 10; i++) {
				g->DrawLine(pen, 0, height * i, 1024, height * i);
			}
			for (int i = 0; i <= 10; i++) {
				g->DrawLine(pen, width * i, 0, width * i, 1024);
			}
		}


		for (int y = 0; y <= 50; y++) {
			for (int x = 0; x <= 25; x++) {
				Point	p1 = Point(0.25 * width + step_x, step_y),
						p2 = Point((0.75 * width + step_x), step_y),
						p3 = Point((width + step_x), 0.5 * height + step_y),
						p4 = Point((0.75 * width + step_x), height + step_y),
						p5 = Point((0.25 * width + step_x), height + step_y),
						p6 = Point((step_x), 0.5 * height + step_y);

				array <Point>^ points = { p1,p2,p3,p4,p5,p6 };

				g->DrawPolygon(pen_black, points);

				if (draw_lines) {
					if (y % 3 == 0) {
						g->DrawLine(pen_black, Point(step_x, 0.5 * height + step_y), Point(step_x + width, 0.5 * height + step_y));
						g->DrawLine(pen_black, Point(step_x, 0.5 * height + step_y), Point(step_x + 0.75 * width, step_y));
						g->DrawLine(pen_black, Point(step_x, 0.5 * height + step_y), Point(step_x + 0.75 * width, height + step_y));

						g->DrawLine(pen_black, Point(step_x, 0.5 * height + step_y), Point(step_x + 1.75 * width / 2, step_y + 0.25 * height));
						g->DrawLine(pen_black, Point(step_x, 0.5 * height + step_y), Point(step_x + 1.75 * width / 2, step_y + 0.75 * height));
					}
					else if (y % 3 == 2) {
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y), Point(step_x + 0.25 * width, step_y + height));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y), Point(step_x + 0.75 * width, step_y + height));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y), Point(step_x, 0.5 * height + step_y));

						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y), Point(step_x + 0.5 * width, step_y + height));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y), Point(step_x + 0.25 * width / 2, 0.75 * height + step_y));
					}
					else {
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y + height), Point(step_x + 0.25 * width, step_y));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y + height), Point(step_x + 0.75 * width, step_y));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y + height), Point(step_x, step_y + 0.5 * height));

						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y + height), Point(step_x + 0.5 * width, step_y));
						g->DrawLine(pen_black, Point(step_x + 0.75 * width, step_y + height), Point(step_x + 0.25 * width / 2, step_y + 0.25 * height));

					}
				}
				step_x += 1.5 * width;
			}
			modifier_i ^= 1;
			step_x = zero_point_x;
			step_x += modifier_i * width * 0.75;
			step_y += 0.5 * height;
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	draw_pattern();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	draw_grid ^= 1;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog = gcnew ColorDialog();

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Color selectedColor = colorDialog->Color;
		pattern_color = selectedColor;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog = gcnew ColorDialog();

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Color selectedColor = colorDialog->Color;
		background_color = selectedColor;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->Filter = "JPEG Image (*.jpg)|*.jpg|PNG Image (*.png)|*.png|BMP Image (*.bmp)|*.bmp";
	saveFileDialog1->DefaultExt = "jpg";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
	}
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	size = trackBar1->Value;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	draw_lines ^= 1;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Color temp_color = pattern_color;
	pattern_color = background_color;
	background_color = temp_color;
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	pen_size = trackBar2->Value;
}
};

}
