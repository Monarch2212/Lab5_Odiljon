#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    cout << "PROBLEM 1\n";
    for (int i=1; i<=10; i++){
        cout << i << " " ;
    } 
    cout << endl;
    
    cout << "PROBLEM 2\n";
    int sum = 0;
    for (int i=1; i<=10; i++){
        cout << i << " " ;
        sum += i;
    }
    cout << sum << endl;
    
    cout << "PROBLEM 3\n";
    for (int i=1; i<=100; ++i){
        if(i % 5 == 0){
            continue;
        }
        cout << i << " " ;
    }
    cout << endl;
    
    cout << "PROBLEM 4\n";
    int n;
    cin >> n;
    for (int i=1; i<=n; ++i){
        if(i % 10 == 0){
            cout << i << " " ;
        }
    }
    cout << endl;
    
    cout << "PROBLEM 5\n";
    int count = 0;
    for (int i = 65;i<=90; ++i){
        cout << static_cast<char>(i) << " ";
        count++;
        if (count % 5 == 0){
            cout << endl;
        }
    }
    cout << endl;
    
    cout << "PROBLEM 6\n";
    float GPA, total_credits = 0, Credit_for_one_subject, grade, Score_for_one_subject, total_score;
    int number_of_subjects;
    cin >> number_of_subjects;
    for(int i = 0; i < number_of_subjects; i++){
        cin >> Credit_for_one_subject;
        total_credits += Credit_for_one_subject;
    
        cin >> grade;
        Score_for_one_subject = grade * Credit_for_one_subject;
        total_score += Score_for_one_subject;
    }
    GPA = total_score / total_credits;
    cout << "Your total GPA is " << GPA << endl;
    
    cout << "PROBLEM 7\n";
    int number2;
    cin >> number2;
    int devisor = 2;
    while (number2 % devisor){
        devisor ++;
    }
    if (devisor == number2){
        cout << "Number is prime\n";
    }
    else{
        cout << "Number is not prime\n";
    }
    
    cout << "PROBLEM 8\n";
    int n1;
    cin >> n1;
    while(n1 > 0){
        int digit = n1 % 10;
        cout << digit;
        n1 = n1 / 10;
    }
    cout << endl;
    
    cout << "PROBLEM 9\n";
    int o;
    cin >> o;
    int sum1 = 0;
    for(int i = 1; i <= o; i++){
        sum1 += i * i;
    }
    cout << sum1;
    cout << endl;
    
    cout << "PROBLEM 10\n";
    int number, max_number = 0;
    do{
        cin >> number;
        if (number != 0){
           if(number > max_number){
            max_number = number;
           }
        }
    }     
    while (number != 0);
    if (max_number != 0){
        cout << "Max is " << max_number << endl;
    }
    
    cout << "PROBLEM 11\n";
    int number1, sum2 = 0, positive = 0, negative = 0;
    double average;
    
    while(true){
        cin >> number1;
        if (number1 == 0){
            break;
        } else if (number1 > 0){
            positive++;
        } else {
            negative++;
        }
        sum2 += number1;
    }
    average = static_cast<double>(sum2)/(positive + negative);
    cout << "The number of positives is " << positive << endl;
    cout << "The number of negatives is " << negative << endl;
    cout << "The total is " << sum2 << endl;
    cout << "The average is " << average << endl;
    
    cout << "PROBLEM 12\n";
    int d;
    cin >> d;
    for (int i = 0; i < d; ++i){
        for(int j = 0; j < d; ++j){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "PROBLEM 13\n";
    int pattern;
    cin >> pattern;
    for (int i = 1; i <= pattern; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "PROBLEM 14\n";
    int height;
    cin >> height;
    if (height == 0) {
        cout << "The depth is 0" << endl;
    }
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << endl;
    }
    cout << "PROBLEM 15\n";
    int series;
    cin >> series;
    double result = 0;
    if (series == 0){
        cout << "It cannot be zero" << endl;
    }
    for (int i = 1; i <= series; i++){
        if (i < series){
            cout << "1/" << i << " + ";
            result += 1/(double)i; 
        } else{
            cout << "1/" << i;
            result += 1/(double)i;
        }
    }
    cout << "\nThe sum is " << result <<endl;
    
    cout << "PROBLEM 16\n";
    double initialRent = 1000;
    double rent;
    int years = 5;
    double totalRent = 0;
    double all_years = 0;
    for (int i = 1; i <= years; ++i){
        rent = initialRent * pow(1.03, i);
        totalRent = rent * 12;
        all_years += totalRent;
        cout << "For year number " << i << " rent is " << rent << endl;
        cout << "The total for year " << i << " is " << totalRent << endl;
    }
    cout << "For all " << years << " years total rent is " << all_years << endl;
    
    cout << "PROBLEM 17\n";
    int number3;
    cin >> number3;
    int sum3 = 0;
    while (number3 != 0){
        sum3 += number3 % 10;
        number3 /= 10;
    }
    cout << "The sum of digits is " << sum3 << endl;
    
    cout << "PROBLEM 18\n";
    
    cout << "PROBLEM 19\n";
    int number4;
    cin >> number4;
    for (int i = 2; i <= number4; ++i) {
        while (number4 % i == 0) {
            cout << i << " ";
            number4 /= i;
        }
    }
    cout << endl;
    
    cout << "PROBLEM 20\n";
    
    return 0;
}
