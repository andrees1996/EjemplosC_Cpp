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
			
			EscribirLog("info", fechacrear,dgvLog);
			EscribirLog("info", nombre,dgvLog);
			EscribirLog("info", parent,dgvLog);
			EscribirLog("info", root,dgvLog);
			
				
			}
			catch (Exception error)
			{
				//cuando hay un error
				
			}
		}
		
		void EscribirLog(string tipo , string log ,DataGridView dgv)
		{
			int posnewLog = dgvLog.Rows.Add();
			
			
	
				dgvLog.Rows [posnewLog].Cells[0].Value = log;
				dgvLog.Rows [posnewLog].Cells[1].Value = log;
				
		}
		/*void DgvLogDoubleClick(object sender, MouseEventArgs e)
		{
			if (celdaTipo.Value != null)
			{
				
			}
			DataGridViewTextBoxCell celdaTipo = (DataGridViewTextBoxCell)dgvLog.Rows[e.RowIndex].Cells[0];
			DataGridViewTextBoxCell celdaLog = (DataGridViewTextBoxCell)dgvLog.Rows[e.RowIndex].Cells[1];
			
			string log = celdaLog.Value.ToString();
			string tipo = celdaTipo.Value.ToString();
			
			//mensaje
			//titulo
			//botones
			//icon
			
			MessageBoxIcon 	icono = MessageBoxIcon.Information;
			MessageBoxButtons botones = MessageBoxButtons.OK;
				MessageBox.Show(log, tipo , botones , icono);
		}*/
	}
}
