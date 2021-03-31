// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int cnt = 0;
int left = 0, right = size - 1, mid, BS = 0;
while (left <= right) {
mid = left + (right - left) / 2;
if (value < arr[mid]) {
right = mid;
} else if (value > arr[mid]) {
left = mid;
} else if (value == arr[mid]) {
BS = mid;
right = left - 1;
}
}
for (int i = BS; i >= 0; i--) {
if (arr[i] == value) {
cnt++;
}
}
for (int i = BS + 1; i < size; i++) {
if (arr[i] == value) {
cnt++;
}
}
if (cnt > 0) {
return cnt;
} else {
return 0;
}
}
