/**
 * �ļ����ƣ�ֱ�Ӳ�������InsertSort02(�����ڱ�����)
 * ʱ�䣺2016-3-6 22:07
 * ˵����1��ֱ�Ӳ�����������һ����¼���뵽�Ѿ��ź����(i-1)�������
 * �Ӷ��õ�һ���µġ�����i����¼�������
 * */

/**
 *�������ƣ�insertSort(int *a,int length)
 *����������a---ָ�����������ָ��,length---���鳤��
 *����˵������С����ֱ�Ӳ������򣬲����ڱ�����
 * */
void insertSort(int *a,int length)
{
	int i,j;
	for(i=1;i<length;i++)
	{
		if(a[i]<a[i-1])/*����ǰ��i����¼a[i]�������������ʱ*/
		{
			int temp=a[i];/*��ʱ�������൱���ڱ�����*/
			for(j=i-1;(temp<a[j])&&(j>=0);j--)/*���ڱ�(��ʱ����)�е�ֵС��a[j]ʱ�ƶ�ǰi-1�����ź�˳�������*/
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

