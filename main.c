#include <REGX52.H>
void delay_ms(int n)//��ʱ����
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}
void main ()
{
	//P2=0x55;//����һ����
	//while(1)
	//{}
	
	
	
	//ʵ����˸Ч��
	//while(1)
	//{
		//P2=0xfe;
		//delay_ms(200);
		//P2=0xff;
		//delay_ms(200);
	//}
	
	
	
	//ʵ����ˮ��
	while (1)
	{
		P2=0xfe;
		delay_ms(200);
		P2=0xfd;
		delay_ms(200);
		P2=0xfb;
		delay_ms(200);
		P2=0xf7;
		delay_ms(200);
		P2=0xef;
		delay_ms(200);
		P2=0xdf;
		delay_ms(200);
		P2=0xbf;
		delay_ms(200);
		P2=0x7f;
		delay_ms(200);
	}
	
}