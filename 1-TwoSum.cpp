int* sum(int arr[], int target) {
    static int result[2];

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return nullptr; // no match
}
