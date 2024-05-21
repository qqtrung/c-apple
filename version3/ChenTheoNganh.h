void ChenNganh(CauTrucTroNganh* Nganh, char a[KT_Nganh]);
void ChenTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 
void InNganh(CauTrucTroNganh* Nganh); 

void ChenTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		char a[KT_Nganh] = "KHMT"; 
		ChenNganh(&Nganh[0], a); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		char a[KT_Nganh] = "KHMT"; 
		ChenNganh(&Nganh[1], a); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		char a[KT_Nganh] = "KHMT"; 
		ChenNganh(&Nganh[2], a); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		char a[KT_Nganh] = "KHMT"; 
		ChenNganh(&Nganh[3], a); 
	}	
	return;
}


void ChenNganh(CauTrucTroNganh* Nganh, char a[KT_Nganh])
{
	printf("Vi tri chen: ");
	int n, i = 1;
	scanf("%d", &n); getchar();
	
	SinhVien* ConTro1 = NULL;
	ConTro1 = Nganh->Dau;
	if(n == 1) 
	{
		char TenSV[KT_TenSV];
		SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
		strcpy(ConTro->TenNganh, a); 
		printf("TenSV: "); 
		fgets(TenSV, sizeof(TenSV), stdin); 
		TenSV[(int) strlen(TenSV) - 1] = '\0'; 
		ChuanHoaTenSV(TenSV); 
		strcpy(ConTro->TenSV, TenSV);
		printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
		printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
		ConTro->Next = Nganh->Dau;
		Nganh->Dau = ConTro;
		InNganh(Nganh);
		return;
	}
	while(ConTro1 != NULL)
	{
		if(i == n-1)
		{
			char TenSV[KT_TenSV];
			SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
			strcpy(ConTro->TenNganh, a); 
			printf("TenSV: "); 
			fgets(TenSV, sizeof(TenSV), stdin); 
			TenSV[(int) strlen(TenSV) - 1] = '\0'; 
			ChuanHoaTenSV(TenSV); 
			strcpy(ConTro->TenSV, TenSV);
			printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
			printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
			ConTro->Next = ConTro1->Next;
			ConTro1->Next = ConTro;
			InNganh(Nganh);
			return;
		}
		ConTro1 = ConTro1->Next;
		i++;
	}
	InNganh(Nganh);
	return;
}
