#include "main.h"


int main()
{

	CauTrucTroNganh Nganh[SL_Nganh];
	InitConTro(Nganh); 
	
	puts("\nQUAN LY SINH VIEN THEO NGANH HOC\n");
	puts("1.ThemTheoNganh 2.XoaTheoNganh 3.SuaTheoNganh 4.InTheoNganh\n5.TimTheoNganh 6.SapXepTheoNganh 7.ChenTheoNganh 8.Thoat");
	int n = 0;
	while(n != 8)
	{
		printf("\nChon: ");
		scanf("%d", &n); getchar(); 
		switch(n)
		{
			case 1: ThemTheoNganh(Nganh); break;
			case 2: XoaTheoNganh(Nganh); break;
			case 3: SuaTheoNganh(Nganh); break;
			case 4: InTheoNganh(Nganh); break;
			case 5: TimTheoNganh(Nganh); break;
			case 6: SapXepTheoNganh(Nganh); break;
			case 7: ChenTheoNganh(Nganh); break;
			case 8: break;
		}
	}
	puts("\nCAM ON BAN DA XEM");
	return 0;
}


