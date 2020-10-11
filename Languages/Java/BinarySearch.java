/**
 *
 * @author RUSHABH
 */
public class BinarySearch {

    public static int binarySearchIterative(int arr[], int key) {
        int left = 0, right = arr.length - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (key == arr[mid]) {
                return mid;
            } else if (key < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }

    public static int binarySearchRecursive(int arr[], int left, int right, int key) {
        if (left <= right) {
            int mid = (left + right) / 2;
            if (key == arr[mid]) {
                return mid;
            } else if (key < arr[mid]) {
                return binarySearchRecursive(arr, left, mid - 1, key);
            } else {
                return binarySearchRecursive(arr, mid + 1, right, key);
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        int arr[] = {2, 3, 4, 10, 21, 29, 38, 40, 57, 68, 88, 93};
        int index = binarySearchIterative(arr, 68);
        System.out.println("Index for key using iterative is " + index);

        index = binarySearchRecursive(arr, 0, arr.length - 1, 68);
        System.out.println("Index for key using recursive is " + index);
    }
}
