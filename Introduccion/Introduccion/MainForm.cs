/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:23
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.IO;

namespace Introduccion
{
	/// <summary>
	/// Description of MainForm.
	/// </summary>
	public partial class MainForm : Form
	{
		public MainForm()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		void MainFormLoad(object sender, EventArgs e)
		{
	
		}
		void BtnAñadirLogClick(object sender, EventArgs e)
		{
			string log = "prueba de log" ;
			string tipo = "info";
			int posnewLog = dgvLog.Rows.Add();
			
			
	
				dgvLog.Rows [posnewLog].Cells[0].Value = log;
				dgvLog.Rows [posnewLog].Cells[1].Value = log;
			
			
			//dgvLog.DataSource = 
			
			//definir cadena de texto
			//llamar datagridview
			//añdir fila
			
		}
		void MainFormDoubleClick(object sender, EventArgs e)
		{
			
		}
		void DgvLogMouseDoubleClick(object sender, MouseEventArgs e)
		{
	
		}
		void BtnLeerDirectorioClick(object sender, EventArgs e)
		{
			try{
				//ok
				string path = txtDirectorio.Text;
				
			DirectoryInfo infordirectorio =	new DirectoryInfo(@path);
			string fechacrear = infordirectorio.CreationTime.ToString();
			string nombre = infordirectorio.FullName.ToString();
			string parent = infordirectorio.Parent.ToString();
			string root = infordirectorio.Root.ToString();
			
			
			
			
			
			EscribirLog("info","Leyendo Directorio" +  fechacrear,dgvLog);
			EscribirLog("info","Leyendo Directorio" + nombre,dgvLog);
			EscribirLog("info","Leyendo Directorio" + parent,dgvLog);
			EscribirLog("info","Leyendo Directorio" + root,dgvLog);	
			
			FileInfo[] archivosDeDirectorio =  infordirectorio.GetFiles();
			
			foreach(FileInfo archivo in archivosDeDirectorio)
			{
				EscribirLog("info","Archivo" + archivo.CreationTime,dgvLog);	
				EscribirLog("info","Archivo" + archivo.FullName,dgvLog);
				EscribirLog("info","Archivo" + archivo.Extension,dgvLog);
				EscribirLog("info","Archivo" + archivo.LastAccessTime,dgvLog);
				EscribirLog("info","Archivo" + archivo.IsReadOnly,dgvLog);
			}
			}
			
			}
			catch(Exception error){
				EscribirLog("error",error.ToString(),dgvLog);
			}
			
		}
void EscribirLog(string tipo , string log ,DataGridView dgv)
		{
			int posnewLog = dgvLog.Rows.Add();
			
			//agregar una fila
			//devolver la posicion de la nueva fila
			
	
				dgvLog.Rows [posnewLog].Cells[0].Value = log;
				dgvLog.Rows [posnewLog].Cells[1].Value = log;
				
				if(tipo=="error")
				{
					dgv.Rows[posnewLog].Cells[0].Style.BackColor=Color.Red;
					
				}
				else	
				{
					dgv.Rows[posnewLog].Cells[0].Style.BackColor=Color.AliceBlue;
				}
				
		}
	/*	void DgvLogCellContentClick(object sender, DataGridViewCellEventArgs e)
		{
	
		}*/
		void DgvLogDoubleClick(object sender, DataGridViewCellEventArgs e)
		{
			
			
			DataGridViewTextBoxCell celdaTipo = (DataGridViewTextBoxCell)dgvLog.Rows[e.RowIndex].Cells[0];
			DataGridViewTextBoxCell celdaLog = (DataGridViewTextBoxCell)dgvLog.Rows[e.RowIndex].Cells[1];
			
			if (celdaTipo.Value != null)
			{
				
			}
			string log = celdaLog.Value.ToString();
			string tipo = celdaTipo.Value.ToString();
			
			//mensaje
			//titulo
			//botones
			//icon
			MessageBoxIcon 	icono;
			
			if(tipo =="error")
			{
				icono = MessageBoxIcon.Error;
			}
			else
			{
				icono = MessageBoxIcon.Information;
			}
			
			MessageBoxButtons botones = MessageBoxButtons.OK;
			MessageBox.Show(log, tipo , botones , icono);
		}
		void BtnListarDirectorioClick(object sender, EventArgs e)
		{
			try 
			{
				string path = txtListarDirectorio.Text;
				string[] arregloDirectorio = Directory.GetDirectories(@path);
				int numeroDirectorios = arregloDirectorio.Length;
				
				EscribirLog("info", "numero Directorios" + numeroDirectorios.ToString(),dgvLog);
				foreach(string directorio in arregloDirectorio)
				{
					EscribirLog("info", "Directorio: " + directorio,dgvLog);
				}
			}
			catch(Exception error){
				EscribirLog("error",error.ToString(),dgvLog);
			}
		}
		
			
		}
}

	


