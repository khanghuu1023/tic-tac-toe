////#include <iostream>
////#include<array>
////#include <vector>
////using namespace std;
////
////template<int N>
////class Board_layout {
////    std::array<std::array<int, N>, N> board_layout;
////public:
////    Board_layout() {
////        int a{1};
////        for (auto &arr:board_layout) {
////            for (auto &i:arr) {
////                i = a++;
////            }
////        }
////    }
////
////    void draw_board() {
////        for (auto &arr:board_layout) {
////            for (auto &i:arr) {
////                cout << i << " ";
////            }
////            cout<<'\n';
////        }
////    }
////
////};
////
////int main()
////{
////    vector<int> vec(5);
////    cout<<vec.size()<<endl;
////    vec.at(0)=static_cast<char>('A');
////    cout<<static_cast<char>(vec.at(0))<<endl;
////    return 0;
////}
//#include <vector>
//#include<iostream>
//
//using std::cout;    using std::endl;    using std::cin;
//
//int main()
//{
//    int dimension;
//    cin>>dimension;
//    std::vector<std::vector<int>> vec;
//    vec.resize(dimension);
//    for(auto& i:vec){
//        i.resize(3);
//    }
//    cout<<vec.at(0).size()<<endl;
//    int a =1;
//    for(auto& i:vec) {
//        for (auto &v:i) {
//           v=a++;
//        }
//        cout<<'\n';
//    }
//
//    for(auto& i:vec) {
//        for (auto &v:i) {
//           cout<<v<<" ";
//        }
//        cout<<'\n';
//    }
//
//    return 0;
//}
//
