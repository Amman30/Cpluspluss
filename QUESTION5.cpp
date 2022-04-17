#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string id;
    double hourly_wage;
    double hours_worked;

    double tax_percent = 3.625;

public:
    void set(string eid, double wage, double hours)
    {
        id = eid;
        hourly_wage = wage;
        hours_worked = hours;
    }
    double gross_pay()
    {
        double base_pay, overtime_pay;

        if (hours_worked > 40)
        {
            base_pay = 40 * hourly_wage;
            overtime_pay = (hours_worked - 40) * 1.5 * hourly_wage;
        }
        else
        {
            base_pay = hours_worked * hourly_wage;
            overtime_pay = 0;
        }

        return base_pay + overtime_pay;
    }
    double net_pay()
    {
        return ((100 - tax_percent) / 100) * gross_pay();
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Net pay: " << net_pay() << endl;
    }
};

int main()
{
    int N;
    cout << "Number of employees: ";
    cin >> N;

    Employee employees[N];

    for (int i = 0; i < N; i++)
    {
        string id;
        double wage;
        double hours;

        cout << endl << "[ Employee #" << i + 1 << " ]" << endl;

        cout << "Employee ID: ";
        cin >> id;
        cout << "Hourly wage: ";
        cin >> wage;
        cout << "Hours worked: ";
        cin >> hours;

        employees[i].set(id, wage, hours);
    }
    double total_payroll = 0, average;

    for (int i = 0; i < N; i++)
    {
        total_payroll += employees[i].gross_pay();
        employees[i].display();
    }

    average = total_payroll / N;

    cout << "Total payroll (incl. tax): " << total_payroll << endl;
    cout << "Average pay (incl. tax): " << average << endl;

    return 0;
}
