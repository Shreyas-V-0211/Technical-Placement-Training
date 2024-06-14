#include <stdio.h>

#define MAX_DOWNLOAD_SIZE_MB 250

void checkAndDownloadApp(float appSize) {
    if (appSize > MAX_DOWNLOAD_SIZE_MB) {
        printf("The app size is %.2f MB, which is larger than the allowed limit of %d MB. The app will not be downloaded.\n", appSize, MAX_DOWNLOAD_SIZE_MB);
    } else {
        printf("The app size is %.2f MB. The app will be downloaded.\n", appSize);
    }
}

int main() {
    float appSize;
    printf("Enter the size of the app in MB: ");
    scanf("%f", &appSize);
    checkAndDownloadApp(appSize);
    return 0;
}
