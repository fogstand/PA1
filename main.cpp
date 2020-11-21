#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string.h>

using namespace std;

        void insertionSort(long arr[], long n) {
        unsigned int swappings = 0; //Declare an unsigned int to track the number of swappings
        long comparisons = 0;     //Declare a long variable comparisons to keep track of comparisons
        long i, key, j;
        for (i = 2; i <= n; i++) {
            key = arr[i];
            j = i - 1;

            /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position */
            while (j > 0 && arr[j] > key) {
                swappings++;
                arr[j + 1] = arr[j];
                j = j - 1;
            }

            arr[j + 1] = key;
        }
        comparisons = swappings + n;
        cout << "Total number of swappings are\t" << swappings << endl;
        cout << "Total number of comparisons are\t" << comparisons << endl;
    }

     //For sorting the array in reverse order
    void reverseInsertion(long arr[], long n){
        long i, key, j;
        for (i = 2; i <= n; i++) {
            key = arr[i];
            j = i - 1;
            while (j > 0 && arr[j] < key) {

                arr[j + 1] = arr[j];
                j = j - 1;
            }

            arr[j + 1] = key;
        }

    }

        void binarySearch(long arr[], long min, long max, long num) {
            int flag = 0;
            int i=1;
            while (max >= min)  //If right index is greater than left index
            {
                long mid = (min + max) / 2;  //finding the mid index

                if (arr[mid] == num) //Check if number is present at mid
                {
                    flag = 1;
                    cout << "Element  " << num << " Found at " << mid << endl; //return mid
                    break;
                } else if (arr[mid] > num) {
                    //If guess was too low i.e (mid > num) we going to run binary search only on left subarray and set our last element to mid-1

                    cout<<(i++)<< ". "<<num << " is less than " << arr[mid] << " from randIntArray[" << mid << "]" << endl;

                    max = mid - 1;

                } else {
                    // /If guess was too high  i.e (mid < num) we going to run binary search only on left subarray and set our min element to mid+1

                    cout<<(i++)<<". "<< num << " is greater than " << arr[mid] << " from randIntArray[" << mid << "]" << endl;
                    min = mid + 1;
                }
            }
            if (flag == 0) {
                //if number is not in the list
                cout << num << " not in the list" << endl;
            }

        }
        int main() {
            ofstream outfile;
            outfile.open("input.txt"); // creating a file to write to
            int flag = 0;
            int n = 100000;
            int count = 0;

            for (long i = 0; i < n; i++)
                //Generating random number and writing to file with 5
                //elements in each line
            {
                if (flag == 0) {
                    long temp = rand() % 1000000;
                    outfile << temp;
                    flag = 1;
                    count++;
                } else {
                    long temp = rand() % 1000000;
                    outfile << "," << temp;
                    count++;
                }
                if (count == 5) {
                    outfile << endl;
                    flag = 0;
                    count = 0;
                }

            }
            long arr[n];
            string l;
            ifstream myfile("input.txt");
            long i = 1;
            while (getline(myfile, l)) {
                int n = l.length();
                char str[n + 1];
                strcpy(str, l.c_str());
                //returns the first token
                char *p = strtok(str, ",");
                //Needs to be called in a loop to get all tokens
                //it returns Null when there are no more tokens left
                while (p != NULL)
                {
                    long num = atol(p);
                    arr[i] = num;
                    i++;
                    p = strtok(NULL, ",");
                }
            }
            insertionSort(arr, n);

            char ch = 'y';
            while (ch == 'y') {
                long x;
                cout << "Please enter a number between 0 - 100000 : ";
                cin >> x;
                binarySearch(arr, 1, n, x);
                cout << "Do you want to play again (y/n) ";
                cin >> ch;
                cout << "Reinvokation of Insertion sort on sorted array" << endl;
                insertionSort(arr, n);
                //where should i put my second insertion sort call??

            }
            cout<<"Reinvokation of insertion sort on reverse sorted array " <<endl;
            reverseInsertion(arr,n);
            insertionSort(arr,n);

        }
       //Extra Credit
       //
       /* When I ran the insertion sort first, number of comparisons are n(100000) times more than swappings
         *When I ran the insertion sort second time there was no swapping because elements were already sorted and
         * number of comparisons were equal to 100000.
         * In the third case when we reversed the array and ran insertion sort number of comparisions and swappings should
         * be power to 2 of number of elements but I am not able to figure out if I am getting that result. It should take longer
         * time since now we have reversed the array and there will be way more swapping than initially
         *
         */

