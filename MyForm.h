#pragma once

#include <cmath>
#include <iostream>

#define PI 3.14159265

namespace Universal {

	using namespace System;
	using namespace System::Linq;
	using namespace System::Security::Cryptography;
	using namespace System::Timers;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::IO; 
	using namespace System::Xml;
	using namespace System::Xml::Schema;
	using namespace System::Threading;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
			all_tags = gcnew Dictionary<String^, UniversalTag^>();
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
	private: System::Windows::Forms::Button^ start_btn;
	protected:
	private: System::Windows::Forms::Button^ stop_btn;

	private: System::Windows::Forms::ComboBox^ signal_type;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::ComboBox^ data_type;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ max_value;
	private: System::Windows::Forms::TextBox^ time_offset;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ min_value;
	private: System::Windows::Forms::TextBox^ period;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;





	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ delete_tag_btn;


	private: System::Windows::Forms::Button^ generate_universal_btn;
	private: System::Windows::Forms::Button^ save_tag_btn;

	private: System::Windows::Forms::TextBox^ connect_tb;
	private: System::ComponentModel::BackgroundWorker^ is_blocked_bgw;





	private: System::Windows::Forms::TextBox^ tag_name_tb;
	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::IContainer^ components;

		   ref struct UniversalTag
		   {
			   String^ data_type = "";
			   String^ signal_type = "";
			   double min_value = 0;
			   double max_value = 0;
			   double period = 0;
			   double time_offset = 0;
			   Dictionary<int, double>^ graph;
		   };








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

		String^ frame = "";
		int SubprogChanger = 0;
		int FrameNumberChanger = 1;
		Dictionary<String^, UniversalTag^>^ all_tags;
		int BufferSize = 6000;
		int main_prog_lines = 0;
		int sub_prog1_lines = 0;
		int sub_prog2_lines = 0;
		int sub_prog3_lines = 0;
		int total_lines = 0;
		bool mpr = false;
		bool sp1r = false;
		bool sp2r = false;
		bool sp3r = false;
private: System::Windows::Forms::StatusStrip^ statusStrip1;
private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
private: System::Windows::Forms::TextBox^ server_ip;
private: System::Windows::Forms::TextBox^ protocol_id;


private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;



private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::Button^ save_config_btn;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::Button^ load_config_btn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Button^ reset_btn;




private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	  

		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->stop_btn = (gcnew System::Windows::Forms::Button());
			this->signal_type = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->data_type = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->max_value = (gcnew System::Windows::Forms::TextBox());
			this->time_offset = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->min_value = (gcnew System::Windows::Forms::TextBox());
			this->period = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->delete_tag_btn = (gcnew System::Windows::Forms::Button());
			this->generate_universal_btn = (gcnew System::Windows::Forms::Button());
			this->save_tag_btn = (gcnew System::Windows::Forms::Button());
			this->connect_tb = (gcnew System::Windows::Forms::TextBox());
			this->is_blocked_bgw = (gcnew System::ComponentModel::BackgroundWorker());
			this->tag_name_tb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->server_ip = (gcnew System::Windows::Forms::TextBox());
			this->protocol_id = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->save_config_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->load_config_btn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// start_btn
			// 
			this->start_btn->Location = System::Drawing::Point(12, 581);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(66, 23);
			this->start_btn->TabIndex = 0;
			this->start_btn->Text = L"Start";
			this->start_btn->UseVisualStyleBackColor = true;
			this->start_btn->Click += gcnew System::EventHandler(this, &MyForm::start_btn_Click);
			// 
			// stop_btn
			// 
			this->stop_btn->Enabled = false;
			this->stop_btn->Location = System::Drawing::Point(84, 581);
			this->stop_btn->Name = L"stop_btn";
			this->stop_btn->Size = System::Drawing::Size(61, 23);
			this->stop_btn->TabIndex = 1;
			this->stop_btn->Text = L"Pause";
			this->stop_btn->UseVisualStyleBackColor = true;
			this->stop_btn->Click += gcnew System::EventHandler(this, &MyForm::stop_btn_Click);
			// 
			// signal_type
			// 
			this->signal_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->signal_type->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->signal_type->FormattingEnabled = true;
			this->signal_type->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Sinusoid", L"Square", L"Constant", L"Custom" });
			this->signal_type->Location = System::Drawing::Point(102, 21);
			this->signal_type->Name = L"signal_type";
			this->signal_type->Size = System::Drawing::Size(95, 21);
			this->signal_type->TabIndex = 3;
			this->signal_type->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::signal_type_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(102, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Signal Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Data Type";
			// 
			// data_type
			// 
			this->data_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->data_type->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->data_type->FormattingEnabled = true;
			this->data_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bool", L"Numeric", L"String" });
			this->data_type->Location = System::Drawing::Point(3, 21);
			this->data_type->Name = L"data_type";
			this->data_type->Size = System::Drawing::Size(93, 21);
			this->data_type->TabIndex = 7;
			this->data_type->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::data_type_SelectedIndexChanged);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.5F)));
			this->tableLayoutPanel2->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->signal_type, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->data_type, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.27778F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.72222F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(200, 47);
			this->tableLayoutPanel2->TabIndex = 9;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.5F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.5F)));
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->max_value, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->time_offset, 1, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(6, 74);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.27778F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.72222F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(200, 47);
			this->tableLayoutPanel3->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Max Value";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(102, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Time Offset";
			// 
			// max_value
			// 
			this->max_value->Enabled = false;
			this->max_value->Location = System::Drawing::Point(3, 21);
			this->max_value->Name = L"max_value";
			this->max_value->Size = System::Drawing::Size(93, 20);
			this->max_value->TabIndex = 7;
			// 
			// time_offset
			// 
			this->time_offset->Enabled = false;
			this->time_offset->Location = System::Drawing::Point(102, 21);
			this->time_offset->Name = L"time_offset";
			this->time_offset->Size = System::Drawing::Size(95, 20);
			this->time_offset->TabIndex = 8;
			this->time_offset->Text = L"0";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.5F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.5F)));
			this->tableLayoutPanel4->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->min_value, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->period, 1, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(6, 21);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.27778F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.72222F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(200, 47);
			this->tableLayoutPanel4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Min Value";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(102, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Period";
			// 
			// min_value
			// 
			this->min_value->Enabled = false;
			this->min_value->Location = System::Drawing::Point(3, 21);
			this->min_value->Name = L"min_value";
			this->min_value->Size = System::Drawing::Size(93, 20);
			this->min_value->TabIndex = 7;
			// 
			// period
			// 
			this->period->Enabled = false;
			this->period->Location = System::Drawing::Point(102, 21);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(95, 20);
			this->period->TabIndex = 8;
			this->period->Text = L"60";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel4);
			this->groupBox1->Controls->Add(this->tableLayoutPanel3);
			this->groupBox1->Location = System::Drawing::Point(12, 408);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(212, 128);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parameters";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel2);
			this->groupBox2->Location = System::Drawing::Point(12, 330);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(212, 72);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Signal";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(602, 215);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MyForm::dataGridView1_RowsAdded);
			this->dataGridView1->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dataGridView1_RowsRemoved);
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView1_SelectionChanged);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tag Name";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Data Type";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 85;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Signal Type";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 87;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Current Value";
			this->Column3->MaxInputLength = 20;
			this->Column3->Name = L"Column3";
			// 
			// delete_tag_btn
			// 
			this->delete_tag_btn->Enabled = false;
			this->delete_tag_btn->Location = System::Drawing::Point(620, 43);
			this->delete_tag_btn->Name = L"delete_tag_btn";
			this->delete_tag_btn->Size = System::Drawing::Size(139, 23);
			this->delete_tag_btn->TabIndex = 19;
			this->delete_tag_btn->Text = L"Delete Tag";
			this->delete_tag_btn->UseVisualStyleBackColor = true;
			this->delete_tag_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_tag_btn_Click);
			// 
			// generate_universal_btn
			// 
			this->generate_universal_btn->Enabled = false;
			this->generate_universal_btn->Location = System::Drawing::Point(620, 235);
			this->generate_universal_btn->Name = L"generate_universal_btn";
			this->generate_universal_btn->Size = System::Drawing::Size(139, 23);
			this->generate_universal_btn->TabIndex = 22;
			this->generate_universal_btn->Text = L"Generate Universal Preset";
			this->generate_universal_btn->UseVisualStyleBackColor = true;
			this->generate_universal_btn->Click += gcnew System::EventHandler(this, &MyForm::generate_universal_btn_Click);
			// 
			// save_tag_btn
			// 
			this->save_tag_btn->Location = System::Drawing::Point(12, 542);
			this->save_tag_btn->Name = L"save_tag_btn";
			this->save_tag_btn->Size = System::Drawing::Size(102, 23);
			this->save_tag_btn->TabIndex = 23;
			this->save_tag_btn->Text = L"Save Tag";
			this->save_tag_btn->UseVisualStyleBackColor = true;
			this->save_tag_btn->Click += gcnew System::EventHandler(this, &MyForm::save_tag_btn_Click);
			// 
			// connect_tb
			// 
			this->connect_tb->Location = System::Drawing::Point(230, 581);
			this->connect_tb->Name = L"connect_tb";
			this->connect_tb->Size = System::Drawing::Size(80, 20);
			this->connect_tb->TabIndex = 25;
			this->connect_tb->Text = L"Not connected";
			// 
			// is_blocked_bgw
			// 
			this->is_blocked_bgw->WorkerReportsProgress = true;
			this->is_blocked_bgw->WorkerSupportsCancellation = true;
			this->is_blocked_bgw->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::is_blocked_bgw_DoWork);
			this->is_blocked_bgw->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &MyForm::is_blocked_bgw_ProgressChanged);
			this->is_blocked_bgw->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm::is_blocked_bgw_RunWorkerCompleted);
			// 
			// tag_name_tb
			// 
			this->tag_name_tb->Location = System::Drawing::Point(21, 294);
			this->tag_name_tb->Name = L"tag_name_tb";
			this->tag_name_tb->Size = System::Drawing::Size(199, 20);
			this->tag_name_tb->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Tag Name";
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->MajorGrid->Interval = 0;
			chartArea1->AxisX->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->MajorTickMark->Interval = 0;
			chartArea1->AxisX->MajorTickMark->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->MajorTickMark->LineColor = System::Drawing::Color::DimGray;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->MajorGrid->Interval = 0;
			chartArea1->AxisY->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->MajorTickMark->Interval = 0;
			chartArea1->AxisY->MajorTickMark->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->MajorTickMark->LineColor = System::Drawing::Color::DimGray;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(230, 330);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Value";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(529, 245);
			this->chart1->TabIndex = 29;
			this->chart1->Text = L"chart1";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 607);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1113, 22);
			this->statusStrip1->TabIndex = 32;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// server_ip
			// 
			this->server_ip->Location = System::Drawing::Point(75, 16);
			this->server_ip->Name = L"server_ip";
			this->server_ip->Size = System::Drawing::Size(145, 20);
			this->server_ip->TabIndex = 33;
			this->server_ip->Text = L"localhost";
			// 
			// protocol_id
			// 
			this->protocol_id->Location = System::Drawing::Point(325, 17);
			this->protocol_id->Name = L"protocol_id";
			this->protocol_id->Size = System::Drawing::Size(119, 20);
			this->protocol_id->TabIndex = 34;
			this->protocol_id->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Server IP:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(256, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Protocol ID:";
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// save_config_btn
			// 
			this->save_config_btn->Enabled = false;
			this->save_config_btn->Location = System::Drawing::Point(620, 191);
			this->save_config_btn->Name = L"save_config_btn";
			this->save_config_btn->Size = System::Drawing::Size(139, 23);
			this->save_config_btn->TabIndex = 37;
			this->save_config_btn->Text = L"Save Configuration";
			this->save_config_btn->UseVisualStyleBackColor = true;
			this->save_config_btn->Click += gcnew System::EventHandler(this, &MyForm::save_config_btn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1113, 24);
			this->menuStrip1->TabIndex = 38;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// load_config_btn
			// 
			this->load_config_btn->Location = System::Drawing::Point(620, 162);
			this->load_config_btn->Name = L"load_config_btn";
			this->load_config_btn->Size = System::Drawing::Size(139, 23);
			this->load_config_btn->TabIndex = 39;
			this->load_config_btn->Text = L"Load Configuration";
			this->load_config_btn->UseVisualStyleBackColor = true;
			this->load_config_btn->Click += gcnew System::EventHandler(this, &MyForm::load_config_btn_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(765, 79);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(336, 496);
			this->richTextBox1->TabIndex = 40;
			this->richTextBox1->Text = L"";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(766, 48);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 17);
			this->checkBox1->TabIndex = 41;
			this->checkBox1->Text = L"Enable NC mode";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// reset_btn
			// 
			this->reset_btn->Location = System::Drawing::Point(151, 581);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(67, 23);
			this->reset_btn->TabIndex = 42;
			this->reset_btn->Text = L"Reset";
			this->reset_btn->UseVisualStyleBackColor = true;
			this->reset_btn->Click += gcnew System::EventHandler(this, &MyForm::reset_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 629);
			this->Controls->Add(this->reset_btn);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->load_config_btn);
			this->Controls->Add(this->save_config_btn);
			this->Controls->Add(this->delete_tag_btn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->protocol_id);
			this->Controls->Add(this->server_ip);
			this->Controls->Add(this->stop_btn);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->start_btn);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tag_name_tb);
			this->Controls->Add(this->connect_tb);
			this->Controls->Add(this->save_tag_btn);
			this->Controls->Add(this->generate_universal_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Universal Emulator";
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void SetTextDelegateConnect(int connect) {
	if (connect == 0) {
		connect_tb->Text = "Connected";
		connect_tb->BackColor = Color::LawnGreen;
	}
	else if(connect == 1){
		connect_tb->Text = "Not connected";
		connect_tb->BackColor = Color::Salmon;
	}
	else {
		connect_tb->Text = "Stopped";
		connect_tb->BackColor = Color::White;
	}
}

private: System::Void GetMachineIsBlocked() {
	try {
		HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create("http://" + GetServerIp() + ":8080/IndustryManagment/WebIntegration/GetIsMonitoringBlocked?machine_id=" + GetProtocolId()));
		HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());

		StreamReader^ stream = gcnew StreamReader(response->GetResponseStream());

		if (stream->ReadToEnd() == "0") {
			connect_tb->Invoke(gcnew System::Action<int>(this, &MyForm::SetTextDelegateConnect), 0);
		}
		else {
			connect_tb->Invoke(gcnew System::Action<int>(this, &MyForm::SetTextDelegateConnect), 1);
		}
	}
	catch (...) {
		connect_tb->Invoke(gcnew System::Action<int>(this, &MyForm::SetTextDelegateConnect), 1);
	}
}

private: System::Void delete_tag_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int del = dataGridView1->SelectedCells[0]->RowIndex;
	all_tags->Remove(dataGridView1->SelectedCells[0]->Value->ToString());
	dataGridView1->Rows->RemoveAt(del);
}

private: System::String^ MakeListParams() {
	StringBuilder^ list = gcnew StringBuilder("[");
	for each (DataGridViewRow ^ row in dataGridView1->Rows) {
		list->Append(R"({"Key":")");
		list->Append(row->Cells[0]->Value);
		list->Append("\",");
		list->Append(R"("Value":")");
		list->Append(row->Cells[3]->Value);
		list->Append("\"}");
		if (row->Index < (dataGridView1->RowCount - 1)) {
			list->Append(",");
		}
	}
	list->Append("]");
	return list->ToString();
}

private: System::Void data_type_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (data_type->SelectedIndex == 0) {
		min_value->Text = "0";
		max_value->Text = "1";
		signal_type->Text = "";
		signal_type->Items->Clear();
		signal_type->Items->Add("Square");
		signal_type->Items->Add("Random");
		signal_type->Items->Add("Constant");
		min_value->Enabled = false;
		max_value->Enabled = false;
	}
	if (data_type->SelectedIndex == 1) {
		min_value->Text = "0";
		max_value->Text = "30";
		signal_type->Items->Clear();
		signal_type->Text = "";
		signal_type->Items->Add("Sinusoid");
		signal_type->Items->Add("Square");
		signal_type->Items->Add("Random");
		signal_type->Items->Add("Constant");
	}
	if (data_type->SelectedIndex == 2) {
		min_value->Text = "0";
		max_value->Text = "0";
		signal_type->Text = "";
		signal_type->Items->Clear();
		signal_type->Items->Add("Constant");
		min_value->Enabled = false;
		max_value->Enabled = false;
	}
}
private: System::Void signal_type_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (data_type->SelectedIndex == 0) {
		if (signal_type->Text == "Square" || signal_type->Text == "Random") {
			period->Enabled = true;
			time_offset->Enabled = true;
		}
		else {
			period->Enabled = false;
			time_offset->Enabled = false;
			period->Text = "60";
			time_offset->Text = "0";
		}
	}
	else if (data_type->SelectedIndex == 1) {
		if(signal_type->SelectedIndex != 3) {
				min_value->Enabled = true;
				max_value->Enabled = true;
				period->Enabled = true;
				time_offset->Enabled = true;
		}
		else {
			min_value->Enabled = false;
			max_value->Enabled = false;
			period->Enabled = false;
			time_offset->Enabled = false;
		}
	}
	else if (data_type->SelectedIndex == 2) {
		period->Enabled = false;
		time_offset->Enabled = false;
		min_value->Enabled = false;
		max_value->Enabled = false;
	}
}

private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Enabled = false;
	toolStripStatusLabel1->BackColor = Color::White;
	toolStripStatusLabel1->Text = "";
	is_blocked_bgw->RunWorkerAsync();
	start_btn->Enabled = false;
	stop_btn->Enabled = true;
}
private: System::Void stop_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Enabled = true;
	is_blocked_bgw->CancelAsync();
	connect_tb->Invoke(gcnew System::Action<int>(this, &MyForm::SetTextDelegateConnect), 2);
	WaitBgw();
	
}
private: System::Void is_blocked_bgw_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	while (!is_blocked_bgw->CancellationPending)
	{
		GetMachineIsBlocked();
		DataStream();
		PostText();
		UpdateChangers();
		Thread::Sleep(1000);
		is_blocked_bgw->ReportProgress(1);
	}
}
private: System::Void is_blocked_bgw_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e) {
	UpdateGraph(all_tags);

}

private: System::String^ GetServerIp() {
	try {
		String^ server_ip_value_out = server_ip->Text;
		return server_ip_value_out;
	}
	catch (FormatException^) {
	}
}

private: System::String^ GetProtocolId() {
	try {
		String^ protocol_id_value_out = protocol_id->Text;
		return protocol_id_value_out;
	}
	catch (FormatException^) {
	}
}

private: String^ GetTagName() {
	try {
		String^ tag_name_value_out = tag_name_tb->Text;
		return tag_name_value_out;
	}
	catch (FormatException^) {
	}
}

private: String^ GetDataType() {
	try {
		String^ data_type_value_out = data_type->Text;
		return data_type_value_out;
	}
	catch (FormatException^) {
	}
}

private: String^ GetSignalType() {
	try {
		String^ signal_type_value_out = signal_type->Text;
		return signal_type_value_out;
	}
	catch (FormatException^) {
	}
}

private: double GetTimeOffset() {
	try {
		double time_offset_value_out = double::Parse(time_offset->Text);
		return time_offset_value_out;
	}
	catch (FormatException^) {
		return 0;
	}
}

private: double GetPeriod() {
	try {
		double period_value_out = double::Parse(period->Text);
		return period_value_out;
	}
	catch (FormatException^) {
		return 60;
	}
}

private: double GetMaxValue() {
	try {
		double max_value_out = double::Parse(max_value->Text);
		return max_value_out;
	}
	catch (FormatException^) {
		return 1;
	}
}

private: double GetMinValue() {
	try {
		double min_value_out = double::Parse(min_value->Text);
		return min_value_out;
		Console::WriteLine(min_value_out);
	}
	catch (FormatException^) {
		return 0;
	}
}

private: System::Void is_blocked_bgw_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
	Console::Write("complete");
}

private: System::Void DataStream() {
	try {
		HTTP_POST("http://" + GetServerIp() + ":8080/IndustryManagment/WebIntegration/PostUniversalMonitoringDataJson", R"({"MachineIntegrationId":)" + GetProtocolId() + R"(, "UseInnerId":"true", "ListValues":)" + MakeListParams() + "})");
	}
	catch (...) {
		connect_tb->Invoke(gcnew System::Action<int>(this, &MyForm::SetTextDelegateConnect), 1);
		Console::WriteLine("Error post");
	}
}


System::String^ HTTP_POST(System::String^ link, System::String^ param) {
	cli::array<Byte>^ buffer = Encoding::UTF8->GetBytes(param);
	System::Net::HttpWebRequest^ request = dynamic_cast<System::Net::HttpWebRequest^>(System::Net::WebRequest::Create(link));
	request->Method = "POST";
	request->ContentType = "application/json";
	System::IO::Stream^ stream = request->GetRequestStream();
	stream->Write(buffer, 0, buffer->Length);
	stream->Flush();
	stream->Close();

	//read the response  
	System::Net::HttpWebResponse^ response = dynamic_cast<System::Net::HttpWebResponse^>(request->GetResponse());
	Stream^ dataStream = response->GetResponseStream();
	StreamReader^ reader = gcnew StreamReader(dataStream);
	System::String^ responseFromServer = reader->ReadToEnd();
	response->Close();
	return System::Convert::ToString(responseFromServer);
}

private: bool Validation() {
	bool result = true;

	tag_name_tb->BackColor = Color::White;
	data_type->BackColor = Color::White;
	signal_type->BackColor = Color::White;
	min_value->BackColor = Color::White;
	max_value->BackColor = Color::White;
	period->BackColor = Color::White;
	time_offset->BackColor = Color::White;

	if (GetTagName() == "") {
		tag_name_tb->BackColor = Color::Salmon;
		result = false;
	}
	if (GetDataType() == "") {
		data_type->BackColor = Color::Salmon;
		result = false;
	}
	if (GetSignalType() == "") {
		signal_type->BackColor = Color::Salmon;
		result = false;
	}
	if (GetMinValue().ToString() == "") {
		min_value->BackColor = Color::Salmon;
		result = false;
	}
	if (GetMaxValue().ToString() == "") {
		max_value->BackColor = Color::Salmon;
		result = false;
	}
	if (GetPeriod().ToString() == "") {
		period->BackColor = Color::Salmon;

	}
	if (GetTimeOffset().ToString() == "") {
		time_offset->BackColor = Color::Salmon;
		result = false;
	}
	return result;
}

private: System::Void save_tag_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "";
	toolStripStatusLabel1->BackColor = Color::White;
	if (Validation()) {
		if (all_tags->ContainsKey(tag_name_tb->Text)) {
			tag_name_tb->BackColor = Color::Salmon;
			toolStripStatusLabel1->BackColor = Color::Salmon;
			toolStripStatusLabel1->Text = "A tag with the same name already exists";
		}
		else {
			toolStripStatusLabel1->Text = "";
			UniversalTag^ tag = gcnew UniversalTag();

			tag->data_type = data_type->Text;
			tag->signal_type = signal_type->Text;
			tag->min_value = GetMinValue();
			tag->max_value = GetMaxValue();
			tag->period = GetPeriod();
			tag->time_offset = GetTimeOffset();
			if (tag->signal_type == "Sinusoid") {
				tag->graph = DrawInitGraphSin();
			}
			if (tag->signal_type == "Random") {
				tag->graph = DrawInitGraphRand();
			}
			if (tag->signal_type == "Constant") {
				tag->graph = DrawInitGraphConstant();
			}
			if (tag->signal_type == "Square") {
				tag->graph = DrawInitGraphSquare();
			}
			all_tags->Add(GetTagName(), tag);
			array <String^>^ tag_ = { GetTagName(), GetDataType(), GetSignalType(), "0"};
			dataGridView1->Rows->Add(tag_);
		}
	}
}

private: System::Void generate_universal_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = "Universal_Preset";
	saveFileDialog1->Filter = "XML (*.xml)|*.xml|Все файлы (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		System::IO::StreamWriter^ fp = gcnew StreamWriter(saveFileDialog1->FileName);
		fp->WriteLine(R"(<?xml version="1.0" encoding="utf-8"?>)");
		fp->WriteLine(R"(<ArrayOfUniversalItemXml xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">)");
		for each (DataGridViewRow ^ row in dataGridView1->Rows) {
			fp->WriteLine("  <UniversalItemXml>");
			fp->WriteLine("    <MatchingXmlList />");
			fp->WriteLine("    <Name>" + row->Cells[0]->Value + "</Name>");
			fp->WriteLine("    <UniversalParam>" + row->Cells[0]->Value + "</UniversalParam>");
			fp->WriteLine("    <SpecialParamNum>0</SpecialParamNum>");
			if ((row->Cells[1]->Value->ToString()) == "Bool") {
				fp->WriteLine("    <DataTypeNum>0</DataTypeNum>");
			}
			if ((row->Cells[1]->Value->ToString()) == "Numeric") {
				fp->WriteLine("    <DataTypeNum>1</DataTypeNum>");
			}
			if ((row->Cells[1]->Value->ToString()) == "String") {
				fp->WriteLine("    <DataTypeNum>2</DataTypeNum>");
			}
			fp->WriteLine("    <ExecutionUPStatusNum>0</ExecutionUPStatusNum>");
			fp->WriteLine("  </UniversalItemXml>");
		}
		fp->WriteLine("</ArrayOfUniversalItemXml>");
		fp->Close();
	}
}

private: System::Void SetGraphOffset(Dictionary<int, double>^ graph, int time_offset) {
	if (time_offset == 0) {
		return;
	}
	else {
		for (int offset_count = 0; offset_count < time_offset; offset_count++) {
			double temp = graph[1];
			for (int index = 0; index <= graph->Count; index++) {
				if ((index + 1) < graph->Count) {
					graph[index] = graph[(index + 1)];
				}
				else {
					graph[index] = temp;
					break;
				}
			}
		}
	}
}

private: Dictionary<int, double>^ DrawInitGraphSin() {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	double period = GetPeriod();
	double min_value = GetMinValue();
	double max_value = GetMaxValue();
	double time_offset = GetTimeOffset();
	double correction = (max_value + min_value) / 2;
	for (int x = 0; x <= period; x++) {
		graph->Add(x, (sin(x * PI / (period / 2)) * (max_value - correction)) + correction);
	}
	SetGraphOffset(graph, time_offset);
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphSin(double min_value, double max_value, double period, double time_offset) {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	double correction = (max_value + min_value) / 2;
	for (int x = 0; x <= period; x++) {
		graph->Add(x, (sin(x * PI / (period / 2)) * (max_value - correction)) + correction);
	}
	SetGraphOffset(graph, time_offset);
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphRand() {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	double period = GetPeriod();
	double min_value = GetMinValue();
	double max_value = GetMaxValue();
	Random^ rnd = gcnew Random();
	for (int x = 0; x <= period; x++) {
		double value = rnd->Next(min_value, max_value + 1);
		graph->Add(x, value);
	}
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphRand(double min_value, double max_value, double period) {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	Random^ rnd = gcnew Random();
	for (int x = 0; x <= period; x++) {
		double value = rnd->Next(min_value, max_value + 1);
		graph->Add(x, value);
	}
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphSquare() {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	double period = GetPeriod();
	double min_value = GetMinValue();
	double max_value = GetMaxValue();
	double time_offset = GetTimeOffset();
	for (int x = 0; x <= period; x++) {
		if (x <= period / 2) {
			graph->Add(x, min_value);
		}
		else {
			graph->Add(x, max_value);
		}
	}
	SetGraphOffset(graph, time_offset);
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphSquare(double min_value, double max_value, double period, double time_offset) {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	for (int x = 0; x <= period; x++) {
		if (x <= period / 2) {
			graph->Add(x, min_value);
		}
		else {
			graph->Add(x, max_value);
		}
	}
	SetGraphOffset(graph, time_offset);
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphConstant() {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	int period = GetPeriod();
	for (int x = 0; x <= period; x++) {;
		graph->Add(x, 0);
	}
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: Dictionary<int, double>^ DrawInitGraphConstant(double period) {
	Dictionary<int, double>^ graph = gcnew Dictionary<int, double>();
	for (int x = 0; x <= period; x++) {
		;
		graph->Add(x, 0);
	}
	chart1->Series[0]->Points->DataBindXY(graph->Keys, graph->Values);
	return graph;
}

private: System::Void UpdateGraph(Dictionary<String^, UniversalTag^>^ all_tags) {
	for each (auto tag in all_tags) {
		double period = tag.Value->period;
		double max_value = tag.Value->max_value;
		try {
			if (tag.Value->signal_type != "Constant") {
				double second_y_value = tag.Value->graph[1];
				for (int index = 0; index <= period; index++) {
					if ((index + 1) <= period) {
						tag.Value->graph[index] = tag.Value->graph[index + 1];
					}
					else {
						tag.Value->graph[index] = second_y_value;
					}
				}
			}
			else {
				for (int index = 0; index <= period; index++) {
					if ((index + 1) <= period) {
						tag.Value->graph[index] = tag.Value->graph[index + 1];
					}
					else {
						for each (DataGridViewRow ^ row in dataGridView1->Rows) {
							if (row->Cells[0]->Value->ToString() == tag.Key) {
									tag.Value->graph[index] = double::Parse(row->Cells[3]->Value->ToString());
							}
						}
					}
				}
			}
			
			for each (auto tag in all_tags) {
				if (dataGridView1->CurrentRow->Cells[0]->Value->ToString() == tag.Key) {
					chart1->Series[0]->Points->DataBindXY(tag.Value->graph->Keys, tag.Value->graph->Values);
				}
			}

			for each (DataGridViewRow ^ row in dataGridView1->Rows) {
				if (row->Cells[0]->Value->ToString() == tag.Key) {
					row->Cells[3]->Value = tag.Value->graph[period];
				}
			}
		}
		catch (...) {
			continue;
		}
	}
}

private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		for each (auto tag in all_tags) {
			if (dataGridView1->CurrentRow->Cells[0]->Value->ToString() == tag.Key) {
				chart1->Series[0]->Points->DataBindXY(tag.Value->graph->Keys, tag.Value->graph->Values);
				tag_name_tb->Text = tag.Key;
				data_type->Text = tag.Value->data_type;
				signal_type->Text = tag.Value->signal_type;
				min_value->Text = tag.Value->min_value.ToString();
				max_value->Text = tag.Value->max_value.ToString();
				period->Text = tag.Value->period.ToString();
				time_offset->Text = tag.Value->time_offset.ToString();

			}
		}
	}
	catch (...) {
		Console::WriteLine("catch delete last row");
	}
}

private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
	delete_tag_btn->Enabled = true;
	generate_universal_btn->Enabled = true;
	save_config_btn->Enabled = true;

}
private: System::Void dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
	if (dataGridView1->Rows->Count == 0) {
		delete_tag_btn->Enabled = false;
		generate_universal_btn->Enabled = false;
		save_config_btn->Enabled = false;
	}
	else {
		delete_tag_btn->Enabled = true;
		generate_universal_btn->Enabled = true;
	}
}

private: System::Void WaitBgw() {
	timer1->Enabled = true;
	toolStripStatusLabel1->BackColor = Color::White;
	toolStripStatusLabel1->Text = "Wait...";

}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	start_btn->Enabled = true;
	stop_btn->Enabled = false;
	timer1->Enabled = false;
	toolStripStatusLabel1->Text = "";
}

private: System::Void save_config_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = "Universal_Export_Config";
	saveFileDialog1->Filter = "XML (*.xml)|*.xml|Все файлы (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;

	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		System::IO::StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->FileName);
		writer->WriteLine(R"(<?xml version="1.0" encoding="utf-8"?>)");
		writer->WriteLine(R"(<ArrayOfTagXml xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">)");
		for each (auto tag in all_tags) {
			writer->WriteLine("  <Tag>");
			writer->WriteLine("    <Name>" + tag.Key->ToString() + "</Name>");
			writer->WriteLine("    <DataType>" + tag.Value->data_type + "</DataType>");
			writer->WriteLine("    <SignalType>" + tag.Value->signal_type + "</SignalType>");
			writer->WriteLine("    <MinValue>" + tag.Value->min_value + "</MinValue>");
			writer->WriteLine("    <MaxValue>" + tag.Value->max_value + "</MaxValue>");
			writer->WriteLine("    <Period>" + tag.Value->period + "</Period>");
			writer->WriteLine("    <TimeOffset>" + tag.Value->time_offset + "</TimeOffset>");
			writer->WriteLine("  </Tag>");
		}
		writer->WriteLine("</ArrayOfTagXml>");
		writer->Close();
	}
}
private: System::Void load_config_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->FileName = "Universal_Export_Config";
	openFileDialog1->Filter = "XML (*.xml)|*.xml|Все файлы (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		XmlDocument^ doc = gcnew XmlDocument();
		doc->Load((openFileDialog1->FileName)->ToString());
		XmlNodeReader^ reader = gcnew XmlNodeReader(doc);
		
		List<String^> list;
		toolStripStatusLabel1->Text = "";
		toolStripStatusLabel1->BackColor = Color::White;
		while (reader->Read())
		{
			switch (reader->NodeType)
			{
			case XmlNodeType::Text:
				list.Add(reader->Value);
				break;
			case XmlNodeType::EndElement:
				if (reader->Name == "Tag") {
					UniversalTag^ tag = gcnew UniversalTag();
					tag->data_type = list[1];
					tag->signal_type = list[2];
					tag->min_value = double::Parse(list[3]);
					tag->max_value = double::Parse(list[4]);
					tag->period = double::Parse(list[5]);
					tag->time_offset = double::Parse(list[6]);

					if (tag->signal_type == "Sinusoid") {
						tag->graph = DrawInitGraphSin(tag->min_value, tag->max_value, tag->period, tag->time_offset);
					}
					if (tag->signal_type == "Random") {
						tag->graph = DrawInitGraphRand(tag->min_value, tag->max_value, tag->period);
					}
					if (tag->signal_type == "Constant") {
						tag->graph = DrawInitGraphConstant(tag->period);
					}
					if (tag->signal_type == "Square") {
						tag->graph = DrawInitGraphSquare(tag->min_value, tag->max_value, tag->period, tag->time_offset);
					}
					try {
						all_tags->Add(list[0], tag);
						array <String^>^ tag_ = { list[0], tag->data_type, tag->signal_type, "0" };
						dataGridView1->Rows->Add(tag_);
						list.Clear();
					}
					catch (...) {
						toolStripStatusLabel1->BackColor = Color::Salmon;
						toolStripStatusLabel1->Text += " Tag named \"" + list[0] + "\" already exists.";
						list.Clear();
					};
				}
				break;
			}
		}
	}
}

private: System::Void UpdateNCModeValues(String^ wp, String^ pn, String^ spn, String^ ft, int fn) {
	for each (auto tag in all_tags) {
		for each (DataGridViewRow ^ row in dataGridView1->Rows) {
			if (row->Cells[0]->Value->ToString() == "WorkByProg") {
				row->Cells[3]->Value = wp;
			}
			if (row->Cells[0]->Value->ToString() == "ProgramName") {
				row->Cells[3]->Value = pn;
			}
			if (row->Cells[0]->Value->ToString() == "SubProgramName") {
				row->Cells[3]->Value = spn;
			}
			if (row->Cells[0]->Value->ToString() == "FrameText") {
				row->Cells[3]->Value = ft;
			}
			if (row->Cells[0]->Value->ToString() == "FrameNumber") {
				row->Cells[3]->Value = fn;
			}
		}
	}
}


private: Void GetFrame(int i) {
	int count_lines = richTextBox1->Lines->Length;
	try {
		if (SubprogChanger <= count_lines - 1) {
			try {
				int index = richTextBox1->Text->IndexOf(richTextBox1->Lines[i - 2]);
				richTextBox1->Select(index, richTextBox1->Text->IndexOf("\n") + 1);
				richTextBox1->SelectionBackColor = Color::GreenYellow;
			}
			catch (Exception^ e) {
				Console::WriteLine(e->ToString());
			}
			frame = richTextBox1->Lines[i - 1]->Substring(0);
		}
		else {
			richTextBox1->SelectAll();
			richTextBox1->SelectionBackColor = Color::White;
			frame = "";
		}
	}
	catch (Exception^ e) {
		Console::WriteLine(e->ToString());
	}
	
}


private: System::Void PostText() {
	String^ path = "";

	if (SubprogChanger <= main_prog_lines && SubprogChanger >= 1) {
		mpr = true;
		sp1r = false;
		sp2r = false;
		sp3r = false;
		path = "Programs\\MainProg.txt";
		UpdateNCModeValues("1", "MainProg.txt", "", frame, FrameNumberChanger);
	}
	else if (SubprogChanger > main_prog_lines && SubprogChanger <= main_prog_lines + sub_prog1_lines && SubprogChanger >= 1) {
		mpr = false;
		sp1r = true;
		sp2r = false;
		sp3r = false;
		path = "Programs\\SubProg1.txt";
		UpdateNCModeValues("1", "MainProg.txt", "SubProg1.txt", frame, FrameNumberChanger);
	}
	else if (SubprogChanger > main_prog_lines + sub_prog1_lines && SubprogChanger <= main_prog_lines + sub_prog1_lines + sub_prog2_lines && SubprogChanger >= 1) {
		mpr = false;
		sp1r = false;
		sp2r = true;
		sp3r = false;
		path = "Programs\\SubProg2.txt";
		UpdateNCModeValues("1", "MainProg.txt", "SubProg2.txt", frame, FrameNumberChanger);
	}
	else if (SubprogChanger > main_prog_lines + sub_prog1_lines + sub_prog2_lines && SubprogChanger <= total_lines && SubprogChanger >= 1){
		mpr = false;
		sp1r = false;
		sp2r = false;
		sp3r = true;
		path = "Programs\\SubProg3.txt";
		UpdateNCModeValues("1", "MainProg.txt", "SubProg3.txt", frame, FrameNumberChanger);
	}
	else {
		mpr = false;
		sp1r = false;
		sp2r = false;
		sp3r = false;
		path = "";
		UpdateNCModeValues("0", "MainProg.txt", "", frame, FrameNumberChanger);
	}
	Console::WriteLine(path);
	if (path != "") {
		// вычитываем побайтно весь текст
		cli::array<unsigned char>^ textUP = File::ReadAllBytes(path);
		// получаем MD5
		array<unsigned char>^ hash = (gcnew MD5CryptoServiceProvider())->ComputeHash(textUP);
		// кодируем MD5 в base64
		String^ base64Hash = Convert::ToBase64String(hash);
		String^ hashstr = BitConverter::ToString(hash);
		bool isFirstBlock = true;

		// проходим по всему файлу, разбивая его на части
		for (int i = 0; i < textUP->Length; i++)
		{
			auto jsonStr = String::Empty;
			auto str = String::Empty;

			// формируем json модель в зависимости от размера части файла
			if (i + BufferSize + 1 >= textUP->Length)
			{
				// кодируем часть файла в base64
				str = Convert::ToBase64String(textUP);

				// так как размер буфера больше размера вычитываемого куска файла, добавляем ключ EOF
				// если отправляем первый кусок файла, добавляем ключ Hash
				if (isFirstBlock)
				{
					jsonStr = "{\"MachineIntegrationId\":" + GetProtocolId() + ",\"UseInnerId\":\"true\",\"ListValues\":[{\"Key\":\"Hash\",\"Value\":\"" +
						base64Hash + "\"},{\"Key\":\"FileUP\",\"Value\":\"" + str + "\"}, {\"Key\":\"EOF\",\"Value\":\"1\"}]}";
					isFirstBlock = false;
				}
				else
					jsonStr = "{\"MachineIntegrationId\":" + GetProtocolId() + ",\"UseInnerId\":\"true\",\"ListValues\":[{\"Key\":\"FileUP\",\"Value\":\"" +
					str + "\"}, {\"Key\":\"EOF\",\"Value\":\"1\"}]}";
			}
			else
			{
				// кодируем часть файла в base64
				str = Convert::ToBase64String(textUP);

				// если отправляем первый кусок файла, добавляем ключ Hash
				if (isFirstBlock)
				{
					jsonStr = "{\"MachineIntegrationId\":" + GetProtocolId() + ",\"UseInnerId\":\"true\",\"ListValues\":[{\"Key\":\"Hash\",\"Value\":\"" +
						base64Hash + "\"},{\"Key\":\"FileUP\",\"Value\":\"" + str + "\"}]}";
					isFirstBlock = false;
				}
				else
					jsonStr = "{\"MachineIntegrationId\":" + GetProtocolId() + ",\"UseInnerId\":\"true\",\"ListValues\":[{\"Key\":\"FileUP\",\"Value\":\"" + str + "\"}]}";

			}

			i += BufferSize;
			SendJson(jsonStr);
			Thread::Sleep(100);
		}
		textUP = nullptr;
	}
}

private: System::Void SendJson(String^ json)
{
	try
	{
		HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create("http://" + GetServerIp() + ":8080/IndustryManagment/WebIntegration/PostFileUniversal"));
		request->ContentType = "application/json";
		request->Method = "POST";
		request->ProtocolVersion = gcnew Version(1, 1);


		System::IO::StreamWriter^ sw = gcnew StreamWriter(request->GetRequestStream());
		sw->Write(json);
		sw->Flush();
		sw->Close();

		HttpWebResponse^ httpResponse = dynamic_cast<HttpWebResponse^>(request->GetResponse());


		StreamReader^ stream = gcnew StreamReader(httpResponse->GetResponseStream());

			auto result = stream->ReadToEnd();

	}
	catch (Exception^ ex)
	{
	}
}


private: System::Void UpdateChangers() {
	if (SubprogChanger >= total_lines + 20) {
		SubprogChanger = 0;
	}
	else {
		SubprogChanger++;
	}

	if (SubprogChanger <= total_lines) {
		if (mpr) {
			if (FrameNumberChanger >= main_prog_lines) {
				FrameNumberChanger = 1;
			}
			else {
				FrameNumberChanger++;
			}
		}else if(sp1r) {
			if (FrameNumberChanger >= sub_prog1_lines) {
				FrameNumberChanger = 1;
			}
			else {
				FrameNumberChanger++;
			}
		}
		else if (sp2r) {
			if (FrameNumberChanger >= sub_prog2_lines) {
				FrameNumberChanger = 1;
			}
			else {
				FrameNumberChanger++;
			}
		}
		else if (sp3r) {
			if (FrameNumberChanger >= sub_prog3_lines) {
				FrameNumberChanger = 1;
			}
			else {
				FrameNumberChanger++;
			}
		}
	}
	else {
		FrameNumberChanger = 1;
	}
	Invoke(gcnew System::Action<int>(this, &MyForm::GetFrame), SubprogChanger);
}

private: System::Void MakeNCModeTag(String^ name, String^ data_type) {
	try {
		UniversalTag^ tag = gcnew UniversalTag();
		tag->data_type = data_type;
		tag->signal_type = "Constant";
		tag->min_value = 0;
		tag->max_value = 1;
		tag->period = 60;
		tag->time_offset = 0;
		tag->graph = DrawInitGraphConstant();
		all_tags->Add(name, tag);
		if (name == "ProgramName") {
			array <String^>^ tag_ = { name, data_type, "Constant", "MainProg.txt" };
			dataGridView1->Rows->Add(tag_);
		}else if (name == "SubProgramName") {
			array <String^>^ tag_ = { name, data_type, "Constant", "" };
			dataGridView1->Rows->Add(tag_);
		}
		else if (name == "FrameText") {
			array <String^>^ tag_ = { name, data_type, "Constant", "" };
			dataGridView1->Rows->Add(tag_);
		}
		else if (name == "FrameNumber") {
			array <String^>^ tag_ = { name, data_type, "Constant", "" };
			dataGridView1->Rows->Add(tag_);
		}
		else {
			array <String^>^ tag_ = { name, data_type, "Constant", "0" };
			dataGridView1->Rows->Add(tag_);
		}
		
	}
	catch (...) {

	}
}


private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (checkBox1->Checked) {

			MakeNCModeTag("WorkByProg", "Bool");
			MakeNCModeTag("ProgramName", "String");
			MakeNCModeTag("SubProgramName", "String");
			MakeNCModeTag("FrameText", "String");
			MakeNCModeTag("FrameNumber", "Numeric");

			richTextBox1->AppendText(File::ReadAllText("Programs\\MainProg.txt"));
			main_prog_lines = richTextBox1->Lines->Length - 1;
			richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg1.txt"));
			sub_prog1_lines = richTextBox1->Lines->Length - main_prog_lines - 1;
			richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg2.txt"));
			sub_prog2_lines = richTextBox1->Lines->Length - main_prog_lines - sub_prog1_lines - 1;
			richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg3.txt"));
			sub_prog3_lines = richTextBox1->Lines->Length - main_prog_lines - sub_prog1_lines - sub_prog2_lines - 1;
			total_lines = main_prog_lines + sub_prog1_lines + sub_prog2_lines + sub_prog3_lines;
		}
		else {
		Start:
			for each (DataGridViewRow ^ row in dataGridView1->Rows) {

				if (row->Cells[0]->Value->ToString() == "WorkByProg") {
					dataGridView1->Rows->Remove(row);
					all_tags->Remove("WorkByProg");
					goto Start;
				}
				if (row->Cells[0]->Value->ToString() == "ProgramName") {
					dataGridView1->Rows->Remove(row);
					all_tags->Remove("ProgramName");
					goto Start;
				}
				if (row->Cells[0]->Value->ToString() == "SubProgramName") {
					dataGridView1->Rows->Remove(row);
					all_tags->Remove("SubProgramName");
					goto Start;
				}
				if (row->Cells[0]->Value->ToString() == "FrameText") {
					dataGridView1->Rows->Remove(row);
					all_tags->Remove("FrameText");
					goto Start;
				}
				if (row->Cells[0]->Value->ToString() == "FrameNumber") {
					dataGridView1->Rows->Remove(row);
					all_tags->Remove("FrameNumber");
					goto Start;
				}
			}
			richTextBox1->Clear();

		}
	}
	catch (Exception^ e) {
		Console::WriteLine(e->ToString());
	}
	
}


private: System::Void reset_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		SubprogChanger = 0;
		FrameNumberChanger = 1;
		frame = "";
		richTextBox1->Clear();
		richTextBox1->AppendText(File::ReadAllText("Programs\\MainProg.txt"));
		main_prog_lines = richTextBox1->Lines->Length - 1;
		richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg1.txt"));
		sub_prog1_lines = richTextBox1->Lines->Length - main_prog_lines - 1;
		richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg2.txt"));
		sub_prog2_lines = richTextBox1->Lines->Length - main_prog_lines - sub_prog1_lines - 1;
		richTextBox1->AppendText(File::ReadAllText("Programs\\SubProg3.txt"));
		sub_prog3_lines = richTextBox1->Lines->Length - main_prog_lines - sub_prog1_lines - sub_prog2_lines - 1;
		total_lines = main_prog_lines + sub_prog1_lines + sub_prog2_lines + sub_prog3_lines;

		for each (DataGridViewRow ^ row in dataGridView1->Rows) {

			if (row->Cells[0]->Value->ToString() == "WorkByProg") {
				row->Cells[3]->Value = "0";
			}
			if (row->Cells[0]->Value->ToString() == "ProgramName") {
				row->Cells[3]->Value = "MainProg.txt";
			}
			if (row->Cells[0]->Value->ToString() == "SubProgramName") {
				row->Cells[3]->Value = "";
			}
			if (row->Cells[0]->Value->ToString() == "FrameText") {
				row->Cells[3]->Value = "";
			}
			if (row->Cells[0]->Value->ToString() == "FrameNumber") {
				row->Cells[3]->Value = "";
			}
		}
	}
	for each (auto tag in all_tags) {
		if (tag.Value->signal_type == "Sinusoid") {
			tag.Value->graph = DrawInitGraphSin();
		}
		if (tag.Value->signal_type == "Random") {
			tag.Value->graph = DrawInitGraphRand();
		}
		if (tag.Value->signal_type == "Constant") {
			tag.Value->graph = DrawInitGraphConstant();
		}
		if (tag.Value->signal_type == "Square") {
			tag.Value->graph = DrawInitGraphSquare();
		}
	}
}
};


}
