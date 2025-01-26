using System;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form3 : Form
    {
        private double firstNumber = 0;
        private string operation = "";
        private bool isOperationPerformed = false;

        public Form3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e) { AppendNumber("1"); }
        private void button2_Click(object sender, EventArgs e) { AppendNumber("2"); }
        private void button3_Click(object sender, EventArgs e) { AppendNumber("3"); }
        private void button4_Click(object sender, EventArgs e) { AppendNumber("4"); }
        private void button5_Click(object sender, EventArgs e) { AppendNumber("5"); }
        private void button6_Click(object sender, EventArgs e) { AppendNumber("6"); }
        private void button7_Click(object sender, EventArgs e) { AppendNumber("7"); }
        private void button8_Click(object sender, EventArgs e) { AppendNumber("8"); }
        private void button9_Click(object sender, EventArgs e) { AppendNumber("9"); }
        private void button10_Click(object sender, EventArgs e) { AppendNumber("0"); }

        private void button11_Click(object sender, EventArgs e) { SetOperation("-"); }
        private void button12_Click(object sender, EventArgs e) { SetOperation("+"); }
        private void button13_Click(object sender, EventArgs e) { SetOperation("*"); }
        private void button14_Click(object sender, EventArgs e) { SetOperation("/"); }

        private void button15_Click(object sender, EventArgs e) { CalculateResult(); }

        private void AppendNumber(string number)
        {
            if (label1.Text == "0" || isOperationPerformed)
                label1.Text = "";

            isOperationPerformed = false;
            label1.Text += number;
            textBox1.Text = label1.Text;
        }

        private void SetOperation(string op)
        {
            firstNumber = double.Parse(label1.Text);
            operation = op;
            isOperationPerformed = true;
            label1.Text = $"{firstNumber} {operation}";
            textBox1.Text = label1.Text;
        }

        private void CalculateResult()
        {
            double secondNumber = 0;
            if (!double.TryParse(label1.Text, out secondNumber))
            {
                label1.Text = "Błąd";
                textBox1.Text = label1.Text;
                return;
            }

            double result = 0;

            switch (operation)
            {
                case "+":
                    result = firstNumber + secondNumber;
                    break;
                case "-":
                    result = firstNumber - secondNumber;
                    break;
                case "*":
                    result = firstNumber * secondNumber;
                    break;
                case "/":
                    result = secondNumber != 0 ? firstNumber / secondNumber : double.NaN;
                    break;
                default:
                    label1.Text = "Błąd operacji";
                    textBox1.Text = label1.Text;
                    return;
            }

            label1.Text = double.IsNaN(result) ? "Błąd" : result.ToString();
            textBox1.Text = label1.Text;
            isOperationPerformed = false;
        }

        private void TextBox1_TextChanged(object sender, EventArgs e)
        {
            label1.Text = textBox1.Text;
        }

        private void button15_Click_1(object sender, EventArgs e)
        {
            Form1 form = new Form1();
            form.Show();
            this.Hide();
        }
    }
}
