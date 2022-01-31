#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

namespace Ui {
class SimpleCalculator;
}

class SimpleCalculator : public QMainWindow
{
    Q_OBJECT

    enum operate {ADDITION, SUBTRACTION, MULTIPLICATION, DEVISION, MOD, POWERXY, POWER2, POWER3, POWER10, NONE};

public:
    explicit SimpleCalculator(QWidget *parent = nullptr);
    ~SimpleCalculator();

private slots:

    void on_simple_pb_0_clicked();

    void on_simple_pb_dot_clicked();

    void on_simple_pb_1_clicked();

    void on_simple_pb_2_clicked();

    void on_simple_pb_3_clicked();

    void on_simple_pb_4_clicked();

    void on_simple_pb_5_clicked();

    void on_simple_pb_6_clicked();

    void on_simple_pb_7_clicked();

    void on_simple_pb_8_clicked();

    void on_simple_pb_9_clicked();

    void on_simple_pb_addition_clicked();

    void on_simple_pb_subtraction_clicked();

    void on_simple_pb_multiplication_clicked();

    void on_simple_pb_devision_clicked();

    void on_simple_pb_equal_clicked();

    void on_simple_pb_percentage_clicked();

    void on_simple_pb_markChanger_clicked();

    void on_simple_pb_ac_clicked();

    void on_simple_pb_clear_clicked();

    void on_simple_pb_clear_pressed();

    void on_simple_pb_clear_released();

    void on_pro_pb_ac_clicked();

    void on_pro_pb_c_clicked();

    void on_pro_pb_absolute_clicked();

    void on_pro_pb_changeMark_clicked();

    void on_pro_pb_0_clicked();

    void on_pro_pb_dot_clicked();

    void on_pro_pb_equal_clicked();

    void on_pro_pb_addition_clicked();

    void on_pro_pb_subtraction_clicked();

    void on_pro_pb_multiplication_clicked();

    void on_pro_pb_devision_clicked();

    void on_pro_pb_percentage_clicked();

    void on_pro_pb_e_clicked();

    void on_pro_pb_powx3_clicked();

    void on_pro_pb_powx2_clicked();

    void on_pro_pb_powxy_clicked();

    void on_pro_pb_pow10x_clicked();

    void on_pro_pb_log_clicked();

    void on_pro_pb_ln_clicked();

    void on_pro_pb_mod_clicked();

    void on_pro_pb_1_clicked();

    void on_pro_pb_2_clicked();

    void on_pro_pb_3_clicked();

    void on_pro_pb_4_clicked();

    void on_pro_pb_5_clicked();

    void on_pro_pb_6_clicked();

    void on_pro_pb_7_clicked();

    void on_pro_pb_8_clicked();

    void on_pro_pb_9_clicked();

    void on_pro_pb_pi_clicked();

    void on_SimpleCalculator_iconSizeChanged(const QSize &iconSize);

private:
    Ui::SimpleCalculator *ui;
    double first = 0;
    double second = 0;
    operate op = NONE;
};

#endif // SIMPLECALCULATOR_H
