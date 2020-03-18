Imports System.Data.OleDb
Public Class Form1
    Dim Conn As OleDbConnection
    Dim da As OleDbDataAdapter
    Dim ds As DataSet
    Dim LokasiDB As String
    Dim upd As Integer
    Dim simpan As Integer


    Sub Koneksi()
        LokasiDB = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Data.accdb"
        Conn = New OleDbConnection(LokasiDB)
        If Conn.State = ConnectionState.Closed Then Conn.Open()
    End Sub
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Koneksi()
        da = New OleDbDataAdapter("Select * from Table1", Conn)
        ds = New DataSet
        ds.Clear()
        da.Fill(ds, "Table1")
        DataGridView1.DataSource = (ds.Tables("Table1"))
        tb_simpan.Enabled = False
        tb_simpan.BackColor = Color.Empty
        GroupBox1.Hide()
        GroupBox2.Hide()
        DataGridView1.Hide()

    End Sub

    Private Sub tb_simpan_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles tb_simpan.Click
        If tb_nama_pemilik.Text = "" Or tb_nama.Text = "" Or ComboBox1.Text = "" Or tb_warna.Text = "" Or tb_waktu.Text = "" Then
            MsgBox("Silahkan Isi Semua Form")
        Else
            If simpan = 1 Then
                Dim CMD As OleDbCommand
                Call Koneksi()

                Dim simpan As String = "insert into Table1 values('" & TextBox1.Text & "','" & tb_nama_pemilik.Text & "','" & tb_nama.Text & "','" & ComboBox1.Text & "','" & tb_warna.Text & "','" & tb_waktu.Text & "')"
                CMD = New OleDbCommand(simpan, Conn)
                CMD.ExecuteNonQuery()
                MsgBox("Input data berhasil")
                simpan = 0
            End If

            If upd = 1 Then
                Call Koneksi()
                Dim CMD As OleDbCommand
                Dim edit As String = "update Table1 set NAMAPEMILIK='" & tb_nama_pemilik.Text & "',NAMAKUCING='" & tb_nama.Text & "',TIPE='" & ComboBox1.Text & "',WARNA='" & tb_warna.Text & "',WAKTU='" & tb_waktu.Text & "' where NAMAPEMILIK='" & tb_nama_pemilik.Text & "'"
                CMD = New OleDbCommand(edit, Conn)
                CMD.ExecuteNonQuery()
                MsgBox("Data Berhasil diUpdate")
                TextBox1.Enabled = True
                upd = 0
            End If
            TextBox1.Text = ""
            tb_nama.Text = ""
            tb_nama_pemilik.Text = ""
            tb_waktu.Text = ""
            tb_warna.Text = ""
            ComboBox1.Text = ""
            tb_simpan.Enabled = False
            tb_simpan.BackColor = Color.Empty

            End If

    End Sub

    Private Sub bt_re_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles bt_re.Click
        Koneksi()
        da = New OleDbDataAdapter("Select * from Table1", Conn)
        ds = New DataSet
        ds.Clear()
        da.Fill(ds, "Table1")
        DataGridView1.DataSource = (ds.Tables("Table1"))
    End Sub

    Private Sub bt_edit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles bt_edit.Click
        MsgBox("silahkan lengkapi form dan klik simpan ")
        upd = 1
        TextBox1.Enabled = False
        tb_simpan.Enabled = True
        tb_simpan.BackColor = Color.LightGreen
    End Sub
    Private Sub bt_tambah_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles bt_tambah.Click
        MsgBox("silahkan lengkapi form dan klik simpan ")
        simpan = 1
        TextBox1.Focus()
        tb_simpan.Enabled = True
        tb_simpan.BackColor = Color.LightGreen

    End Sub

    
    Private Sub bt_hapus_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles bt_hapus.Click

        If tb_nama_pemilik.Text = "" Then
            MsgBox("Silahkan Pilih nama pemilik yang akan di hapus")
        Else
            If MessageBox.Show("Yakin akan dihapus..?", "", MessageBoxButtons.YesNo) = Windows.Forms.DialogResult.Yes Then
                Call Koneksi()
                Dim CMD As OleDbCommand
                Dim hapus As String = "delete From Table1  where NAMAPEMILIK='" & tb_nama_pemilik.Text & "'"
                CMD = New OleDbCommand(hapus, Conn)
                CMD.ExecuteNonQuery()
                MsgBox("Data berhasil di hapus")

            End If
            TextBox1.Text = ""
            tb_nama.Text = ""
            tb_nama_pemilik.Text = ""
            tb_waktu.Text = ""
            tb_warna.Text = ""
            ComboBox1.Text = ""
        End If
    End Sub


    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If tb_user.Text = "danu" And tb_ps.Text = "danu" Then
            GroupBox3.Hide()
            GroupBox1.Show()
            GroupBox2.Show()
            DataGridView1.Show()
        Else
            MsgBox("Username dan Password anda tidak sesui")
        End If

    End Sub
End Class