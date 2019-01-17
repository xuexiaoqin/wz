#include <stdio.h>
struct Point
{
    int x;
    int y;
};
int index = 0;
struct Point arr[100];

int main(){

   printf("欢迎进入专场位置管理系统!\n");
    while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我的位置最近的车辆\n");
        printf("5---退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("请输入车辆位置的坐标\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x=x;
            arr[index].y=y;
            index++;

            printf("添加成功，点击回车继续\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
        }
        if (code == 2)
        {
             printf("删除最后一个车辆位置\n");
            index--;

            printf("删除成功，点击回车继续\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            break;
        }
    }


    return 0;

}