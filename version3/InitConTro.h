
// Khoi tao cau truc con tro = NULL 

void InitConTro(CauTrucTroNganh Nganh[SL_Nganh])
{
	for(int i = 0; i < SL_Nganh; i++)
	{
		Nganh[i].Dau = NULL; 
		Nganh[i].Cuoi = NULL; 
	} 
}

