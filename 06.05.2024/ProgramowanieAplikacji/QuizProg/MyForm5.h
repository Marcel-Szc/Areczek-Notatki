#pragma once

namespace QuizProg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	private:
		Label^ label1;
	public:
		MyForm5(String^ poprawne)
		{
			InitializeComponent();
			label1 = gcnew Label();
			label1->Text = poprawne;
			label1->Location = System::Drawing::Point(10, 10);
			Controls->Add(label1);
		}
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			this->SuspendLayout();
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1454, 623);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
