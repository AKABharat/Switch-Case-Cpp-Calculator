#include<iostream>
using namespace std;
int main(){
  cout << "\n********** CALCULATOR ***********" << endl;
  int a, b;
  cout << "enter two numbers : ";
  cin >> a >> b;
  cout << "enter :-\n"
  << "1 -> addition\n"
  << "2 -> subtraction\n"
  << "3 -> multiply\n"
  << "4 -> divide\n"
  << "5 -> modulus\n";
  cout << "please enter your choice : " << endl;
  int num;
  cin >> num;
  switch(num){
    case 1:
      cout << a << "+" << b << " = " << a + b << endl;
      break;
      case 2:
        cout << a << "-" << b << " = " << a - b << endl;
        break;
        case 3:
          cout << a << "x" << b << " = " << a * b << endl;
          break;
          case 4:
            cout << a << "/" << b << " = " << a / b << endl;
            break;
            case 5:
              cout << a << "%" << b << " = " << a % b << endl;
              break;
              default:
                cout << "invalid choice !!!"<<endl;
                cout << "Refreshing ....." << endl;
                main();
                break;
  }
  return 0;
}
// made by : AKABharat
