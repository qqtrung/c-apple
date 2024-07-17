void ThemTheoNganh_KHMT(CauTrucTroNganh* Nganh);
void ThemTheoNganh_CNTT(CauTrucTroNganh* Nganh);
void ThemTheoNganh_ATTT(CauTrucTroNganh* Nganh);
void ThemTheoNganh_KTMT(CauTrucTroNganh* Nganh); 

void ThemTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		ThemTheoNganh_KHMT(&Nganh[0]); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		ThemTheoNganh_CNTT(&Nganh[1]); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		ThemTheoNganh_ATTT(&Nganh[2]); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		ThemTheoNganh_KTMT(&Nganh[3]); 
	}	
	return;
}


void ThemTheoNganh_KHMT(CauTrucTroNganh* Nganh)
{
	char TenSV[KT_TenSV];
	SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
	printf("TenSV: "); 
	fgets(TenSV, sizeof(TenSV), stdin); 
	TenSV[(int) strlen(TenSV) - 1] = '\0'; 
	ChuanHoaTenSV(TenSV); 
	strcpy(ConTro->TenSV, TenSV);
	strcpy(ConTro->TenNganh, "KHMT"); 
	printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
	printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
	if(Nganh->Dau == NULL)
	{
		ConTro->Next = NULL;
		Nganh->Dau = ConTro;
		Nganh->Cuoi = ConTro;
	}
	else
	{
		ConTro->Next = NULL;
		Nganh->Cuoi->Next = ConTro;
		Nganh->Cuoi = ConTro;
	}
	return; 
} 

void ThemTheoNganh_CNTT(CauTrucTroNganh* Nganh)
{
	char TenSV[KT_TenSV];
	SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
	printf("TenSV: "); 
	fgets(TenSV, sizeof(TenSV), stdin); 
	TenSV[(int) strlen(TenSV) - 1] = '\0'; 
	ChuanHoaTenSV(TenSV); 
	strcpy(ConTro->TenSV, TenSV);
	strcpy(ConTro->TenNganh, "CNTT"); 
	printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
	printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
	if(Nganh->Dau == NULL)
	{
		ConTro->Next = NULL;
		Nganh->Dau = ConTro;
		Nganh->Cuoi = ConTro;
	}
	else
	{
		ConTro->Next = NULL;
		Nganh->Cuoi->Next = ConTro;
		Nganh->Cuoi = ConTro;
	}
	return; 
}

void ThemTheoNganh_ATTT(CauTrucTroNganh* Nganh)
{
	char TenSV[KT_TenSV];
	SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
	printf("TenSV: "); 
	fgets(TenSV, sizeof(TenSV), stdin); 
	TenSV[(int) strlen(TenSV) - 1] = '\0'; 
	ChuanHoaTenSV(TenSV); 
	strcpy(ConTro->TenSV, TenSV);
	strcpy(ConTro->TenNganh, "ATTT"); 
	printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
	printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
	if(Nganh->Dau == NULL)
	{
		ConTro->Next = NULL;
		Nganh->Dau = ConTro;
		Nganh->Cuoi = ConTro;
	}
	else
	{
		ConTro->Next = NULL;
		Nganh->Cuoi->Next = ConTro;
		Nganh->Cuoi = ConTro;
	}
	return; 
} 

void ThemTheoNganh_KTMT(CauTrucTroNganh* Nganh)
{
	char TenSV[KT_TenSV];
	SinhVien* ConTro = (SinhVien*) malloc(sizeof(SinhVien)); if(ConTro == NULL) {free(ConTro); return;}
	printf("TenSV: "); 
	fgets(TenSV, sizeof(TenSV), stdin); 
	TenSV[(int) strlen(TenSV) - 1] = '\0'; 
	ChuanHoaTenSV(TenSV); 
	strcpy(ConTro->TenSV, TenSV);
	strcpy(ConTro->TenNganh, "KTMT"); 
	printf("Tuoi: "); scanf("%d", &(ConTro->Tuoi)); getchar();
	printf("Gpa: "); scanf("%f", &(ConTro->Gpa)); getchar();
	if(Nganh->Dau == NULL)
	{
		ConTro->Next = NULL;
		Nganh->Dau = ConTro;
		Nganh->Cuoi = ConTro;
	}
	else
	{
		ConTro->Next = NULL;
		Nganh->Cuoi->Next = ConTro;
		Nganh->Cuoi = ConTro;
	}
	return; 
} 

