 int i=0;
    int j=n-1;
    while(i != j){
        int temp = arr[i].id;
        arr[i].id = arr[j].id;
        arr[j].id = temp;
        i++;
        j--;
    }