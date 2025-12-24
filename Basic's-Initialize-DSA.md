# DSA-x-Copilot
# Digital Assignment 1- Notes
## Headerfiles
* Imagine headerfiles are part of eco.
* To access the func in lib We need headfle.
```
              🌲 Root:C++ Program[filename.cpp]
                             |
        ┌────────────────────┼────────────────────┐
        |                    |                    |
   📜 Header Files       🧰 Lib Files          🧠 Namespaces
   (.h / .hpp)          (.lib / .dll / .so)     (std, custom)
        |
   ┌────┼────┐
   |    |    |
Declarations: Functions, Classes, Constants
```
## Note
*  Imagine pre written code is in lib and lin is hidden underneath leaves and header files can access them in code.
```C++
   /* 📜 Header file (declares std::cout)  # x ''' - Serpen
    🧠 Namespace (lets skip std:: prefix) */
#include <iostream>
using namespace std;     
                    
int main()
{
    cout << "Rehaan's tree is growing strong!" << endl; // We use endl for cout not for cin.
    return 0;
}
```
```
                                     Header files
           1.Standard Header files                   2.User-Defined Header files
         *Built-in x Part of stndrd Lib of C++      *Name defines.
```
* Initiate header files through ``#include<headerfile1>`` or ``#include "headerfile.h"`` but ``#include 'headerfile'`` is wrong.
* ``#include "headerfile"`` is for user defined header file but we can use it for stdlib hdrfle also.
* Suppose we made `maths.h` user defined headerfile.
```C++
int add(int a, int b);
int sub(int a, int b);
```
```C++
#include "maths.h"
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
```
* Also
```C++
#include "iostream"
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";   // output
    cin >> age;                   // input

    cout << "You entered: " << age << endl;
    return 0;
}
```
* Without ``#include`` compiler dont know whats ``cout`` and When it knows it uses ``iostream`` to understand it as ``std::cout``.
#Examples of Header files
```
| Header File      | Purpose                                      |             Qi Functions / Classes                 |
|------------------|--------------------------------------------- |---------------------------------------------------- |
| `<iostream>`     | Input/output stream operations               | `std::cin`, `std::cout`, `std::cerr`, `std::endl`   |
| `<cmath>`        | Mathematical computations                    | `sqrt`, `pow`, `log`, `sin`, `cos`, `ceil`, `floor` |
| `<cstdlib>`      | General utilities and memory management      | `rand`, `exit`, `malloc`, `free`, `system`          |
| `<cstring>`      | C-style string manipulation                  | `strlen`, `strcpy`, `strcmp`, `strcat`              |
| `<string>`       | C++ string class and operations              | `std::string`, `length`, `substr`, `find`           |
| `<vector>`       | Dynamic array container                      | `std::vector`, `push_back`, `size`, `begin`, `end`  |
| `<map>`          | Key-value associative container              | `std::map`, `insert`, `find`, `erase`               |
| `<set>`          | Unique element container                     | `std::set`, `insert`, `count`, `erase`              |
| `<algorithm>`    | Common algorithms                            | `sort`, `reverse`, `max_element`, `find`            |
| `<iomanip>`      | Output formatting                            | `setw`, `setprecision`, `fixed`, `showpoint`        |
| `<fstream>`      | File input/output streams                    | `std::ifstream`, `std::ofstream`, `std::fstream`    |
| `<ctime>`        | Time and date utilities                      | `time`, `clock`, `difftime`, `localtime`            |
| `<cassert>`      | Runtime assertions                           | `assert`                                            |
| `<typeinfo>`     | Runtime type information                     | `typeid`                                            |
| `<limits>`       | Numeric limits of data types                 | `std::numeric_limits<T>::max()`                     |
```
# Modulrt
* Concept of dividing the programs into modules.
# Data Structures x Algo
```
            DS
            |
    -------------------
    |                 |
  Primtve DS      Non-Prmtve S
  |                    |
 Int               Lnr       NLnr
 char               |         |
 float             Arr        Tress
 double            Que        Graph
                   Stck
                   Likdlst
```
## Sample code for Prmtve DS
```C++
#include<iostream>  //char x String  Capital small And Number 
using namespace std;
#include<string>
int main()
{
int n,A[n];
char B[n],D;
string C[n],E;
n = 1;        // string has more functions compared to char!.
D = '1';
string E ='2';
}
```
# Basics covered.Nxt NnPrmtv DS And Headerfle x functions.

  



# Non Prmtv DS
## Interesting Fact
* StdLib doesn't include `conio.h` so we cant use `getch();`.``getch(); - Responsible for output window to wait``.
* Alternative is `cin.get();`
* If `getch();` used without `conio.h` error will show.
## Example Code
```C++
#include <iostream>
int main()
{
    std::cout << "Hello, Rehaan!" << std::endl;
    std::cin.get(); // Waits for Enter
    return 0;
}
```
## Fact 2
* We no more use void main as it returns nothing OS.
```
Imagine submitting a college assignment without signing marking it “complete.” The professor (OS) doesn’t know if finished.

Code written with void main() might compile on one pc but fail on another. That’s a nightmare for cross-platform development or portfolio projects meant to run.
```
```C++
int main()
{
    // no command-line args
    return 0;
}
int main(int argc, char* argv[])
{
    // with command-line args And Even if u forget return 0 its ok rn.
    return 0;
}
```
## Fact 3
* return 0 here 0 indicates success or it gives error or Abnormal termination but in newer compiler no need to write return 0.
```C++
#include<iostream>
using namespace std;
#include<cstdlib>
int main()
{
return EXIT_SUCCESS;// Alternative for 0
}
```
# Non-Primitive Data Structure.
* Data is just raw facts and information.
* Where as Data Structure is a well arranged data in a specific manner.
# Linear Nn-Prmtv DS
## Arr
* Arr- When homogenuos data arranged in a straight manner.
### Tpes
* `1D`
* `2D`
* `3D`
* `Multi-D`
### More Thr
*   `|  | |  |      |    |`
*   `A[0] A[1] .... A[n-1]`
### 1D
* `Loc[Pos] = Base Address + Wordsize*[Number of Rows - Starting Index ]`
### 2D
* `Loc[A[Row][Col]] = Base Address + Wordsize*[Number of Rows*Row + Column]`
### Application of Arr
* Create Stack, Queue And to solve mathematical problems related to Vectors - Matrices.
* Waste of space As its not possible to decide size of it.
* As Static structure, it cannot be used for DAlloc.`DA - In case u didnt knew how much size from beg ex - malloc(), calloc(), realloc(), free().`
* Further Explained in detailed.`Like D allocation refers to assigning size at runtime, not during compilation.`
## Basic Operation on Arr.
### Traversing 
#### Algorithm
```
Start
Input N A[N]
For i = 0 to N-1 Do
Read A[i]
End of for loop
For i = 0 to N-1 Do
Print A[i]
End of for loop
End
```
#### Code 
```C++
#include<iostream>
using namespace std;
int main()
{
    int n,A[n];
    cin>>"Enter the no of elements into Arr\n";
    cout<<"Enter"<<n<<"elements into Arr\n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Entered elements are :\t";
    for(i=0;i<n;i++)
    {
        cout<<A[i];
    }
    return 0;
}
```
### Searching 
### Linear
#### Algorithm
```
Start
Input N A[N] SE
For i=0 to N-1 Do
Read A[i]
End of for loop
Read SE
Loc = -1
For i=0 to N-1 Do
If A[i] = SE
Loc = i
break
End of for loop
If Loc >= 0
Print Loc
Else
Print SE not found
End
```
#### Code
```C++
#include<iostream>
using namespace std;
int main()
{
    int n,A[n],SE;
    cout<<"Enter the no of elements into Arr\n";
    cin>>n;
    cout<<"Enter"<<n<<"elements into Arr\n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int Loc = -1;
    for(i=0;i<n;i++)
    {
        if(A[i]==SE)
        {
            Loc=i;
            break;
        }
    }
    if(Loc>=0)
    {
        cout<<"SE is not found at"<<Loc<<endl;
    }
    else
    {
        cout<<"SE is not found\n";
    }
    return 0;
}
```
### Two - Pointer or Bin Search
#### Algorithm
```
Start
Input N A[N] SE
For i = 0 to N-1 Do
Read A[I]
End of for loop
Beg=0
End=N-1
Loc=-1
while Beg<End Do
Mid = (Beg + End) / 2
If SE=A[Mid] Do
Loc=Mid
Else if SE>A[Mid] Do
Beg = Mid + 1
Else Do
End = Mid - 1
End of while loop
If Loc >= 0 Do
Print Loc
Else Do
Print Element not found
```
```C++
#include<iostream>
using namespace std;
int main()
{
    int n,A[n],SE;
    cout<<"Enter the no of elements into Arr\n";
    cin>>n;
    cout<<"Enter"<<n<<"elements into Arr\n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int B,E,M;
    B=0
    E=n-1
    while(B<E)
    M = (E + B)/2
    {
        if(SE==A[M])
        {
            Loc=M;
            break;
        }
        elseif(SE>A[M])
        {
            B=M+1;
        }
        else
        {
            E=M-1
        }
    }
    if(Loc!=-1)
    {
        cout<<"Element found at "<<Loc<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
```
## Sorting
### Insertion sort
#### Pseudo-code
```
for i = 1 to n-1:
    k = a[i]
    j = i-1
    while j >= 0 and a[j] > k:
        a[j+1] = a[j]
        j = j-1
    a[j+1] = k
```
#### Code
```C++
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in A\n";
    cin >> n;

    int A[100]; // Fixed-size array for simplicities
    cout << "Enter " << n << " elements into A\n";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        int k = A[i];
        int j = i - 1;

        // Move elements greater than k one position ahead
        while(j >= 0 && A[j] > k) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = k;
    }

    cout << "Sorted A:\n";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

            
```
#### Inserion we are going backwards like 3 2 1 where as in selection we go 1 2 3.
### Selection Sort
### Code
```C++
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in A\n";
    cin >> n;

    int A[100];                                       // Use a fixed-size A for simplicities
    cout << "Enter " << n << " elements into A\n";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

         // Selection sort logic
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        // Swap A[i] and A[minIndex]
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }

    cout << "Sorted A:\n";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

```
### Buble Sort
#### Code
```C++
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in A\n";
    cin >> n;

    int* A = new int[n];
    cout << "Enter " << n << " elements into A\n";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "Sorted A:\n";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A; // free space
    return 0;
}
```
### Merge Sort
#### Code
```C++
#include <iostream>
using namespace std;

// Function to merge two halves of the A
void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = A[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k++] = L[i++];
        } else {
            A[k++] = R[j++];
        }
    }
    while (i < n1){
        A[k++] = L[i++];
    }
    while (j < n2){
        A[k++] = R[j++];
    }
}

// Recursive splits and sorts A
void mergeSort(int A[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int A[] = {25, 90, 6, 10, 5, 45, 35};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "A before Sorting: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
        cout << endl;
    }
    mergeSort(A, 0, n - 1);
    cout << "A after Sorting: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}
```
### Quick Sort
#### Code
```C++
#include <iostream>
using namespace std;

int partition(int A[], int low, int high) {
    int pivot = A[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    return (i + 1);
}

void quickSort(int A[], int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);
        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

int main() {
    int A[] = {9, 4, 8, 3, 7, 1, 6, 2, 5};
    int n = sizeof(A) / sizeof(A[0]);
    quickSort(A, 0, n - 1);
    cout << "Sorted A: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
    return 0;
}
```
    
    



    
    


