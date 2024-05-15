#pragma once

namespace ProWin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ rezLabel;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_change_znak;
	private: System::Windows::Forms::Button^ btn_procent;




	private: System::Windows::Forms::Button^ btn_delenie;
	private: System::Windows::Forms::Button^ btn_umnoj;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ btn_summ;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btn_ravno;
	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ button21;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_ravno = false;

	protected:






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rezLabel = (gcnew System::Windows::Forms::Label());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_change_znak = (gcnew System::Windows::Forms::Button());
			this->btn_procent = (gcnew System::Windows::Forms::Button());
			this->btn_delenie = (gcnew System::Windows::Forms::Button());
			this->btn_umnoj = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->btn_summ = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btn_ravno = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rezLabel
			// 
			this->rezLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rezLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->rezLabel->Location = System::Drawing::Point(30, 13);
			this->rezLabel->Name = L"rezLabel";
			this->rezLabel->Size = System::Drawing::Size(259, 65);
			this->rezLabel->TabIndex = 1;
			this->rezLabel->Text = L"0";
			this->rezLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::DimGray;
			this->btn_clear->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_clear->Location = System::Drawing::Point(8, 120);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(65, 55);
			this->btn_clear->TabIndex = 2;
			this->btn_clear->Text = L"AC";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_change_znak
			// 
			this->btn_change_znak->BackColor = System::Drawing::Color::DimGray;
			this->btn_change_znak->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_change_znak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_change_znak->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_change_znak->Location = System::Drawing::Point(79, 120);
			this->btn_change_znak->Name = L"btn_change_znak";
			this->btn_change_znak->Size = System::Drawing::Size(65, 55);
			this->btn_change_znak->TabIndex = 3;
			this->btn_change_znak->Text = L"-/+";
			this->btn_change_znak->UseVisualStyleBackColor = false;
			this->btn_change_znak->Click += gcnew System::EventHandler(this, &MyForm::btn_change_znak_Click);
			// 
			// btn_procent
			// 
			this->btn_procent->BackColor = System::Drawing::Color::DimGray;
			this->btn_procent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_procent->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_procent->Location = System::Drawing::Point(150, 120);
			this->btn_procent->Name = L"btn_procent";
			this->btn_procent->Size = System::Drawing::Size(65, 55);
			this->btn_procent->TabIndex = 4;
			this->btn_procent->Text = L"%";
			this->btn_procent->UseVisualStyleBackColor = false;
			this->btn_procent->Click += gcnew System::EventHandler(this, &MyForm::btn_procent_Click);
			// 
			// btn_delenie
			// 
			this->btn_delenie->BackColor = System::Drawing::Color::Coral;
			this->btn_delenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delenie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_delenie->Location = System::Drawing::Point(221, 120);
			this->btn_delenie->Name = L"btn_delenie";
			this->btn_delenie->Size = System::Drawing::Size(65, 55);
			this->btn_delenie->TabIndex = 5;
			this->btn_delenie->Text = L"/";
			this->btn_delenie->UseVisualStyleBackColor = false;
			this->btn_delenie->Click += gcnew System::EventHandler(this, &MyForm::btn_delenie_Click);
			// 
			// btn_umnoj
			// 
			this->btn_umnoj->BackColor = System::Drawing::Color::Coral;
			this->btn_umnoj->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_umnoj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_umnoj->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_umnoj->Location = System::Drawing::Point(220, 187);
			this->btn_umnoj->Name = L"btn_umnoj";
			this->btn_umnoj->Size = System::Drawing::Size(65, 55);
			this->btn_umnoj->TabIndex = 9;
			this->btn_umnoj->Text = L"*";
			this->btn_umnoj->UseVisualStyleBackColor = false;
			this->btn_umnoj->Click += gcnew System::EventHandler(this, &MyForm::btn_umnoj_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SlateGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(149, 187);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SlateGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(78, 187);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SlateGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(8, 187);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 6;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::Coral;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_minus->Location = System::Drawing::Point(221, 254);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 55);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::SlateGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(150, 254);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SlateGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(79, 254);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 55);
			this->button12->TabIndex = 11;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::SlateGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(9, 254);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 55);
			this->button13->TabIndex = 10;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_summ
			// 
			this->btn_summ->BackColor = System::Drawing::Color::Coral;
			this->btn_summ->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_summ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_summ->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_summ->Location = System::Drawing::Point(220, 321);
			this->btn_summ->Name = L"btn_summ";
			this->btn_summ->Size = System::Drawing::Size(65, 55);
			this->btn_summ->TabIndex = 17;
			this->btn_summ->Text = L"+";
			this->btn_summ->UseVisualStyleBackColor = false;
			this->btn_summ->Click += gcnew System::EventHandler(this, &MyForm::btn_summ_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SlateGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(149, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::SlateGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(78, 321);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 15;
			this->button16->Text = L"2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::SlateGray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(8, 321);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(65, 55);
			this->button17->TabIndex = 14;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_ravno
			// 
			this->btn_ravno->BackColor = System::Drawing::Color::Coral;
			this->btn_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ravno->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_ravno->Location = System::Drawing::Point(221, 389);
			this->btn_ravno->Name = L"btn_ravno";
			this->btn_ravno->Size = System::Drawing::Size(65, 55);
			this->btn_ravno->TabIndex = 21;
			this->btn_ravno->Text = L"=";
			this->btn_ravno->UseVisualStyleBackColor = false;
			this->btn_ravno->Click += gcnew System::EventHandler(this, &MyForm::btn_ravno_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::SlateGray;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_dot->Location = System::Drawing::Point(150, 389);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::SlateGray;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(9, 389);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(134, 55);
			this->button21->TabIndex = 18;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(301, 467);
			this->Controls->Add(this->btn_ravno);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->btn_summ);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_umnoj);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_delenie);
			this->Controls->Add(this->btn_procent);
			this->Controls->Add(this->btn_change_znak);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rezLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(10, 10);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->rezLabel->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->rezLabel->Text == "0" || is_ravno) {
			this->rezLabel->Text = button->Text;
			this->is_ravno = false;
		}
		else
			//this->rezLabel->Text = this->rezLabel->Text + button->Text;
			this->rezLabel->Text += button->Text;


	}
	private: System::Void btn_delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void btn_umnoj_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_summ_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void math_action(Char action) {
		this->first_num = System::Convert::ToDouble(this->rezLabel->Text);
		this->user_action = action;
		this->rezLabel->Text = "0";
	}
	private: System::Void btn_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->rezLabel->Text);
		float rez;
		switch (this->user_action)
		{
		case '+': rez=this->first_num + second; break;
		case '-': rez=this->first_num - second; break;
		case '*': rez=this->first_num * second; break;
		case '%': rez = (this->first_num * second)/100; break;

		case '/': 
			if (second == 0) {
				rez = 0;
				this->rezLabel->ForeColor = Color::Red;
				MessageBox::Show(this, "ƒействие (ƒеление на 0) запрещено!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else	
				rez=this->first_num / second; 
			break;
		}
		this->is_ravno = true;
		this->rezLabel->Text = System::Convert::ToString(rez);
	}
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->rezLabel->Text = "0";
		this->rezLabel->ForeColor = Color::White;
		this->first_num = 0;
		this->is_ravno = false;

	}
	private: System::Void btn_change_znak_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->rezLabel->Text);
		num *= -1;
		this->rezLabel->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_procent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->rezLabel->Text;
		if(!text->Contains(","))
			this->rezLabel->Text =  text + ",";
	}
};
}
