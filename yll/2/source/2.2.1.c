/* ʵ��2-1�Ĵ�����򣺺����ж���*/
#include <stdio.h>
int main( )
{ 
int i, x, k, flag = 0;
printf("�������жϺ��������������1����������Ctrl+Z����\n");
while (scanf("%d", &x) !=EOF) {
for(i=2,k=x>>1;i<=k;i++)
		if (!(x%i)) { //������(���ȼ�
			flag = 1;
			break;
	}
if(flag==1) printf("%d�Ǻ���", x);// if(flag==1)���� = 
else printf("%d���Ǻ���", x);
flag = 0; //flagҪ��λ
}
return 0;
}