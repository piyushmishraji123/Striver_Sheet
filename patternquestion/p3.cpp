
// // printing the star pattern
// #include<iostream>
// using namespace std;
// int main()
// {{ int N =5;
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < N; i++)
//     {
//         // For printing the spaces before stars in each row
//         for (int j =0; j<N-i-1; j++) //j<n-i-1
//         {                            //0<4
//                                      //1<
//                                      //2
//                                      //3
//             cout <<" ";
//         }

//         // For printing the stars in each row
//         for(int j=0;j< 2*i+1;j++){//j

//             cout<<"*";
//         }0

//         // For printing the spaces after the stars in each row
//          for (int j =0; j<N-i-1; j++)
//         {
//             cout <<" ";
//         }

//         // As soon as the stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }
// }