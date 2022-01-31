#include "simplecalculator.h"
#include "ui_simplecalculator.h"
#include <math.h>
SimpleCalculator::SimpleCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimpleCalculator)
{
    ui->setupUi(this);
}

SimpleCalculator::~SimpleCalculator()
{
    delete ui;
}

void SimpleCalculator::on_simple_pb_0_clicked()
{
    if (ui->simple_le_entry->text() != "0")
    {
        QString content = ui->simple_le_entry->text() + "0";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_dot_clicked()
{
    if (!ui->simple_le_entry->text().contains("."))
    {
        QString content = ui->simple_le_entry->text() + ".";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_1_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("1");
    }
    else
    {
       QString content = ui->simple_le_entry->text() + "1";
       ui->simple_le_entry->setText(content);
   }
}

void SimpleCalculator::on_simple_pb_2_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("2");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "2";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_3_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("3");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "3";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_4_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("4");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "4";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_5_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("5");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "5";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_6_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("6");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "6";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_7_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("7");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "7";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_8_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("8");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "8";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_9_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("9");
    }
    else
    {
        QString content = ui->simple_le_entry->text() + "9";
        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_addition_clicked()
{
    this->op = ADDITION;
    if (this->first == 0.0)
    {
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " + ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        QString result = QString("%10").arg(this->first + this->second);
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " + " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = this->first + this->second;
    }
}

void SimpleCalculator::on_simple_pb_subtraction_clicked()
{
    this->op = SUBTRACTION;
    if (this->first == 0.0)
    {
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " - ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        QString result = QString("%10").arg(this->first - this->second);
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " - " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = this->first - this->second;
    }
}

void SimpleCalculator::on_simple_pb_multiplication_clicked()
{
    this->op = MULTIPLICATION;
    if (this->first == 0.0)
    {
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " x ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        QString result = QString("%10").arg(this->first * this->second);
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " x " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = this->first * this->second;
    }
}

void SimpleCalculator::on_simple_pb_devision_clicked()
{
    this->op = DEVISION;

    if (this->first == 0.0)
    {
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString::number(this->first) + " / ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        QString result = QString("%10").arg(this->first / this->second);
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " / " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = this->first / this->second;
    }
}

void SimpleCalculator::on_simple_pb_equal_clicked()
{
    if (this->first == 0.0 && this->op != NONE)
    {
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first));
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        switch(this->op)
        {
            case ADDITION:
                on_simple_pb_addition_clicked();
                break;
            case SUBTRACTION:
                on_simple_pb_subtraction_clicked();
                break;
            case MULTIPLICATION:
                on_simple_pb_multiplication_clicked();
                break;
            case DEVISION:
                on_simple_pb_devision_clicked();
                break;
            case MOD:
                on_pro_pb_mod_clicked();
                break;
            case POWERXY:
                on_pro_pb_powxy_clicked();
                break;
            case POWER10:
                on_pro_pb_pow10x_clicked();
                break;
            case POWER2:
                on_pro_pb_powx2_clicked();
                break;
            case POWER3:
                on_pro_pb_powx3_clicked();
                break;
            case NONE:
                break;
        }
    }
}

void SimpleCalculator::on_simple_pb_percentage_clicked()
{
    QString result = QString("%100").arg(ui->simple_le_entry->text().toDouble() / 100);
    ui->simple_lbl_previous->setText("% " + QString("%10").arg(this->first) + " = \n" + result);
    ui->simple_le_entry->setText("0");
    this->first = result.toDouble();
}

void SimpleCalculator::on_simple_pb_markChanger_clicked()
{
    if (ui->simple_le_entry->text() != "0")
    {
        QString content;

        if (!ui->simple_le_entry->text().contains("-"))
        {
            content = "-" + ui->simple_le_entry->text();
        }
        else
        {
            for (int i = 1; i < ui->simple_le_entry->text().length(); i++)
                content += ui->simple_le_entry->text()[i];
        }

        ui->simple_le_entry->setText(content);
    }
}

void SimpleCalculator::on_simple_pb_ac_clicked()
{
    this->first = 0;
    this->second = 0;
    ui->simple_lbl_previous->setText("");
    ui->simple_lbl_previous->show();
    ui->simple_le_entry->setText("0");
}


void SimpleCalculator::on_simple_pb_clear_clicked()
{
    QString content;
    for (int i = 0; i < ui->simple_le_entry->text().length() - 1; i++)
        content += ui->simple_le_entry->text()[i];

    ui->simple_le_entry->setText(content);
}

void SimpleCalculator::on_simple_pb_clear_pressed()
{
    ui->simple_pb_clear->hide();
}

void SimpleCalculator::on_simple_pb_clear_released()
{
    ui->simple_pb_clear->show();
}

void SimpleCalculator::on_pro_pb_ac_clicked()
{
    on_simple_pb_ac_clicked();
}

void SimpleCalculator::on_pro_pb_c_clicked()
{
    on_simple_pb_clear_clicked();
}

void SimpleCalculator::on_pro_pb_changeMark_clicked()
{
    on_simple_pb_markChanger_clicked();
}

void SimpleCalculator::on_pro_pb_0_clicked()
{
    on_simple_pb_0_clicked();
}

void SimpleCalculator::on_pro_pb_dot_clicked()
{
    on_simple_pb_dot_clicked();
}

void SimpleCalculator::on_pro_pb_equal_clicked()
{
    on_simple_pb_equal_clicked();
}

void SimpleCalculator::on_pro_pb_addition_clicked()
{
    on_simple_pb_addition_clicked();
}

void SimpleCalculator::on_pro_pb_subtraction_clicked()
{
    on_simple_pb_subtraction_clicked();
}

void SimpleCalculator::on_pro_pb_multiplication_clicked()
{
    on_simple_pb_multiplication_clicked();
}

void SimpleCalculator::on_pro_pb_devision_clicked()
{
    on_simple_pb_devision_clicked();
}

void SimpleCalculator::on_pro_pb_percentage_clicked()
{
    on_simple_pb_percentage_clicked();
}

void SimpleCalculator::on_pro_pb_e_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("2.71828182845904");
    }
    else if (this->op != NONE)
    {
        on_simple_pb_equal_clicked();
    }
}

void SimpleCalculator::on_pro_pb_powx3_clicked()
{
    this->op = POWER3;
    if (this->first == 0.0)
    {
        QString result = QString("%10").arg(pow(ui->simple_le_entry->text().toDouble(), 3));
        ui->simple_lbl_previous->setText(ui->simple_le_entry->text()+"^3 = \n" + result);
        ui->simple_le_entry->setText("0");
        this->first = result.toDouble();
    }
    else
    {
        QString result = QString("%10").arg(pow(this->first, 3));
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + "^3 = \n" + result);
        ui->simple_le_entry->setText("0");
        this->first = pow(this->first, 3);
    }
}

void SimpleCalculator::on_pro_pb_powx2_clicked()
{
    this->op = POWER2;
    if (this->first == 0.0)
    {
        QString result = QString("%10").arg(pow(ui->simple_le_entry->text().toDouble(), 2));
        ui->simple_lbl_previous->setText(ui->simple_le_entry->text()+"^2 = \n" + result);
        ui->simple_le_entry->setText("0");
        this->first = result.toDouble();
    }
    else
    {
        QString result = QString("%10").arg(pow(this->first, 2));
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + "^2 = \n" + result);
        ui->simple_le_entry->setText("0");
        this->first = pow(this->first, 2);
    }

}

void SimpleCalculator::on_pro_pb_powxy_clicked()
{
    this->op = POWERXY;
    if (this->first == 0.0)
    {
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " ^ ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        this->second = ui->simple_le_entry->text().toDouble();
        QString result = QString("%10").arg(pow(this->first, this->second));
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " ^ " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = result.toDouble();
    }
}

void SimpleCalculator::on_pro_pb_pow10x_clicked()
{
    this->op = POWER10;
    QString result = QString("%10").arg(pow(10, ui->simple_le_entry->text().toDouble()));
    ui->simple_lbl_previous->setText("10 ^ " + ui->simple_le_entry->text() + " = \n" + result);
    ui->simple_lbl_previous->show();
    ui->simple_le_entry->setText("0");
    this->first = pow(10, result.toDouble());
}

void SimpleCalculator::on_pro_pb_log_clicked()
{
    QString result = QString("%10").arg(log10(ui->simple_le_entry->text().toDouble()));
    ui->simple_lbl_previous->setText("log " + ui->simple_le_entry->text() + " = \n" + result);
    ui->simple_le_entry->setText("0");
    this->first = result.toDouble();
}

void SimpleCalculator::on_pro_pb_ln_clicked()
{
    QString result = QString("%10").arg(log(ui->simple_le_entry->text().toDouble()));
    ui->simple_lbl_previous->setText("ln " + ui->simple_le_entry->text() + " = \n" + result);
    ui->simple_le_entry->setText("0");
    this->first = result.toDouble();
}

void SimpleCalculator::on_pro_pb_absolute_clicked()
{
    if (ui->simple_le_entry->text().toDouble() < 0)
    {
        ui->simple_le_entry->setText(QString("%10").arg(-ui->simple_le_entry->text().toDouble()));
    }
}

void SimpleCalculator::on_pro_pb_mod_clicked()
{
    this->op = MOD;
    if (this->first == 0.0)
    {
        qDebug() << "This is running";
        this->first = ui->simple_le_entry->text().toDouble();
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " % ");
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else if (this->first < ui->simple_le_entry->text().toDouble())
    {
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " % " + ui->simple_le_entry->text() + " = \n" + QString("%10").arg(this->first));
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
    }
    else
    {
        QString result = QString("%10").arg((int)this->first % (int)this->second);
        ui->simple_lbl_previous->setText(QString("%10").arg(this->first) + " % " + QString("%10").arg(this->second) + " = \n" + result);
        ui->simple_lbl_previous->show();
        ui->simple_le_entry->setText("0");
        this->first = result.toDouble();
    }
}

void SimpleCalculator::on_pro_pb_pi_clicked()
{
    if (ui->simple_le_entry->text() == "0")
    {
        ui->simple_le_entry->setText("3.141592653");
    }
    else if (this->op != NONE)
    {
        on_simple_pb_equal_clicked();
    }
}

void SimpleCalculator::on_pro_pb_1_clicked()
{
    on_simple_pb_1_clicked();
}


void SimpleCalculator::on_pro_pb_2_clicked()
{
    on_simple_pb_2_clicked();
}

void SimpleCalculator::on_pro_pb_3_clicked()
{
    on_simple_pb_3_clicked();
}

void SimpleCalculator::on_pro_pb_4_clicked()
{
    on_simple_pb_4_clicked();
}

void SimpleCalculator::on_pro_pb_5_clicked()
{
    on_simple_pb_5_clicked();
}

void SimpleCalculator::on_pro_pb_6_clicked()
{
    on_simple_pb_6_clicked();
}

void SimpleCalculator::on_pro_pb_7_clicked()
{
    on_simple_pb_7_clicked();
}

void SimpleCalculator::on_pro_pb_8_clicked()
{
    on_simple_pb_8_clicked();
}

void SimpleCalculator::on_pro_pb_9_clicked()
{
    on_simple_pb_9_clicked();
}


void SimpleCalculator::on_SimpleCalculator_iconSizeChanged(const QSize &iconSize)
{

}
