#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SalesController;
	using namespace SalesModel;

	/// <summary>
	/// Resumen de SalesGraphicsForm
	/// </summary>
	public ref class SalesGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesGraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSales;
	protected:

	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechartSales;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartSales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chartSales
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSales->Legends->Add(legend1);
			this->chartSales->Location = System::Drawing::Point(29, 25);
			this->chartSales->Name = L"chartSales";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto";
			this->chartSales->Series->Add(series1);
			this->chartSales->Size = System::Drawing::Size(435, 380);
			this->chartSales->TabIndex = 0;
			this->chartSales->Text = L"chartSales";
			// 
			// piechartSales
			// 
			chartArea2->Name = L"ChartArea1";
			this->piechartSales->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->piechartSales->Legends->Add(legend2);
			this->piechartSales->Location = System::Drawing::Point(470, 25);
			this->piechartSales->Name = L"piechartSales";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Monto";
			this->piechartSales->Series->Add(series2);
			this->piechartSales->Size = System::Drawing::Size(411, 380);
			this->piechartSales->TabIndex = 1;
			this->piechartSales->Text = L"piechartSales";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(29, 411);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(595, 209);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// SalesGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 624);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->piechartSales);
			this->Controls->Add(this->chartSales);
			this->Name = L"SalesGraphicsForm";
			this->Text = L"SalesGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &SalesGraphicsForm::SalesGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List <Sale^>^ sales = SalesManager::QueryAllSales();
		if (sales != nullptr) {
			for (int i = 0; i < sales->Count; i++) {
				//Para el gráfico de barras
				chartSales->Series["Monto"]->Points->Add(sales[i]->Total);
				chartSales->Series["Monto"]->Points[i]->Color = Color::Blue;
				chartSales->Series["Monto"]->Points[i]->AxisLabel = sales[i]->Customer->FirstName + " " 
																	+ sales[i]->Customer->LastName;
				chartSales->Series["Monto"]->Points[i]->LegendText = sales[i]->Customer->FirstName + " "
																	+ sales[i]->Customer->LastName;
				chartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(sales[i]->Total);

				//Para el gráfico de pie
				piechartSales->Series["Monto"]->Points->Add(sales[i]->Total);
				piechartSales->Series["Monto"]->Points[i]->AxisLabel = sales[i]->Customer->FirstName + " "
					+ sales[i]->Customer->LastName;
				piechartSales->Series["Monto"]->Points[i]->LegendText = sales[i]->Customer->FirstName + " "
					+ sales[i]->Customer->LastName;
				piechartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(sales[i]->Total);

			}
		}
	}
	};
}
