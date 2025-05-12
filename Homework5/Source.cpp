#include <iostream>
#include <ctime>
#include <iomanip>



//������� ���������� �����(������� ����� �� ��������� ��������� ���������), �������� ����������� ����������.
//- ���������� ������� ����� ������� �� 0 �� N, ������ ����������� �������� � ����� �������
//- ���������� ������� ����� ����� �� 0 �� N, ������ ����������� �������� � ����� �����
//- ���������� ������� ����� ������� �� 0 �� N, ���������� ���� ���������� ��������, ���������� ������ �������� ���������� ��������
//- ���������� ������� ������ ���� ��������, ������� �� ������
//- ���������� ������� ������ ���� �����, ������� �� ������
//- ���������� ������� ����� ���� �����, ������� ������ ����� �����.
//
//* (�������� � �������) ������� ���������� �����, ���� - ��� ������� �������� �� �����(������ ��������� �������), ��������� ���������� �� 0 �� N ��������.��������� �� ���� ����� :
//1    2   3   4   5
//16 17 18 19 6
//15 24 25 20 7
//14 23 22 21 8
//13 12 11 10 9








//size_t � ��� ��� ������, ������� ������������ � C � C++ ��� ������������� �������� �������� � ������.��� ����������� ������������� ���, ������� ������ ������������ ��� �������� �������� ��������, ����� ����� � ������ �������, ������� �� ����� ���� ��������������.
//
//�������� ����������� size_t :
//����������� ��� : �������� ���� size_t ������ �������������(��� ������ ����), ��� ��� ��� ������������� ��� ��������� ������� ������, � ������� �� ����� ���� ��������������.
//
//����������� �� ��������� : ������ size_t ������� �� ����������� ����������(32 - ������ ��� 64 - ������ �������) :
//
//    �� 32 - ������ �������� ������ size_t ������ ����� 4 �����.
//
//    �� 64 - ������ �������� ������ size_t ������ ����� 8 ����.
//
//    ������������ ��� ������ � ������� : size_t ������������ � ����������� ����������� ��� ������ � �������.�������� :
//
//    sizeof ���������� �������� ���� size_t, ������� ������������ ������ ������� � ������.
//
//    ������� ������ � ���������, ����� ��� std::vector::size() ��� std::string::length(), ����� ���������� �������� ���� size_t.

using namespace std;
template < typename B, size_t ROW, size_t COL>

int print_arr_2D(const B(&arr)[ROW][COL]){
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << setw(5) << arr[i][j];        // � ������� ������������) &arr <-- ��� ������ �� ����� ������ �� � ������� �������� �� ����� � ��������� 2� ������ ������
        } 
        cout<<endl;
    }
    return 0; 
}

int main() {
    srand(time(NULL));
    //������� ���������� �����(������� ����� �� ��������� ��������� ���������), �������� ����������� ����������.
    const int ROW = 5, COL = 5;
    int arr[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 100 - 20;
        }
    }
    //print_arr_2D(arr);
    ////-----------------------------------------------------------------------------------------------------------------
    //// 
    //// 
    //// 
    ////- ���������� ������� ����� ������� �� 0 �� N, ������ ����������� �������� � ����� �������
    //std::cout << "//- Koristuvach enter the station number from 0 to N, find out the maximum value of this station(pls print index 0 - 4) :";
    //int users_row = 0;
    //int result = 0;
    //std::cin >> users_row;
    //for (int i = 0; i < COL; i++) {
    //    if (result < arr[i][users_row]) {
    //        result = arr[i][users_row];
    //    }
    //}
    //std::cout << "result :" << result << std::endl;
    ////-----------------------------------------------------------------------------------------------------------------
    //// 
    //// 
    //// 
    ////- ���������� ������� ����� ����� �� 0 �� N, ������ ����������� �������� � ����� �����
    //std::cout << "//- Koristuvach enter the row number from 0 to N, find out the maximum value for this row(pls print index 0 - 4) :";
    //int users_col = 0;
    //result = 0;
    //std::cin >> users_col;
    //result = arr[users_col][0];
    //for (int i = 0; i < COL; i++) {
    //    if (result < arr[users_col][i])
    //        result = arr[users_col][i];
    //}
    //std::cout << "result :" << result << std::endl;
    ////-----------------------------------------------------------------------------------------------------------------
    ////
    ////
    ////
    ////- ���������� ������� ����� ������� �� 0 �� N, ���������� ���� ���������� ��������, ���������� ������ �������� ���������� ��������
    //std::cout << "Please enter the station number from 0 to N, calculate the sum of negative elements, calculate the average value of positive elements :";
    //users_row = 0;
    //result = 0;
    //int iteretion = 0, result2 = 0 ;
    //std::cin >> users_row;
    //for (int i = 0; i < COL; i++) {
    //    if (    0> arr[i][users_row]) {
    //        result += arr[i][users_row];
    //    }
    //    else if (0 <= arr[i][users_row]) {
    //        iteretion += 1;
    //        result2 += arr[i][users_row];
    //    }
    //}
    //std::cout << "result1 negative numbers :" << result << std::endl;
    //std::cout << "result2 middl of positive numbers :" << (double)result2 / iteretion << std::endl;
    ////-----------------------------------------------------------------------------------------------------------------
    ////
    ////
    ////
    ////- ���������� ������� ������ ���� ��������, ������� �� ������
    //std::cout << "//- User enters two column numbers, replace them with their places " << std::endl;
    // users_col = 0;
    // int users_col1 = 0;
    // std::cout << "firs col :";
    // std::cin >> users_col;
    // std::cout << "second col : ";
    // cin >> users_col1;
    // for (int i = 0; i < COL; i++) {
    //     int variable1 = arr[i][users_col1];
    //     arr[i][users_col1] = arr[i][users_col];
    //     arr[i][users_col] = variable1;
    //    }
    // print_arr_2D(arr);
    // //-----------------------------------------------------------------------------------------------------------------
    // //
    // //
    // //
    // //- ���������� ������� ������ ���� �����, ������� �� ������
    // std::cout << "//- User enters numbers of two lines, replace them with their places " << std::endl;
    // users_row = 0;
    // int users_row1 = 0;
    // std::cout << "firs row :";
    // std::cin >> users_row;
    // std::cout << "second row : ";
    // cin >> users_row1;
    // for (int i = 0; i < COL; i++) {
    //     int variable1 = arr[users_row1][i];
    //     arr[users_row1][i] = arr[users_row][i];
    //     arr[users_row][i] = variable1;
    // }
    // print_arr_2D(arr);
     //-----------------------------------------------------------------------------------------------------------------
     //
     //
     //
     //- ���������� ������� ����� ���� �����, ������� ������ ����� �����.
     //std::cout << "//- The user enters line number two, reverse this line. :";
     //int users_col = 0;
     //cin >> users_col;
     //for (int i = 0; i < ROW/2; i++) {
     //    int temp = arr[users_col][i];
     //    arr[users_col][i] = arr[users_col][ROW - i - 1];
     //    arr[users_col][ROW - i - 1] = temp;


     //}
     //print_arr_2D(arr);  
     //-----------------------------------------------------------------------------------------------------------------
     //
     //
     //
    //* (�������� � �������) ������� ���������� �����, ���� - ��� ������� �������� �� �����(������ ��������� �������), ��������� ���������� �� 0 �� N ��������.��������� �� ���� ����� :
    //1    2   3   4   5
    //16 17 18 19 6
    //15 24 25 20 7
    //14 23 22 21 8
    //13 12 11 10 9
const int ROW3 = 10, COL3 = 10;

int count = 0;
int top = 0, bottom = 9;
int left = 0, right = 9;
int arr3[ROW3][COL3];

for (int i = 0; i < ROW3 * COL3; i++) {
    for (int i = left; i <= right; ++i)
        arr3[top][i] = count++;
    ++top;


    for (int i = top; i <= bottom; ++i)
        arr3[i][right] = count++;
    --right;


    for (int i = right; i >= left; --i)
        arr3[bottom][i] = count++;
    --bottom;


    for (int i = bottom; i >= top; --i)
        arr3[i][left] = count++;
    ++left;
}
print_arr_2D(arr3);



     return 0;

}    
