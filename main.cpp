#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void task(){

    FILE *fp;

    printf("Progress 0%%");
    for (int i=0; i<10; i++)
    {
        printf("\rProgress %d%%", (i*10));
        cout.flush();
        sleep(1);
    }
    printf("\n");

    fp = fopen("artifact.txt", "w+");
    fprintf(fp, "SUCCESS");
    fclose(fp);
    fp = nullptr;

}

int main()
{
    task();

    cout << "Hello World" << endl;
    return 0;
}
