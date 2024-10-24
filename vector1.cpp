// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vector1;
//     vector<int> vector2;

//     vector1.push_back(10);
//     vector1.push_back(20);

//     vector2.push_back(100);
//     vector2.push_back(200);

//     vector<vector<int>> vector_2d{vector1 , vector2};

//     for (int i = 0; i < vector_2d.size(); i++) 
//     {
//         for (int j = 0; j < vector_2d[i].size(); j++)
//         {
//             cout << vector_2d[i][j] << " ";
//         }    
//         cout << endl;
//     }
// }



// ===================================================================================================

// 




#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vector1;
    vector<int> vector2;
    
    int i, j;
    i = 2;
    j = 3

    // vector<vector<int>> vector_2d{
    // {vector1 , vector1 , vector1},
    // {vector2 , vector2 , vector2}
    // };

    int value_1, value_2;
    cout<<"enter the value of i :";
    cin>>value_1>>value_1>>value_1;

    cout << "enter tthe value of j :";
    cin>>value_2>>value_2>>value_2;

    vector1.push_back(value_1);
    vector2.push_back(value_2);


    /*vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);*/

    vector<vector<int>> vector_2d{vector1 ,vector2 };

    for (int i = 0; i < vector_2d; i++) 
    {
        for (int j = 0; j < vector_2d[i].size(); j++)
        {
            cout << vector_2d[i][j] << " ";
        }    
        cout << endl;
    }
    return 0;
}
