#include <iostream>
#include <vector>
using namespace std;

int isValid(vector<int> &arr, int m, int n, int maxPageAllowed)   {
    int students = 1, pages = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > maxPageAllowed) {
            return false;
        }
        if((pages + arr[i]) <= maxPageAllowed)   {
            pages += arr[i];
        }else   {
            students++;
            pages = arr[i];
        }
    }
    if(students > m)    {
        return false;
    }else   {
        return true;
    }
}

int bookAllocation(vector<int> &arr, int m, int n) {  // n = totalBooks, m = totalStudents

    if(m > n)   {
        return -1;
    }

    int totalPages = 0;
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        totalPages += arr[i];
    }

    int st = 0, end = totalPages;
    while(st <= end)    {
        int mid = st + (end - st) / 2;

        if(isValid(arr, m, n, mid)) {
            ans = mid;
            end = mid - 1;
        }else   {
            st = mid + 1;
        }
    }
    return ans;
}

int main()  {
    int totalBooks;
    cout << "Enter the number of books you have : ";
    cin >> totalBooks;
    vector <int> books;
    for(int i = 0; i < totalBooks; i++) {
        cout << "Enter the number of pages in book " << i + 1 << " : ";
        int pages;
        cin >> pages;
        books.push_back(pages);
    }
    int students;
    cout << "Enter the number of total students : ";
    cin >> students;
    int result = bookAllocation(books, students, totalBooks);
    cout << "The maximum number of pages allocated to a students is minimum will be : " << result;
    return 0;
}