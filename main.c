#include <REGX52.H>
void delay_ms(int n)//延时函数
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}
void main ()
{
	//P2=0x55;//点亮一个灯
	//while(1)
	//{}
	
	
	
	//实现闪烁效果
	//while(1)
	//{
		//P2=0xfe;
		//delay_ms(200);
		//P2=0xff;
		//delay_ms(200);
	//}
	
	
	
	//实现流水灯
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