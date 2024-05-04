#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <msclr/marshal_cppstd.h>

using namespace System;

// Hàm chuyển đổi từ System::String^ sang double
double ConvertToDouble(String^ str) {
	// Chuyển đổi System::String^ sang std::string
	std::string strStd = msclr::interop::marshal_as<std::string>(str);

	// Chuyển đổi std::string sang double
	return std::stod(strStd);
}

std::string ConvertToString(String^ str) {
	return msclr::interop::marshal_as<std::string>(str);
}
namespace PhoneBook {
	static float a, b;
	static char pheptoan;
	static int cnt = 0;
	static int cntdot = 0;
	static float ketqua;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_1;
	protected:
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_ans;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_dot;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_sub;
	private: System::Windows::Forms::Button^ btn_mul;
	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_am;

	private: System::Windows::Forms::Button^ btn_reset;
	private: System::Windows::Forms::Button^ btn_del;
	private: System::Windows::Forms::Label^ lbl_hienthi;
	private: System::Windows::Forms::Label^ lbl_ketqua;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_ans = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_sub = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_am = (gcnew System::Windows::Forms::Button());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->lbl_hienthi = (gcnew System::Windows::Forms::Label());
			this->lbl_ketqua = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_1
			// 
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_1->Location = System::Drawing::Point(12, 397);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(52, 46);
			this->btn_1->TabIndex = 0;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->Location = System::Drawing::Point(84, 397);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(52, 46);
			this->btn_2->TabIndex = 0;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_2_Click);
			// 
			// btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->Location = System::Drawing::Point(158, 397);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(52, 46);
			this->btn_3->TabIndex = 0;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_3_Click);
			// 
			// btn_4
			// 
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_4->Location = System::Drawing::Point(12, 329);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(52, 46);
			this->btn_4->TabIndex = 0;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_4_Click);
			// 
			// btn_5
			// 
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_5->Location = System::Drawing::Point(84, 329);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(52, 46);
			this->btn_5->TabIndex = 0;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_5_Click);
			// 
			// btn_6
			// 
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_6->Location = System::Drawing::Point(158, 329);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(52, 46);
			this->btn_6->TabIndex = 0;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_6_Click);
			// 
			// btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->Location = System::Drawing::Point(12, 259);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(52, 46);
			this->btn_7->TabIndex = 0;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_7_Click);
			// 
			// btn_8
			// 
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_8->Location = System::Drawing::Point(84, 259);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(52, 46);
			this->btn_8->TabIndex = 0;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_8_Click);
			// 
			// btn_9
			// 
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_9->Location = System::Drawing::Point(158, 259);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(52, 46);
			this->btn_9->TabIndex = 0;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_9_Click);
			// 
			// btn_ans
			// 
			this->btn_ans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ans->Location = System::Drawing::Point(12, 466);
			this->btn_ans->Name = L"btn_ans";
			this->btn_ans->Size = System::Drawing::Size(52, 46);
			this->btn_ans->TabIndex = 0;
			this->btn_ans->Text = L"ANS";
			this->btn_ans->UseVisualStyleBackColor = true;
			this->btn_ans->Click += gcnew System::EventHandler(this, &MyForm::btn_ans_Click);
			// 
			// btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->Location = System::Drawing::Point(84, 466);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(52, 46);
			this->btn_0->TabIndex = 0;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_0_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_dot->Location = System::Drawing::Point(158, 466);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(52, 46);
			this->btn_dot->TabIndex = 0;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = true;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(236, 466);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(52, 46);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_sub
			// 
			this->btn_sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sub->Location = System::Drawing::Point(313, 466);
			this->btn_sub->Name = L"btn_sub";
			this->btn_sub->Size = System::Drawing::Size(52, 46);
			this->btn_sub->TabIndex = 0;
			this->btn_sub->Text = L"-";
			this->btn_sub->UseVisualStyleBackColor = true;
			this->btn_sub->Click += gcnew System::EventHandler(this, &MyForm::btn_sub_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mul->Location = System::Drawing::Point(236, 397);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(52, 46);
			this->btn_mul->TabIndex = 0;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = true;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_divide->Location = System::Drawing::Point(313, 397);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(52, 46);
			this->btn_divide->TabIndex = 0;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = true;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_equal->Location = System::Drawing::Point(236, 329);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(52, 46);
			this->btn_equal->TabIndex = 0;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = true;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_am
			// 
			this->btn_am->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_am->Location = System::Drawing::Point(313, 329);
			this->btn_am->Name = L"btn_am";
			this->btn_am->Size = System::Drawing::Size(52, 46);
			this->btn_am->TabIndex = 0;
			this->btn_am->Text = L"(-)";
			this->btn_am->UseVisualStyleBackColor = true;
			this->btn_am->Click += gcnew System::EventHandler(this, &MyForm::btn_am_Click);
			// 
			// btn_reset
			// 
			this->btn_reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_reset->Location = System::Drawing::Point(236, 259);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(52, 46);
			this->btn_reset->TabIndex = 0;
			this->btn_reset->Text = L"AC";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &MyForm::btn_reset_Click);
			// 
			// btn_del
			// 
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_del->Location = System::Drawing::Point(313, 259);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(52, 46);
			this->btn_del->TabIndex = 0;
			this->btn_del->Text = L"DEL";
			this->btn_del->UseVisualStyleBackColor = true;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// lbl_hienthi
			// 
			this->lbl_hienthi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lbl_hienthi->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbl_hienthi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hienthi->Location = System::Drawing::Point(0, 0);
			this->lbl_hienthi->Name = L"lbl_hienthi";
			this->lbl_hienthi->Size = System::Drawing::Size(405, 72);
			this->lbl_hienthi->TabIndex = 2;
			this->lbl_hienthi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_ketqua
			// 
			this->lbl_ketqua->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lbl_ketqua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ketqua->Location = System::Drawing::Point(3, 72);
			this->lbl_ketqua->Name = L"lbl_ketqua";
			this->lbl_ketqua->Size = System::Drawing::Size(402, 30);
			this->lbl_ketqua->TabIndex = 3;
			this->lbl_ketqua->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 524);
			this->Controls->Add(this->lbl_ketqua);
			this->Controls->Add(this->lbl_hienthi);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->btn_am);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_sub);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_ans);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


	private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cnt <= 1)
		lbl_hienthi->Text += "0";
	}
	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cnt <= 1)
			lbl_hienthi->Text += "1";

	}
	private: System::Void btn_2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cnt <= 1)
			lbl_hienthi->Text += "2";
	}
private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi-> Text += "3";
}
private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "4";
}
private: System::Void btn_5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "5";
}
private: System::Void btn_6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "6";
}
private: System::Void btn_7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "7";
}
private: System::Void btn_8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "8";
}
private: System::Void btn_9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1)
		lbl_hienthi->Text += "9";
}
private: System::Void btn_ans_Click(System::Object^ sender, System::EventArgs^ e) {
				 
	a = ConvertToDouble(lbl_ketqua->Text);
	lbl_ketqua->Text = "";
	lbl_hienthi->Text = a.ToString();
	cnt = 0;
	cntdot = 0;
}

private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = ConvertToString(lbl_hienthi->Text);
	if (cnt == 0 && s[s.size() - 1] != '.')
	{
		a = ConvertToDouble(lbl_hienthi->Text);
		lbl_hienthi->Text += "+";
		cntdot = 0;
		pheptoan = '+';
		cnt++;
	}
}
private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt <= 1 && cntdot == 0)
	{
		lbl_hienthi->Text += ".";
		cntdot++;
	}
}
private: System::Void btn_sub_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = ConvertToString(lbl_hienthi->Text);
	if (cnt == 0 && s[s.size() - 1] != '.')
	{
		a = ConvertToDouble(lbl_hienthi->Text);
		lbl_hienthi->Text += "-";
		cntdot = 0;
		pheptoan = '-';
		cnt++;
	}
}
private: System::Void btn_mul_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = ConvertToString(lbl_hienthi->Text);
	if (cnt == 0 && s[s.size() - 1] != '.')
	{
		a = ConvertToDouble(lbl_hienthi->Text);
		lbl_hienthi->Text += "*";
		cntdot = 0;
		pheptoan = '*';
		cnt++;
	}
}
private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s = ConvertToString(lbl_hienthi->Text);
	if (cnt == 0 && s[s.size() - 1] != '.')
	{
		a = ConvertToDouble(lbl_hienthi->Text);
		lbl_hienthi->Text += "/";
		cntdot = 0;
		pheptoan = '/';
		cnt++;
	}
}
private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt == 0) return;
	String^ s = lbl_hienthi->Text;
	int x = s->IndexOf(pheptoan);
	b = ConvertToDouble(s->Substring(x + 1, s->Length - x - 1));
	switch (pheptoan)
	{
	case '+':
		ketqua = a + b;
		lbl_ketqua->Text = ketqua.ToString();
		break;
	case '-':

		if (s[x] == s[x + 1])
		{
			ketqua = a + b;
		}
		else
			ketqua = a - b;
		lbl_ketqua->Text = ketqua.ToString();
		break;
	case '*':
		ketqua = a * b;
		lbl_ketqua->Text = ketqua.ToString();
		break;
	case '/':
		if (b != 0)
		{
			ketqua = a / b;
			lbl_ketqua->Text = ketqua.ToString();
		}
		else
		{
			lbl_ketqua->Text = "Math error";
		}
		break;

	}
	cnt++;
}
private: System::Void btn_am_Click(System::Object^ sender, System::EventArgs^ e) {
	lbl_hienthi->Text += "-";
}
private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
	cnt = 0;
	lbl_ketqua->Text = "";
	lbl_hienthi->Text = "";
}
private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s = lbl_hienthi->Text;
	if (s[s->Length - 1] == pheptoan)
	{
		cnt--;
		if (a != std::floor(a))
		{
			cntdot = 1;
		}
	}
	lbl_hienthi->Text = s->Substring(0, s->Length - 1);
}
};
};
