#include <iostream>
using namespace std;
class Cal{
    char op;
    float num1, num2;
    public:
    	void Input(){
    		cout << "Enter operator either + or - or * or /: ";
                cin >> op;
                cout << "Enter two operands: ";
                cin >> num1 >> num2;
		}
    void switch_fun(){
    	switch(op)
    {
        case '+':
            cout << num1+num2 << endl;
            break;
        case '-':
            cout << num1-num2 << endl;
            break;
        case '*':
            cout << num1*num2 << endl;
            break;
        case '/':
            cout << num1/num2 << endl;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
	}
};
int main()
{
  Cal op;
  op.Input();
  op.switch_fun();
    return 0;
}

