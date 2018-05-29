#pragma once
#include "global.h"
#include <stdio.h>
//#include <cstdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


namespace KURSWORK {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;


	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button16;


	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->Location = System::Drawing::Point(31, 26);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(502, 35);
			this->maskedTextBox1->TabIndex = 1;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox1_MaskInputRejected);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(548, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(459, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(459, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 41);
			this->button3->TabIndex = 5;
			this->button3->Text = L"(";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(459, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 41);
			this->button4->TabIndex = 4;
			this->button4->Text = L"sqrt";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(548, 189);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 41);
			this->button5->TabIndex = 7;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(548, 236);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 41);
			this->button6->TabIndex = 6;
			this->button6->Text = L"*";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(31, 236);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 41);
			this->button7->TabIndex = 9;
			this->button7->Text = L".";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(548, 95);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 41);
			this->button8->TabIndex = 8;
			this->button8->Text = L")";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(120, 236);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 41);
			this->button9->TabIndex = 10;
			this->button9->Text = L"CLEAR";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(31, 95);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 41);
			this->button10->TabIndex = 11;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(31, 142);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 41);
			this->button11->TabIndex = 12;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(209, 142);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 41);
			this->button12->TabIndex = 20;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(209, 189);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 41);
			this->button13->TabIndex = 19;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(120, 189);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 41);
			this->button14->TabIndex = 18;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(120, 95);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 41);
			this->button15->TabIndex = 17;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(209, 95);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(83, 41);
			this->button18->TabIndex = 14;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(120, 142);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(83, 41);
			this->button19->TabIndex = 13;
			this->button19->Text = L"5";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(209, 236);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(83, 41);
			this->button20->TabIndex = 22;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(31, 189);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(83, 41);
			this->button21->TabIndex = 21;
			this->button21->Text = L"7";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(548, 26);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 41);
			this->button16->TabIndex = 23;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(459, 283);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(83, 41);
			this->button17->TabIndex = 27;
			this->button17->Text = L"pi";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(459, 236);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(83, 41);
			this->button24->TabIndex = 28;
			this->button24->Text = L"e";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(548, 283);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(83, 41);
			this->button25->TabIndex = 29;
			this->button25->Text = L"^";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(697, 425);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "+";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "-";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + ")";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = "";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "/";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "*";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "sqrt(";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "(";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + ".";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "1";
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "7";
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "0";
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "2";
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "3";
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "4";
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "5";
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "6";
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "8";
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "9";
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "sin(";
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "cos(";
}
		 
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	FILE *Global;
	String ^cs;
	cs = maskedTextBox1->Text;
	Global = fopen("file1.dat", "w");
	maskedTextBox1->Text = "";
//	system("CLS");
	fwrite(&cs, sizeof(cs),1, Global);
  //  fclose(Global);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "e";
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "pow(";
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	maskedTextBox1->Text = maskedTextBox1->Text + "pi";
}
};
}
