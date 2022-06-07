#pragma once
#include "LoginForm.h"
#include "ProductForm.h"
#include "SaleForm.h"
#include "CustomerForm.h"
#include "StoreForm.h"
#include "ChatForm.h"
#include "SalesmanForm.h"
#include "StoreProductForm.h"
#include "AdministratorForm.h"
#include "FilesForm.h"
#include "DepartmentForm.h"
#include "WarehouseForm.h"
#include "CreditNoteForm.h"
#include "GraphicsForm.h"
#include "SalesGraphicsForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace SalesModel;
using namespace SalesController;
using namespace System::Threading;

namespace SalesView {
	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
		private: System::Windows::Forms::ToolStripMenuItem^ chatDeSoporteToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ guardarEnFormatoBinarioToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ departamentosToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ almacenesToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ transportistasToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ GenerateCreditNoteToolStripMenuItem;

	public:
			static SalesModel::Salesman^ salesman;
	private: System::Windows::Forms::ToolStripMenuItem^ tendenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ utilitarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ animacionesToolStripMenuItem;

	public:
		   static SalesModel::User^ user;
		SalesMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		ProductForm ^ refProductForm;

		static void SetSalesman(SalesModel::Salesman^ salesman) {
			SalesMainForm::salesman = salesman;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ guardarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosXTiendaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tiendasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedoresToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarEnFormatoBinarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GenerateCreditNoteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosXTiendaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tiendasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->departamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transportistasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatDeSoporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tendenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->utilitarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->animacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->archivoToolStripMenuItem,
					this->operacionesToolStripMenuItem, this->mantenimientosToolStripMenuItem, this->ayudaToolStripMenuItem, this->tendenciasToolStripMenuItem,
					this->utilitarioToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(827, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"Archivo";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->guardarEnFormatoBinarioToolStripMenuItem,
					this->guardarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// guardarEnFormatoBinarioToolStripMenuItem
			// 
			this->guardarEnFormatoBinarioToolStripMenuItem->Name = L"guardarEnFormatoBinarioToolStripMenuItem";
			this->guardarEnFormatoBinarioToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->guardarEnFormatoBinarioToolStripMenuItem->Text = L"Ejemplos";
			this->guardarEnFormatoBinarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::guardarEnFormatoBinarioToolStripMenuItem_Click);
			// 
			// guardarToolStripMenuItem
			// 
			this->guardarToolStripMenuItem->Enabled = false;
			this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
			this->guardarToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->guardarToolStripMenuItem->Text = L"Guardar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->realizarVentaToolStripMenuItem,
					this->GenerateCreditNoteToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar Venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::realizarVentaToolStripMenuItem_Click);
			// 
			// GenerateCreditNoteToolStripMenuItem
			// 
			this->GenerateCreditNoteToolStripMenuItem->Name = L"GenerateCreditNoteToolStripMenuItem";
			this->GenerateCreditNoteToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->GenerateCreditNoteToolStripMenuItem->Text = L"Generar Nota de Crédito";
			this->GenerateCreditNoteToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::generarNotaDeCréditoToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->tiendasToolStripMenuItem, this->vendedoresToolStripMenuItem, this->administradoresToolStripMenuItem,
					this->departamentosToolStripMenuItem, this->almacenesToolStripMenuItem, this->transportistasToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->productosToolStripMenuItem1,
					this->productosXTiendaToolStripMenuItem
			});
			this->productosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"productosToolStripMenuItem.Image")));
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productosToolStripMenuItem_Click);
			// 
			// productosToolStripMenuItem1
			// 
			this->productosToolStripMenuItem1->Name = L"productosToolStripMenuItem1";
			this->productosToolStripMenuItem1->Size = System::Drawing::Size(175, 22);
			this->productosToolStripMenuItem1->Text = L"Productos";
			this->productosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SalesMainForm::productosToolStripMenuItem1_Click);
			// 
			// productosXTiendaToolStripMenuItem
			// 
			this->productosXTiendaToolStripMenuItem->Name = L"productosXTiendaToolStripMenuItem";
			this->productosXTiendaToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->productosXTiendaToolStripMenuItem->Text = L"Productos x Tienda";
			this->productosXTiendaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productosXTiendaToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientesToolStripMenuItem.Image")));
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::clientesToolStripMenuItem_Click);
			// 
			// tiendasToolStripMenuItem
			// 
			this->tiendasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tiendasToolStripMenuItem.Image")));
			this->tiendasToolStripMenuItem->Name = L"tiendasToolStripMenuItem";
			this->tiendasToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->tiendasToolStripMenuItem->Text = L"Tiendas";
			this->tiendasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::tiendasToolStripMenuItem_Click);
			// 
			// vendedoresToolStripMenuItem
			// 
			this->vendedoresToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vendedoresToolStripMenuItem.Image")));
			this->vendedoresToolStripMenuItem->Name = L"vendedoresToolStripMenuItem";
			this->vendedoresToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->vendedoresToolStripMenuItem->Text = L"Vendedores";
			this->vendedoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::vendedoresToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->administradoresToolStripMenuItem->Text = L"Gerentes";
			this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::administradoresToolStripMenuItem_Click);
			// 
			// departamentosToolStripMenuItem
			// 
			this->departamentosToolStripMenuItem->Name = L"departamentosToolStripMenuItem";
			this->departamentosToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->departamentosToolStripMenuItem->Text = L"Departamentos";
			this->departamentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::departamentosToolStripMenuItem_Click);
			// 
			// almacenesToolStripMenuItem
			// 
			this->almacenesToolStripMenuItem->Name = L"almacenesToolStripMenuItem";
			this->almacenesToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->almacenesToolStripMenuItem->Text = L"Almacenes";
			this->almacenesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::almacenesToolStripMenuItem_Click);
			// 
			// transportistasToolStripMenuItem
			// 
			this->transportistasToolStripMenuItem->Name = L"transportistasToolStripMenuItem";
			this->transportistasToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->transportistasToolStripMenuItem->Text = L"Transportistas";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatDeSoporteToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// chatDeSoporteToolStripMenuItem
			// 
			this->chatDeSoporteToolStripMenuItem->Name = L"chatDeSoporteToolStripMenuItem";
			this->chatDeSoporteToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->chatDeSoporteToolStripMenuItem->Text = L"Chat de Soporte";
			this->chatDeSoporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::chatDeSoporteToolStripMenuItem_Click);
			// 
			// tendenciasToolStripMenuItem
			// 
			this->tendenciasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ventasToolStripMenuItem });
			this->tendenciasToolStripMenuItem->Name = L"tendenciasToolStripMenuItem";
			this->tendenciasToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->tendenciasToolStripMenuItem->Text = L"Tendencias";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			this->ventasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::ventasToolStripMenuItem_Click);
			// 
			// utilitarioToolStripMenuItem
			// 
			this->utilitarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->animacionesToolStripMenuItem });
			this->utilitarioToolStripMenuItem->Name = L"utilitarioToolStripMenuItem";
			this->utilitarioToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->utilitarioToolStripMenuItem->Text = L"Utilitario";
			// 
			// animacionesToolStripMenuItem
			// 
			this->animacionesToolStripMenuItem->Name = L"animacionesToolStripMenuItem";
			this->animacionesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->animacionesToolStripMenuItem->Text = L"Animaciones";
			this->animacionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::animacionesToolStripMenuItem_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 436);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SalesMainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Sistema de Ventas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SalesMainForm::SalesMainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductForm^ productForm = gcnew ProductForm();
		productForm->MdiParent = this;
		productForm->Show();
	}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerForm^ customerForm = gcnew CustomerForm();
	customerForm->MdiParent = this;
	customerForm->Show();
}
private: System::Void tiendasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	StoreForm^ storeForm = gcnew StoreForm();
	storeForm->MdiParent = this;
	storeForm->Show();
	
}

private: System::Void productosXTiendaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StoreProductForm^ storeProductForm = gcnew StoreProductForm();
	storeProductForm->MdiParent = this;
	storeProductForm->Show();
}
private: System::Void vendedoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SalesmanForm^ salesmanForm = gcnew SalesmanForm();
	salesmanForm->MdiParent = this;
	salesmanForm->Show();
}
private: System::Void gráficosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	GraphicsForm^ graphicsForm = gcnew GraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();
	*/
}
private: System::Void vendedoresToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	SalesGraphicsForm^ graphicsForm = gcnew SalesGraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();
	*/
}
private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	SalesController::DBController::Init();
	if (user == nullptr) {
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ControlBox = false;
		loginForm->Text = " ";
		loginForm->ShowDialog();
	}
}

	void UpdateTitle(String^ title) {
		this->Text = title;
	}

private: System::Void productosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductForm^ productForm = gcnew ProductForm();
	refProductForm = productForm;
	productForm->MdiParent = this;
	productForm->Show();
}
private: System::Void chatDeSoporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ChatForm^ chatForm = gcnew ChatForm();
	chatForm->MdiParent = this;
	chatForm->Show();
}
private: System::Void administradoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AdministratorForm^ administratorForm = gcnew AdministratorForm();
	//refProductForm = productForm;
	administratorForm->MdiParent = this;
	administratorForm->Show();
}
private: System::Void guardarEnFormatoBinarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FilesForm^ filesForm = gcnew FilesForm();
	filesForm->MdiParent = this;
	filesForm->Show();
}
private: System::Void SalesMainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
private: System::Void departamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DepartmentForm^ departmentForm = gcnew DepartmentForm();
	departmentForm->MdiParent = this;
	departmentForm->Show();
}
private: System::Void almacenesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WarehouseForm^ warehouseForm = gcnew WarehouseForm();
	warehouseForm->MdiParent = this;
	warehouseForm->Show();

}
private: System::Void generarNotaDeCréditoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CreditNoteForm^ creditNoteForm = gcnew CreditNoteForm();
	creditNoteForm->MdiParent = this;
	creditNoteForm->Show();
}
private: System::Void animacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphicsForm^ graphicsForm = gcnew GraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();

}
private: System::Void ventasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SalesGraphicsForm^ graphicsForm = gcnew SalesGraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();
}
};
}
