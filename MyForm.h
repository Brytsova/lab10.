#pragma once
#using <Microsoft.VisualBasic.dll>

using namespace System::Collections::Generic;
namespace lab10 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(175, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(595, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Створити чергу цілих чисел. Знайти середнє арифметичне елементів черги.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть розміри черги ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(201, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(16, 124);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(285, 384);
			this->listBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 57);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Додати елементи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(307, 268);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 65);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Видалити елементи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(307, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 46);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(436, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 384);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 654);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// Оголошення черги
		System::Collections::Generic::Queue<int> myQueue1;
		int lastAddedValue;
		bool isQueueInitialized = false; // ініціалізація черги
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized) {
			isQueueInitialized = true;
		}

		// Отримуємо розмір черги з textBox1
		int size = Convert::ToInt32(textBox1->Text);
		if (myQueue1.Count < size) {
			// Створюємо нове вікно для введення числа
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Введіть елемент черги";

			// Створюємо текстове поле для введення
			TextBox^ inputTextBox = gcnew TextBox();
			inputTextBox->Location = System::Drawing::Point(20, 20);
			inputTextBox->Width = 200;
			inputForm->Controls->Add(inputTextBox);

			// Створюємо кнопку для підтвердження введення
			Button^ okButton = gcnew Button();
			okButton->Text = "ОК";
			okButton->Location = System::Drawing::Point(20, 60);
			okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->Controls->Add(okButton);

			// Показуємо форму для введення
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ valueInput = inputTextBox->Text;
				if (valueInput == "") {
					return;
				}
				try {
					int inputValue = Convert::ToInt32(valueInput);

					myQueue1.Enqueue(inputValue);
					listBox1->Items->Add(inputValue.ToString());
					lastAddedValue = inputValue;
				}
				catch (FormatException^) {
					MessageBox::Show("Введено не число! Спробуйте ще раз.");
				}
			}
		}
		else {
			listBox1->Items->Add("Досягнуто ліміт чисел");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isQueueInitialized)
		{
			if (myQueue1.Count > 0)
			{
				myQueue1.Dequeue();
				listBox1->Items->Clear();
				for each (int value in myQueue1)
				{
					listBox1->Items->Add(value.ToString());
				}
			}
			else
			{
				listBox1->Items->Add("Черга порожня");
			}
		}
		else
		{
			listBox1->Items->Add("Черга ще не була ініціалізована");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myQueue1.Count > 0) {
			int sum = 0;
			int count = myQueue1.Count;

			// Обчислення суми всіх елементів черги
			for each (int value in myQueue1) {
				sum += value;
			}

			// Обчислення середнього арифметичного
			double average = static_cast<double>(sum) / count;

			// Виведення результату
			MessageBox::Show("Середнє арифметичне: " + average.ToString());
		}
		else {
			MessageBox::Show("Черга порожня, не можна обчислити середнє арифметичне.");
		}
	}
	};
}