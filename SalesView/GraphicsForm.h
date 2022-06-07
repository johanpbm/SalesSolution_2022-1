#pragma once
#define PI_2 360
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		array<PointF>^ arrPoints = gcnew array<PointF>(2 * PI_2);
		array<PointF>^ arrRosePoints = gcnew array<PointF>(PI_2);
		int mid_x;
		int mid_y;
		int ini;
	private: System::Windows::Forms::Timer^ timer1;
	public:
		int counter = 2; // 2 * PI_2;//2;
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			mid_x = pbFigure->Width / 2;
			mid_y = pbFigure->Height / 2;
			for (int i = 0; i < 2 * PI_2; i++)
				arrPoints[i] = PointF(mid_x - PI_2 + i, mid_y + 100 * Math::Sin(3 * (i - 300) * Math::PI / 180));
			
			for (int i = 0; i < PI_2; i++)
				arrRosePoints[i] = PointF(mid_x + 100 * Math::Sin( 2 * i * Math::PI / 180) * Math::Cos(i * Math::PI/180),
					mid_y + 100 * Math::Sin(2 * i * Math::PI / 180) * Math::Sin(i * Math::PI / 180));
		
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbFigure;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pbFigure = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFigure))->BeginInit();
			this->SuspendLayout();
			// 
			// pbFigure
			// 
			this->pbFigure->Location = System::Drawing::Point(12, 12);
			this->pbFigure->Name = L"pbFigure";
			this->pbFigure->Size = System::Drawing::Size(681, 435);
			this->pbFigure->TabIndex = 0;
			this->pbFigure->TabStop = false;
			this->pbFigure->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pbFigure_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphicsForm::timer1_Tick);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 459);
			this->Controls->Add(this->pbFigure);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFigure))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		pbFigure->BackColor = Color::White;
	}

	

	private: System::Void pbFigure_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->DrawLine(Pens::Black, 0, pbFigure->Height / 2, pbFigure->Width, pbFigure->Height / 2);
		g->DrawLine(Pens::Black, pbFigure->Width / 2, 0, pbFigure->Width / 2, pbFigure->Height);
		g->DrawString("X", gcnew System::Drawing::Font("Arial", 10), Brushes::Black, 0, pbFigure->Bottom / 2);
		g->DrawString("Y", gcnew System::Drawing::Font("Arial", 10), Brushes::Black, pbFigure->Right / 2, pbFigure->Top);

		g->DrawEllipse(Pens::Magenta, 50, 10, 150, 150);

		g->DrawCurve(Pens::Blue, arrPoints, ini, counter - 1);
		g->DrawCurve(Pens::Blue, arrRosePoints);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter < 2 * PI_2) {
			counter++;
			pbFigure->Invalidate();
		}
		else {
			timer1->Stop();
			timer1->Enabled = false;
		}

	}
};
}
