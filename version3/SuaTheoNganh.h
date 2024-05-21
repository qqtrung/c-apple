void SuaNganh(CauTrucTroNganh* Nganh);
void SuaTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 

void SuaTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{

	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		SuaNganh(&Nganh[0]); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		SuaNganh(&Nganh[1]); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		SuaNganh(&Nganh[2]); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		SuaNganh(&Nganh[3]); 
	}	
	return;
}

void SuaNganh(CauTrucTroNganh* Nganh)
{
	printf("Vi tri sua: ");
	int n, i = 1;
	scanf("%d", &n); getchar(); 
	char TenSV[KT_TenSV];
	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(i == n)
		{
			printf("TenSV: ");
			fgets(TenSV, sizeof(TenSV), stdin); 
			TenSV[(int) strlen(TenSV) - 1] = '\0'; 
			ChuanHoaTenSV(TenSV); 
			strcpy(ConTro->TenSV, TenSV);
			printf("Tuoi: ");
			scanf("%d", &(ConTro->Tuoi)); getchar(); 
			printf("Gpa: ");
			scanf("%f", &(ConTro->Gpa));  getchar(); 
		}
		i++;
		ConTro = ConTro->Next;
	}
	InNganh(Nganh);
	return;
}

