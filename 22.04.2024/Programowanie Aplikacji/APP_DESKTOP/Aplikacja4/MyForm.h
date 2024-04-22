#pragma once

namespace Aplikacja4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ dodaj;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ odej;
	private: System::Windows::Forms::Button^ mnoz;
	private: System::Windows::Forms::Button^ dziel;
	private: System::Windows::Forms::Label^ label1;



	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dodaj = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->odej = (gcnew System::Windows::Forms::Button());
			this->mnoz = (gcnew System::Windows::Forms::Button());
			this->dziel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dodaj
			// 
			this->dodaj->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dodaj->Location = System::Drawing::Point(405, 115);
			this->dodaj->Name = L"dodaj";
			this->dodaj->Size = System::Drawing::Size(82, 67);
			this->dodaj->TabIndex = 0;
			this->dodaj->Text = L"+";
			this->dodaj->UseVisualStyleBackColor = false;
			this->dodaj->Click += gcnew System::EventHandler(this, &MyForm::dodaj_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(405, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(676, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 2;
			// 
			// odej
			// 
			this->odej->BackColor = System::Drawing::SystemColors::ControlDark;
			this->odej->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->odej->Location = System::Drawing::Point(516, 115);
			this->odej->Name = L"odej";
			this->odej->Size = System::Drawing::Size(82, 67);
			this->odej->TabIndex = 3;
			this->odej->Text = L"-";
			this->odej->UseVisualStyleBackColor = false;
			this->odej->Click += gcnew System::EventHandler(this, &MyForm::odej_Click);
			// 
			// mnoz
			// 
			this->mnoz->BackColor = System::Drawing::SystemColors::ControlDark;
			this->mnoz->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->mnoz->Location = System::Drawing::Point(627, 115);
			this->mnoz->Name = L"mnoz";
			this->mnoz->Size = System::Drawing::Size(82, 67);
			this->mnoz->TabIndex = 4;
			this->mnoz->Text = L"*";
			this->mnoz->UseVisualStyleBackColor = false;
			this->mnoz->Click += gcnew System::EventHandler(this, &MyForm::mnoz_Click);
			// 
			// dziel
			// 
			this->dziel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dziel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dziel->Location = System::Drawing::Point(729, 115);
			this->dziel->Name = L"dziel";
			this->dziel->Size = System::Drawing::Size(82, 67);
			this->dziel->TabIndex = 5;
			this->dziel->Text = L"/";
			this->dziel->UseVisualStyleBackColor = false;
			this->dziel->Click += gcnew System::EventHandler(this, &MyForm::dziel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(382, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 65);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Wynik Kalkulatora";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1165, 431);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dziel);
			this->Controls->Add(this->mnoz);
			this->Controls->Add(this->odej);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dodaj);
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void dodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	double liczba1 = Convert::ToDouble(textBox1->Text);
	double liczba2 = Convert::ToDouble(textBox2->Text);
	double wynik = liczba1 + liczba2;
	label1->Text = Convert::ToString("Dodawanie = " + wynik);
}
private: System::Void odej_Click(System::Object^ sender, System::EventArgs^ e) {
	double liczba1 = Convert::ToDouble(textBox1->Text);
	double liczba2 = Convert::ToDouble(textBox2->Text);
	double wynik = liczba1 - liczba2;
	label1->Text = Convert::ToString("Odejmowanie = " + wynik);
}
private: System::Void mnoz_Click(System::Object^ sender, System::EventArgs^ e) {
	double liczba1 = Convert::ToDouble(textBox1->Text);
	double liczba2 = Convert::ToDouble(textBox2->Text);
	double wynik = liczba1 * liczba2;
	label1->Text = Convert::ToString("mnozenie = " + wynik);
}
private: System::Void dziel_Click(System::Object^ sender, System::EventArgs^ e) {
	double liczba1 = Convert::ToDouble(textBox1->Text);
	double liczba2 = Convert::ToDouble(textBox2->Text);
	if (liczba2 !=0) {
		double wynik = liczba1 / liczba2;
		label1->Text = Convert::ToString("Dzielenie = " + wynik);
	}
	else {
		label1->Text = Convert::ToString("BOMBOCLAT!");
	}

}
};
}
