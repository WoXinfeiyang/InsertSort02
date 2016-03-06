/**
 * 文件名称：直接插入排序InsertSort02(不含哨兵变量)
 * 时间：2016-3-6 22:07
 * 说明：1、直接插入排序概念：将一个记录插入到已经排好序的(i-1)个有序表，
 * 从而得到一个新的、含有i个记录的有序表。
 * */

/**
 *函数名称：insertSort(int *a,int length)
 *函数参数：a---指向整型数组的指针,length---数组长度
 *函数说明：从小到大直接插入排序，不含哨兵变量
 * */
void insertSort(int *a,int length)
{
	int i,j;
	for(i=1;i<length;i++)
	{
		if(a[i]<a[i-1])/*当当前第i个记录a[i]不符合排序规则时*/
		{
			int temp=a[i];/*临时变量，相当于哨兵变量*/
			for(j=i-1;(temp<a[j])&&(j>=0);j--)/*当哨兵(临时变量)中的值小于a[j]时移动前i-1个已排好顺序的数组*/
			{
				a[j+1]=a[j];
			}
			a[j+1]=temp;
		}
	}
}

void arrayTraversal(int *a,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int a[7]={5,4,3,2,1,7,6};
	insertSort(a,7);
	arrayTraversal(a,7);

	int b[5]={5,3,4,6,2};
	insertSort(b,5);
	arrayTraversal(b,5);
}

