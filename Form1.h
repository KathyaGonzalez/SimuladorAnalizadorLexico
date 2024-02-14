#pragma once
//Proyecto 1
//Integrantes
//1. Cos Alvarez Maria Luisa
//2. González Coxaj, Kathya Bilena
//3. García Mejía, Laura Belen
//4. Gomez Sac, Dominga del Rosario
#include <fstream>
#include <iostream>
#include <string.h>
#include <string>
#include <String>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Text;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TOKEN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TIPO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CANTIDAD;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Error;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Linea;
	private: System::Windows::Forms::Label^ label3;










	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->TOKEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TIPO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CANTIDAD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Linea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->TOKEN,
					this->TIPO, this->CANTIDAD
			});
			this->dataGridView1->Location = System::Drawing::Point(380, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(363, 386);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// TOKEN
			// 
			this->TOKEN->HeaderText = L"TOKEN";
			this->TOKEN->Name = L"TOKEN";
			this->TOKEN->ReadOnly = true;
			// 
			// TIPO
			// 
			this->TIPO->HeaderText = L"TIPO";
			this->TIPO->Name = L"TIPO";
			this->TIPO->ReadOnly = true;
			// 
			// CANTIDAD
			// 
			this->CANTIDAD->HeaderText = L"CANTIDAD";
			this->CANTIDAD->Name = L"CANTIDAD";
			this->CANTIDAD->ReadOnly = true;
			this->CANTIDAD->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contenido archivo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(377, 427);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Errores:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Error,
					this->Linea
			});
			this->dataGridView2->Location = System::Drawing::Point(380, 443);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(267, 123);
			this->dataGridView2->TabIndex = 9;
			// 
			// Error
			// 
			this->Error->HeaderText = L"Error";
			this->Error->Name = L"Error";
			this->Error->ReadOnly = true;
			// 
			// Linea
			// 
			this->Linea->HeaderText = L"Línea";
			this->Linea->Name = L"Linea";
			this->Linea->ReadOnly = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(155, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 10;
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(766, 578);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Analizador léxico";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Limpiar el label donde se muestra el contenido del texto
		this->label1->Text = "";
		using namespace System::IO;
		Stream^ archivo;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Archivos TXT(*.txt) | *.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((archivo = openFileDialog1->OpenFile()) != nullptr) {
				String^ nombreArchivo = openFileDialog1->InitialDirectory + openFileDialog1->FileName; //Obtiene la ruta del archivo
				/*¿Verificar que sea .txt?*/
				String^ contenidoArchivo = File::ReadAllText(nombreArchivo); //Lee el 
				/*Verificar que contenidoArchivo contenga caracteres válidos*/
				MessageBox::Show(contenidoArchivo); //Muestra el contenido del archivo en una ventana distinta
				/*Mostrar si contenidoArchivo es válido o no*/
				archivo->Close();
				//lectura del archivo
				StreamReader^ lectura2 = gcnew StreamReader(nombreArchivo);
				String^ linea;
				cli:array<String^, 1>^ conv3;
				//Palabras reservadas
				array<String^, 1>^ palabrasReservadas = { "entero", "decimal", "booleano", "cadena","si", "sino", "mientras", "hacer", "verdadero", "falso"};
				int contador[10] = { 0,0,0, 0, 0, 0, 0, 0, 0, 0};
				array<String^, 1>^ operador = {"*", "/", "%", "=", "==", ">=", "<=", "<", ">", "+", "-"};
				int contadorOperador[11] = { 0,0,0,0,0,0,0,0,0,0,0};
				array<String^, 1>^ signos = { "(", ")", "{", "}",";", ".", "\"\"" };
				int contadorSigno[7] = { 0,0,0,0,0, 0, 0};
				//en el archivo
				ArrayList^ Nums = gcnew ArrayList();
				int contadorNum[200];
				array<String^, 1>^ extras;
				bool encontrada = 0;
				int contadorLineas = 0;
				int n = this->dataGridView1->Rows->Add();
				//colocar la información de Token, tipo y cantidad en la tabla
				this->dataGridView1->Rows[n]->Cells[0]->Value ="----------";//Token
				this->dataGridView1->Rows[n]->Cells[1]->Value = "-----------";//Tipo
				this->dataGridView1->Rows[n]->Cells[2]->Value = "-----------";//Cantidad
				//contenido del archivo expresado en form1 -> Label 1
				while (!lectura2->EndOfStream) {
					//lee la primera linea
					linea = lectura2->ReadLine();
					//aumenta el contador de líneas porque ha leido una más
					contadorLineas++;
					//la presenta en el Label1
					this->label1->Text += "\n" + linea;
					//la separa en palabras
					conv3->Clear;
					conv3 = linea->Split();
					//compara las palabras con las reservadas
					for (int i = 0; i < conv3->Length; i++) {//recorre todas las palabras de la línea
						encontrada = 0;//reiniciada cuando cambia de palabra
						for (int j = 0; j < palabrasReservadas->Length; j++) {//recorre las palabras reservadas
							if (conv3[i] == palabrasReservadas[j]) {//si la palabra coincide con una reservada
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
								break;
							}
							else if (conv3[i]== "verdadero;" && palabrasReservadas[j] == "verdadero") {//si se encuentra en un fin de linea y es un falso
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
								break;
							}
							else if (conv3[i] == "falso;" && palabrasReservadas[j] == "falso") {//si se encuentra en un fin de linea y es un verdadero
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
								break;
							}
						}
						for (int j = 0; j < operador->Length; j++) {
							//buscar si coincide con un operador
							if (conv3[i] == operador[j]) {
								contadorOperador[j]++;//suma al contador del operador
								encontrada = 1;
								break;
							}
							else if (conv3[i]->Contains("++")) {
								contadorOperador[9] += 2;
								encontrada = 1;
								break;
							}
							else if (conv3[i]->Contains("--")) {
								contadorOperador[10] += 2;
								encontrada = 1;
								break;
							}

						}
						for (int j = 0; j < signos->Length; j++) {
								if (conv3[i] == signos[j] || conv3[i]->Contains(signos[j])) {//si la palabra coincide con una reservada
								contadorSigno[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
								break;
							}
						}
						if (encontrada == 0 && conv3[i]!= " ") {//la palabra no corresponde a una palabra reservada, operador o signo
							//
							Boolean ultimoCaracterEspecial = 0;
							Boolean esNumero = 1;
							Boolean iniciaConDigito = 0;
							//revisar si cumple con los requisitos para ser un identificador o un numero
							array<String^, 1>^ D = { "0","1", "2", "3", "4", "5", "6", "7", "8", "9" };
							//análisis NÚMEROS
							for (int k = 0; k < D->Length; k++) {
								if (conv3[i]->StartsWith(D[k])) {//si inicia con un dígito debe ser un número
									iniciaConDigito = 1;
									//verificar si contiene algún simbolo diferente de un dígito
									cli::array<wchar_t, 1> ^ caracteresDisponibles = conv3[i]->ToCharArray();//palabra descompuesta en char
									for (int l = 0; l < caracteresDisponibles->Length; l++) {//en un array
										if (l == (caracteresDisponibles->Length - 1) && (conv3[i]->EndsWith(";") || conv3[i]->EndsWith(")"))) 
										{
											this->label3->Text += caracteresDisponibles[i];
											ultimoCaracterEspecial = 1;
										}
										else {
											if (!isdigit(caracteresDisponibles[l])) {//si se encuentra un caracter que no es digito
												esNumero = 0;//el token es descartado como numero
											}
										}
									}
									if (esNumero) {//comprobado que es un numero
										if (ultimoCaracterEspecial) {
											if (Nums->Contains(conv3[i])) {//el numero ya fue resgistrado
												int indice = Nums->IndexOf(conv3[i]);
												contadorNum[indice]++;
												break;
											}
											else {
												Nums->Add(conv3[i]);
												int indice = Nums->Count - 1;
												contadorNum[indice] = 1;
												break;
											}
										}
										else {
												if (Nums->Contains(conv3[i])) {//el numero ya fue resgistrado
													int indice = Nums->IndexOf(conv3[i]);
													contadorNum[indice]++;
													break;
												}
												else {
													Nums->Add(conv3[i]);
													int indice = Nums->Count - 1;
													contadorNum[indice] = 1;
													break;
												}
										}
									}
									else {//se coloca en la tabla de error
										int n = this->dataGridView2->Rows->Add();
										//colocar la información de Token, tipo y cantidad en la tabla
										this->dataGridView2->Rows[n]->Cells[0]->Value = conv3[i];//Token
										this->dataGridView2->Rows[n]->Cells[1]->Value = contadorLineas;//Tipo
									}
									
									}
							}
							//Comprobacion si es IDENTIFICADOR
							if (!iniciaConDigito) {
								Boolean error = 0;
								String^ enviarIdentificador = "-";
								Boolean iniciaConL = 0;
								int contCumple = 0;
								array<wchar_t, 1>^ D1 = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
								array<wchar_t, 1>^ L = { 'a', 'b','c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
								array<wchar_t, 1>^ caracteresRevisar = conv3[i]->ToCharArray();
								for (int k = 0; k < caracteresRevisar->Length; k++) {
									if (caracteresRevisar[0] == L[k]) {//Si inicia con letras
																																						array<String^, 1>^ noAdmitido = {"#", "&", "!",  "¡", "?", "¿", "[", "]", "_", ",", "@", "$" };
										for (int z = 0; z < noAdmitido->Length; z++) {
											if (conv3[i]->Contains(noAdmitido[z])) {
												int n = this->dataGridView2->Rows->Add();
												//colocar la información del error
												this->dataGridView2->Rows[n]->Cells[0]->Value = conv3[i];//Token
												this->dataGridView2->Rows[n]->Cells[1]->Value = contadorLineas;//Linea donde se presenta
												error = 1;
												break;
											}
										}
										if (!error) {
											if (conv3[i] == ("\"\"") || conv3[i]->Contains(" ")) {

											}
											else {
												int n = this->dataGridView1->Rows->Add();
												//colocar la información de Token, tipo y cantidad en la tabla
												this->dataGridView1->Rows[n]->Cells[0]->Value = conv3[i];//Token
												this->dataGridView1->Rows[n]->Cells[1]->Value = "Identificador";//Linea donde se presenta
												this->dataGridView1->Rows[n]->Cells[2]->Value = 1;
											}
										}
									}
								}

								/*array<wchar_t, 1>^ caracteresRevisar = conv3[i]->ToCharArray();
								for (int k = 0; k < caracteresRevisar->Length; k++) {
									if (caracteresRevisar[0]== L[k]) {//si inicia con una letra
										
										iniciaConL = 1;
										for (int l = 1; l < conv3[i]->Length; l++) {
											
											for (int m = 0; m < L->Length; m++) {
												if (caracteresRevisar[l] == L[m]) {//en x posicion en la palabra cumple con contener una letra
													contCumple++;
													enviarIdentificador += L[m];
												}
											}
										}
										for (int l = 1; l < conv3[i]->Length; l++) {
											for (int m = 0; m < D1->Length; m++) {
												if (caracteresRevisar[l] == D1[m]) {
													contCumple++;
													enviarIdentificador += D1[m];
												}
											}
										}
									}
								}
								if (contCumple == caracteresRevisar->Length) {
									int r = this->dataGridView1->Rows->Add();
									//colocar la información de Token, tipo y cantidad en la tabla
									this->dataGridView1->Rows[r]->Cells[0]->Value = enviarIdentificador;//Token
									this->dataGridView1->Rows[r]->Cells[1]->Value = "Identificador";//Tipo
								}else{
									int r = this->dataGridView2->Rows->Add();
									//colocar la información de Token, tipo y cantidad en la tabla
									this->dataGridView2->Rows[r]->Cells[0]->Value = conv3[i];//Token que produce error
									this->dataGridView2->Rows[r]->Cells[1]->Value = contadorLineas;//Tipo
								}*/
							}
							
						}
					}
				}
				//Luego de la recopilacion de datos se llena la tabla
				//recorre el array de contadores para ver cual es diferente de 0 y agregar a la tabla 
					//su tipo y el número de veces que aparece
				for (int i = 0; i < 10; i++) {
					if (contador[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = palabrasReservadas[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Palabra Reservada";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contador[i];//Cantidad 
					}
				}
				for (int i = 0; i < 11; i++) {
					if (contadorOperador[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = operador[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Operador";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contadorOperador[i];//Cantidad
					}
				}
				for (int i = 0; i < 5; i++) {
					if (contadorSigno[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = signos[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Signo";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contadorSigno[i];//Cantidad
					}
				}
				for (int i = 0; i < Nums->Count; i++) {
					if (contadorNum[i] != 0) {
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = Nums[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Digito";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contadorNum[i];
					}
				}
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}