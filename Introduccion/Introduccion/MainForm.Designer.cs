/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:23
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace Introduccion
{
	partial class MainForm
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.DataGridView dgvLog;
		private System.Windows.Forms.DataGridViewTextBoxColumn Tipo;
		private System.Windows.Forms.DataGridViewTextBoxColumn Log;
		private System.Windows.Forms.Button btnAñadirLog;
		private System.Windows.Forms.Button btnLeerDirectorio;
		private System.Windows.Forms.TextBox txtDirectorio;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		/// </summary>
		private void InitializeComponent()
		{
			this.dgvLog = new System.Windows.Forms.DataGridView();
			this.Tipo = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.Log = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.btnAñadirLog = new System.Windows.Forms.Button();
			this.btnLeerDirectorio = new System.Windows.Forms.Button();
			this.txtDirectorio = new System.Windows.Forms.TextBox();
			((System.ComponentModel.ISupportInitialize)(this.dgvLog)).BeginInit();
			this.SuspendLayout();
			// 
			// dgvLog
			// 
			this.dgvLog.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dgvLog.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
			this.Tipo,
			this.Log});
			this.dgvLog.Location = new System.Drawing.Point(12, 78);
			this.dgvLog.Name = "dgvLog";
			this.dgvLog.Size = new System.Drawing.Size(283, 259);
			this.dgvLog.TabIndex = 0;
			this.dgvLog.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.DgvLogMouseDoubleClick);
			// 
			// Tipo
			// 
			this.Tipo.HeaderText = "Tipo Log";
			this.Tipo.Name = "Tipo";
			this.Tipo.ReadOnly = true;
			// 
			// Log
			// 
			this.Log.HeaderText = "Descripcion";
			this.Log.Name = "Log";
			// 
			// btnAñadirLog
			// 
			this.btnAñadirLog.Location = new System.Drawing.Point(338, 37);
			this.btnAñadirLog.Name = "btnAñadirLog";
			this.btnAñadirLog.Size = new System.Drawing.Size(135, 23);
			this.btnAñadirLog.TabIndex = 1;
			this.btnAñadirLog.Text = "Añadir Log";
			this.btnAñadirLog.UseVisualStyleBackColor = true;
			this.btnAñadirLog.Click += new System.EventHandler(this.BtnAñadirLogClick);
			// 
			// btnLeerDirectorio
			// 
			this.btnLeerDirectorio.Location = new System.Drawing.Point(338, 92);
			this.btnLeerDirectorio.Name = "btnLeerDirectorio";
			this.btnLeerDirectorio.Size = new System.Drawing.Size(135, 23);
			this.btnLeerDirectorio.TabIndex = 2;
			this.btnLeerDirectorio.Text = "Leer Drectorio";
			this.btnLeerDirectorio.UseVisualStyleBackColor = true;
			this.btnLeerDirectorio.Click += new System.EventHandler(this.BtnLeerDirectorioClick);
			// 
			// txtDirectorio
			// 
			this.txtDirectorio.Location = new System.Drawing.Point(13, 37);
			this.txtDirectorio.Name = "txtDirectorio";
			this.txtDirectorio.Size = new System.Drawing.Size(282, 20);
			this.txtDirectorio.TabIndex = 3;
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = System.Drawing.Color.MistyRose;
			this.ClientSize = new System.Drawing.Size(502, 349);
			this.Controls.Add(this.txtDirectorio);
			this.Controls.Add(this.btnLeerDirectorio);
			this.Controls.Add(this.btnAñadirLog);
			this.Controls.Add(this.dgvLog);
			this.ForeColor = System.Drawing.Color.Maroon;
			this.Name = "MainForm";
			this.Text = "Introduccion";
			this.Load += new System.EventHandler(this.MainFormLoad);
			this.DoubleClick += new System.EventHandler(this.MainFormDoubleClick);
			((System.ComponentModel.ISupportInitialize)(this.dgvLog)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}
	}
}
