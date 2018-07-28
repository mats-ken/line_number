#pragma once


namespace line_number {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	protected: 

	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(779, 618);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 636);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add line number";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 636);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Select all";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(369, 636);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 31);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Copy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 636);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 31);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Paste";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(579, 636);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(212, 31);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Full-auto";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 679);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int no = 1;
				 int cur = 0;

				 textBox1->Text = no++ + ": " + textBox1->Text;

				 while(cur = textBox1->Text->IndexOf("\n", cur) + 1, 1 <= cur)
					 textBox1->Text = textBox1->Text->Insert(cur, no++ + ": ");
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->SelectAll();
				 textBox1->Focus();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Copy();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Paste();
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->SelectAll();
				 textBox1->Paste();

				 int no = 1;
				 int cur = 0;

				 textBox1->Text = no++ + ": " + textBox1->Text;

				 while(cur = textBox1->Text->IndexOf("\n", cur) + 1, 1 <= cur)
					 textBox1->Text = textBox1->Text->Insert(cur, no++ + ": ");

				 textBox1->SelectAll();
				 textBox1->Copy();
			 }
};
}

