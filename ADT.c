#include<stdio.h>
#include<stdlib.h>
#include<atlbase.h>

#error:  ATL requires C++ compilation 

ADT List{
	InitList(&La,&Lb)
	int La = 5; int Lb = 5; 
    ListLength(La,Lb)

}
main()
{
	void union(List & La,List & Lb)
	{
		//�����������Ա�Lb�е�����La�е�����Ԫ�ز��뵽La��
		La_len = ListLength(La); Lb_len = Listlength(Lb);//�����Ա���
		for (int i; i = 1; i <= Lb_len; i++) 
		{
			GetElem(Lb, i, e);
			//ȡLb�е�i������Ԫ�ظ���e
			if (!LocateElem(La, e, equal))ListInsert(La, ++La_len, e);
			//La�в����ں�e��ͬ������Ԫ�أ������֮
		}
	}



	return 0;
}
