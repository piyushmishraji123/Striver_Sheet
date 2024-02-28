/// two star merge pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     {
//         int N = 5;
//         // This is the outer loop which will loop for the rows.
//         for (int i = 0; i < N; i++)
//         {
//             // For printing the spaces before stars in each row
//             for (int j = 0; j < N - i - 1; j++)
//             {
//                 cout << " ";
//             }

//             // For printing the stars in each row
//             for (int j = 0; j < 2 * i + 1; j++)
//             {

//                 cout << "*";
//             }

//             // For printing the spaces after the stars in each row
//             for (int j = 0; j < N - i - 1; j++)
//             {
//                 cout << " ";
//             }

//             cout << endl;
//         }
//         // code for inverse star
//         {
//             int n = 5;
//             for (int i = 0; i < n; i++)
//             { // FOR SPCAES
//                 for (int j = 0; j < i; j++)
//                 {
//                     cout << " ";
//                 }
//                 // FOR STAR
//                 for (int j = 0; j < 2 * n - (2 * i + 1); j++)//2*5-(2*0+1)=9
//                 {

//                     cout << "*";
//                 }
//                 // FOR THE SPACEES AFTER THE STAR
//                 for (int j = 0; j < i; j++)
//                 {
//                     cout << " ";
//                 }
//                 cout << endl;
//             }
//         }
//     }
// }