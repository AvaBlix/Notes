int main() {
    int n, i, key, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n]; 
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = i; 
            break;    
        }
    }

    if (found != -1) 
        printf("Element %d found at index %d.\n", key, found);
    else 
        printf("Element %d not found in the array.\n", key);

    return 0;
}
