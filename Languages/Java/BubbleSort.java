/**
 *
 * @author RUSHABH
 */
//TIME COMPLEXITY: WORST CASE-O(N^2), BEST CASE-O(N)
//INPLACE: YES (inplace means values are rearranged within same array & no extra space is required)
//STABLE: YES (stable means if there are duplicates in array, then 1st val will always come 1st and 2nd will be 2nd.
public class BubbleSort {

    public static void bubbleSort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {       //0 to n-2th ele coz, total n-1 passes are required
            int flag = 0;
            for (int j = 0; j < n - i - 1; j++) {     //0 to n-i-1 coz every time right hand side will get sorted.
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0) {
                break;      //if above if condition fails every time, then they are already sorted.
            }
        }
    }

    public static void main(String args[]) {
        //int arr[] = {64, 34, 25, 12, 22, 11, 9};
        int arr[] = {5, 4, 3, 2, 1, 0, -1, -2};
        bubbleSort(arr);
        for (int x : arr) {
            System.out.print(x + " ");
        }
        System.out.println();
    }
}
