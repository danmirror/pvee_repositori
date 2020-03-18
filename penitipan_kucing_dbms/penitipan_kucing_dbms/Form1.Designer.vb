<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.tb_nama_pemilik = New System.Windows.Forms.TextBox()
        Me.tb_nama = New System.Windows.Forms.TextBox()
        Me.tb_warna = New System.Windows.Forms.TextBox()
        Me.tb_waktu = New System.Windows.Forms.TextBox()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.ComboBox1 = New System.Windows.Forms.ComboBox()
        Me.tb_simpan = New System.Windows.Forms.Button()
        Me.DataGridView1 = New System.Windows.Forms.DataGridView()
        Me.bt_re = New System.Windows.Forms.Button()
        Me.bt_edit = New System.Windows.Forms.Button()
        Me.bt_hapus = New System.Windows.Forms.Button()
        Me.bt_tambah = New System.Windows.Forms.Button()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.tb_user = New System.Windows.Forms.TextBox()
        Me.tb_ps = New System.Windows.Forms.TextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.GroupBox1.SuspendLayout()
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.SuspendLayout()
        '
        'tb_nama_pemilik
        '
        Me.tb_nama_pemilik.Location = New System.Drawing.Point(145, 41)
        Me.tb_nama_pemilik.Name = "tb_nama_pemilik"
        Me.tb_nama_pemilik.Size = New System.Drawing.Size(100, 20)
        Me.tb_nama_pemilik.TabIndex = 0
        '
        'tb_nama
        '
        Me.tb_nama.Location = New System.Drawing.Point(145, 67)
        Me.tb_nama.Name = "tb_nama"
        Me.tb_nama.Size = New System.Drawing.Size(100, 20)
        Me.tb_nama.TabIndex = 1
        '
        'tb_warna
        '
        Me.tb_warna.Location = New System.Drawing.Point(145, 120)
        Me.tb_warna.Name = "tb_warna"
        Me.tb_warna.Size = New System.Drawing.Size(100, 20)
        Me.tb_warna.TabIndex = 3
        '
        'tb_waktu
        '
        Me.tb_waktu.Location = New System.Drawing.Point(145, 146)
        Me.tb_waktu.Name = "tb_waktu"
        Me.tb_waktu.Size = New System.Drawing.Size(100, 20)
        Me.tb_waktu.TabIndex = 4
        '
        'GroupBox1
        '
        Me.GroupBox1.BackColor = System.Drawing.Color.Transparent
        Me.GroupBox1.Controls.Add(Me.Label6)
        Me.GroupBox1.Controls.Add(Me.Label5)
        Me.GroupBox1.Controls.Add(Me.Label4)
        Me.GroupBox1.Controls.Add(Me.Label3)
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Controls.Add(Me.TextBox1)
        Me.GroupBox1.Controls.Add(Me.ComboBox1)
        Me.GroupBox1.Controls.Add(Me.tb_simpan)
        Me.GroupBox1.Controls.Add(Me.tb_waktu)
        Me.GroupBox1.Controls.Add(Me.tb_warna)
        Me.GroupBox1.Controls.Add(Me.tb_nama)
        Me.GroupBox1.Controls.Add(Me.tb_nama_pemilik)
        Me.GroupBox1.Location = New System.Drawing.Point(67, 34)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(282, 214)
        Me.GroupBox1.TabIndex = 5
        Me.GroupBox1.TabStop = False
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.BackColor = System.Drawing.Color.White
        Me.Label6.Location = New System.Drawing.Point(30, 149)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(107, 13)
        Me.Label6.TabIndex = 15
        Me.Label6.Text = "WAKTU PENITIPAN"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.BackColor = System.Drawing.Color.White
        Me.Label5.Location = New System.Drawing.Point(30, 123)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(92, 13)
        Me.Label5.TabIndex = 14
        Me.Label5.Text = "WARNA KUCING"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.BackColor = System.Drawing.Color.White
        Me.Label4.Location = New System.Drawing.Point(29, 96)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(81, 13)
        Me.Label4.TabIndex = 13
        Me.Label4.Text = "JENIS KUCING"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.BackColor = System.Drawing.Color.White
        Me.Label3.Location = New System.Drawing.Point(28, 70)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(82, 13)
        Me.Label3.TabIndex = 12
        Me.Label3.Text = "NAMA KUCING"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.BackColor = System.Drawing.Color.White
        Me.Label2.Location = New System.Drawing.Point(30, 44)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(83, 13)
        Me.Label2.TabIndex = 11
        Me.Label2.Text = "NAMA PEMILIK"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.BackColor = System.Drawing.Color.White
        Me.Label1.Location = New System.Drawing.Point(28, 22)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(18, 13)
        Me.Label1.TabIndex = 10
        Me.Label1.Text = "ID"
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(145, 15)
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(100, 20)
        Me.TextBox1.TabIndex = 9
        '
        'ComboBox1
        '
        Me.ComboBox1.AutoCompleteCustomSource.AddRange(New String() {"anggora", "mesir"})
        Me.ComboBox1.FormattingEnabled = True
        Me.ComboBox1.Items.AddRange(New Object() {"anggora", "mesir", "persia", "exotic shorthair", "abyssinian", "maine coon", "russian blue", "siamese", "ragdoll", "sphynx", "munchkin"})
        Me.ComboBox1.Location = New System.Drawing.Point(145, 93)
        Me.ComboBox1.Name = "ComboBox1"
        Me.ComboBox1.Size = New System.Drawing.Size(121, 21)
        Me.ComboBox1.TabIndex = 8
        '
        'tb_simpan
        '
        Me.tb_simpan.BackColor = System.Drawing.Color.Gray
        Me.tb_simpan.Location = New System.Drawing.Point(32, 176)
        Me.tb_simpan.Name = "tb_simpan"
        Me.tb_simpan.Size = New System.Drawing.Size(75, 23)
        Me.tb_simpan.TabIndex = 7
        Me.tb_simpan.Text = "SIMPAN"
        Me.tb_simpan.UseVisualStyleBackColor = False
        '
        'DataGridView1
        '
        Me.DataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.DataGridView1.Location = New System.Drawing.Point(76, 262)
        Me.DataGridView1.Name = "DataGridView1"
        Me.DataGridView1.Size = New System.Drawing.Size(641, 144)
        Me.DataGridView1.TabIndex = 6
        '
        'bt_re
        '
        Me.bt_re.Location = New System.Drawing.Point(123, 48)
        Me.bt_re.Name = "bt_re"
        Me.bt_re.Size = New System.Drawing.Size(75, 23)
        Me.bt_re.TabIndex = 10
        Me.bt_re.Text = "REFRESH"
        Me.bt_re.UseVisualStyleBackColor = True
        '
        'bt_edit
        '
        Me.bt_edit.BackColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(255, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.bt_edit.Location = New System.Drawing.Point(27, 48)
        Me.bt_edit.Name = "bt_edit"
        Me.bt_edit.Size = New System.Drawing.Size(75, 23)
        Me.bt_edit.TabIndex = 11
        Me.bt_edit.Text = "EDIT"
        Me.bt_edit.UseVisualStyleBackColor = False
        '
        'bt_hapus
        '
        Me.bt_hapus.BackColor = System.Drawing.Color.Crimson
        Me.bt_hapus.Location = New System.Drawing.Point(123, 19)
        Me.bt_hapus.Name = "bt_hapus"
        Me.bt_hapus.Size = New System.Drawing.Size(75, 23)
        Me.bt_hapus.TabIndex = 12
        Me.bt_hapus.Text = "HAPUS"
        Me.bt_hapus.UseVisualStyleBackColor = False
        '
        'bt_tambah
        '
        Me.bt_tambah.BackColor = System.Drawing.Color.Lime
        Me.bt_tambah.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None
        Me.bt_tambah.Image = Global.penitipan_kucing_dbms.My.Resources.Resources.edit_icon_2375785_960_720
        Me.bt_tambah.ImageAlign = System.Drawing.ContentAlignment.TopLeft
        Me.bt_tambah.Location = New System.Drawing.Point(27, 19)
        Me.bt_tambah.Name = "bt_tambah"
        Me.bt_tambah.Size = New System.Drawing.Size(75, 23)
        Me.bt_tambah.TabIndex = 13
        Me.bt_tambah.Text = "TAMBAH"
        Me.bt_tambah.UseVisualStyleBackColor = False
        '
        'GroupBox2
        '
        Me.GroupBox2.BackColor = System.Drawing.Color.Transparent
        Me.GroupBox2.Controls.Add(Me.bt_tambah)
        Me.GroupBox2.Controls.Add(Me.bt_hapus)
        Me.GroupBox2.Controls.Add(Me.bt_edit)
        Me.GroupBox2.Controls.Add(Me.bt_re)
        Me.GroupBox2.Location = New System.Drawing.Point(472, 161)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(216, 82)
        Me.GroupBox2.TabIndex = 14
        Me.GroupBox2.TabStop = False
        '
        'GroupBox3
        '
        Me.GroupBox3.BackColor = System.Drawing.Color.Transparent
        Me.GroupBox3.Controls.Add(Me.Label8)
        Me.GroupBox3.Controls.Add(Me.Label7)
        Me.GroupBox3.Controls.Add(Me.Button1)
        Me.GroupBox3.Controls.Add(Me.tb_ps)
        Me.GroupBox3.Controls.Add(Me.tb_user)
        Me.GroupBox3.ForeColor = System.Drawing.Color.White
        Me.GroupBox3.Location = New System.Drawing.Point(318, 78)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(220, 232)
        Me.GroupBox3.TabIndex = 15
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Login panel"
        '
        'tb_user
        '
        Me.tb_user.Location = New System.Drawing.Point(86, 58)
        Me.tb_user.Name = "tb_user"
        Me.tb_user.Size = New System.Drawing.Size(100, 20)
        Me.tb_user.TabIndex = 0
        '
        'tb_ps
        '
        Me.tb_ps.Location = New System.Drawing.Point(86, 111)
        Me.tb_ps.Name = "tb_ps"
        Me.tb_ps.Size = New System.Drawing.Size(100, 20)
        Me.tb_ps.TabIndex = 1
        '
        'Button1
        '
        Me.Button1.BackColor = System.Drawing.Color.DimGray
        Me.Button1.Location = New System.Drawing.Point(64, 160)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 23)
        Me.Button1.TabIndex = 2
        Me.Button1.Text = "LOGIN"
        Me.Button1.UseVisualStyleBackColor = False
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(6, 61)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(68, 13)
        Me.Label7.TabIndex = 3
        Me.Label7.Text = "USERNAME"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(6, 114)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(70, 13)
        Me.Label8.TabIndex = 4
        Me.Label8.Text = "PASSWORD"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.penitipan_kucing_dbms.My.Resources.Resources.kucing
        Me.ClientSize = New System.Drawing.Size(798, 418)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.DataGridView1)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        CType(Me.DataGridView1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents tb_nama_pemilik As System.Windows.Forms.TextBox
    Friend WithEvents tb_nama As System.Windows.Forms.TextBox
    Friend WithEvents tb_warna As System.Windows.Forms.TextBox
    Friend WithEvents tb_waktu As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents ComboBox1 As System.Windows.Forms.ComboBox
    Friend WithEvents tb_simpan As System.Windows.Forms.Button
    Friend WithEvents DataGridView1 As System.Windows.Forms.DataGridView
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents bt_re As System.Windows.Forms.Button
    Friend WithEvents bt_edit As System.Windows.Forms.Button
    Friend WithEvents bt_hapus As System.Windows.Forms.Button
    Friend WithEvents bt_tambah As System.Windows.Forms.Button
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents tb_ps As System.Windows.Forms.TextBox
    Friend WithEvents tb_user As System.Windows.Forms.TextBox

End Class
