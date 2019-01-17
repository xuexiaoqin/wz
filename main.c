#include <stdio.h>
#include <math.h>
struct Point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct Point arr[100];

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
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;
            index++;

            printf("添加成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 2)
        {
            printf("删除最后一个车辆位置\n");
            index--;

            printf("删除成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 3)
        {
            printf("所有车辆位置信息如下\n");

            for (int i = 0; i < index; i++)
            {
                printf("所有车辆位置为(%d,%d)\n", arr[i].x, arr[i].y);
            }
            printf("添加成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 4)
        {
            printf("请输入当前位置坐标：\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            //用当前的x和y的坐标，与每一个车辆的位置进行计算，然后将最小的值输出

            //两点之间的距离公式
            double min = 100000;
            int carID = 0;
            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                //printf("用户当前位置与第%d个车的距离为%lf\n",i+1,l);
                if (min > l)
                {
                    min = l;
                    carID = i;
                }
            }

            printf("用户当前位置与第%d个车的距离为%lf，是最小距离\n", carID + 1, min);

            printf("返回成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 5)
        {
            break;
        }
    }

    return 0;
}