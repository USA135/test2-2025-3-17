//企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。
//从键盘输入当月利润I，求应发放奖金总数？
#include <stdio.h>
double myprofit;
double profit10,profit20,profit40,profit60,profit100;
double salary;

int main(){
	profit10=10*0.1;
	profit20=profit10+10*0.075;
	profit40=profit20+20*0.05;
	profit60=profit40+20*0.03;
	profit100=profit60+40*0.015;
	printf("请输入利润：\n");
	scanf("%lf",&myprofit);
	if(myprofit<=10){
		salary=myprofit*0.1;
	}else if(myprofit<=20){
		salary=profit10+(myprofit-10)*0.075;
	}else if(myprofit<=40){
		salary=profit20+(myprofit-20)*0.05;
	}else if(myprofit<=60){
		salary=profit40+(myprofit-40)*0.03;
	}else if(myprofit<=100){
		salary=profit60+(myprofit-60)*0.015;
	}else if(myprofit>100){
		salary=profit100+(myprofit-100)*0.01;
	}
	printf("奖金为：%lf\n",salary);
}
