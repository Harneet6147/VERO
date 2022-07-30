#pragma once

namespace Veronica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for text_to_speech
	/// </summary>
	public ref class text_to_speech : public System::Windows::Forms::Form
	{
	public:
		text_to_speech(void)
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
		~text_to_speech()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb;

	private: System::Windows::Forms::Button^ Speak;
	private: System::Windows::Forms::Button^ pause;
	private: System::Windows::Forms::Button^ stop;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(text_to_speech::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb = (gcnew System::Windows::Forms::TextBox());
			this->Speak = (gcnew System::Windows::Forms::Button());
			this->pause = (gcnew System::Windows::Forms::Button());
			this->stop = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Castellar", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veronica";
			this->label1->Click += gcnew System::EventHandler(this, &text_to_speech::label1_Click);
			// 
			// tb
			// 
			this->tb->Location = System::Drawing::Point(12, 63);
			this->tb->Multiline = true;
			this->tb->Name = L"tb";
			this->tb->Size = System::Drawing::Size(502, 492);
			this->tb->TabIndex = 1;
			this->tb->TextChanged += gcnew System::EventHandler(this, &text_to_speech::tb_TextChanged);
			// 
			// Speak
			// 
			this->Speak->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Speak->Location = System::Drawing::Point(570, 93);
			this->Speak->Name = L"Speak";
			this->Speak->Size = System::Drawing::Size(91, 42);
			this->Speak->TabIndex = 2;
			this->Speak->Text = L"SPEAK";
			this->Speak->UseVisualStyleBackColor = false;
			this->Speak->Click += gcnew System::EventHandler(this, &text_to_speech::Speak_Click);
			// 
			// pause
			// 
			this->pause->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pause->Location = System::Drawing::Point(570, 141);
			this->pause->Name = L"pause";
			this->pause->Size = System::Drawing::Size(91, 42);
			this->pause->TabIndex = 3;
			this->pause->Text = L"PAUSE";
			this->pause->UseVisualStyleBackColor = false;
			this->pause->Click += gcnew System::EventHandler(this, &text_to_speech::button2_Click);
			// 
			// stop
			// 
			this->stop->BackColor = System::Drawing::SystemColors::ControlDark;
			this->stop->Location = System::Drawing::Point(570, 189);
			this->stop->Name = L"stop";
			this->stop->Size = System::Drawing::Size(91, 42);
			this->stop->TabIndex = 4;
			this->stop->Text = L"STOP";
			this->stop->UseVisualStyleBackColor = false;
			this->stop->Click += gcnew System::EventHandler(this, &text_to_speech::stop_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(520, 287);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 212);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// text_to_speech
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 559);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->stop);
			this->Controls->Add(this->pause);
			this->Controls->Add(this->Speak);
			this->Controls->Add(this->tb);
			this->Controls->Add(this->label1);
			this->Name = L"text_to_speech";
			this->Text = L"text_to_speech";
			this->Load += gcnew System::EventHandler(this, &text_to_speech::text_to_speech_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Speech::Synthesis::SpeechSynthesizer x;
		bool is_paused = false;
			

#pragma endregion
	private: System::Void text_to_speech_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_paused)
		{
			x.Resume();
			is_paused = false;
			pause->Text = "PAUSE";
		}
		else
		{
			x.Pause();
			is_paused = true;
			pause->Text = "RESUME";
		}

	}
private: System::Void Speak_Click(System::Object^ sender, System::EventArgs^ e) {
	if (is_paused)
	{
		x.Resume();
		is_paused = false;
		pause->Text = "PAUSE";
	}
	x.SpeakAsyncCancelAll();
	x.SpeakAsync(tb->Text);

}
private: System::Void stop_Click(System::Object^ sender, System::EventArgs^ e) {
	x.SpeakAsyncCancelAll();
}
private: System::Void tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
