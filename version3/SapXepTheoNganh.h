void TangDanGpa(CauTrucTroNganh* Nganh); 
void GiamDanGpa(CauTrucTroNganh* Nganh); 
void TangTuoi(CauTrucTroNganh * Nganh); 
void GiamTuoi(CauTrucTroNganh* Nganh); 
void SapXepNganh(CauTrucTroNganh* Nganh);
void SapXepTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 


void SapXepTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenSVNganh[KT_Nganh]; 
	scanf("%s", TenSVNganh); getchar(); 
	ChuanHoaTenNganh(TenSVNganh); 

	if(strcmp(TenSVNganh, "KHMT") == 0) 
	{
		SapXepNganh(&Nganh[0]); 
	}
	else if(strcmp(TenSVNganh, "CNTT") == 0)
	{
		SapXepNganh(&Nganh[1]); 
	}
	else if(strcmp(TenSVNganh, "ATTT") == 0)
	{
		SapXepNganh(&Nganh[2]); 
	}
	else if(strcmp(TenSVNganh, "KTMT") == 0)
	{
		SapXepNganh(&Nganh[3]); 
	}	
	return;
}

void TangDanGpa(CauTrucTroNganh* Nganh)
{
	SinhVien* ConTro1 = NULL;
	SinhVien* ConTro2 = NULL;
	SinhVien* ConTro = NULL;
	ConTro1 = Nganh->Dau;
	float tmp;
	int temp;
	while(ConTro1 != NULL)
	{
		ConTro2 = ConTro1->Next;
		while(ConTro2 != NULL)
		{
			if(ConTro1->Gpa > ConTro2->Gpa)
			{
				tmp = ConTro1->Gpa;
				ConTro1->Gpa = ConTro2->Gpa;
				ConTro2->Gpa = tmp;

				temp = ConTro1->Tuoi;
				ConTro1->Tuoi = ConTro2->Tuoi;
				ConTro2->Tuoi = temp;

				ConTro = (SinhVien*) malloc(sizeof(SinhVien));
				strcpy(ConTro->TenSV, ConTro1->TenSV);
				strcpy(ConTro1->TenSV, ConTro2->TenSV);
				strcpy(ConTro2->TenSV, ConTro->TenSV);
				free(ConTro);
			}
			ConTro2 = ConTro2->Next;
		}
		ConTro1 = ConTro1->Next;
	}
	InNganh(Nganh);
	return;
}

void GiamDanGpa(CauTrucTroNganh* Nganh)
{
	SinhVien* ConTro1 = NULL;
	SinhVien* ConTro2 = NULL;
	SinhVien* ConTro = NULL;
	ConTro1 = Nganh->Dau;
	float tmp;
	int temp;
	while(ConTro1 != NULL)
	{
		ConTro2 = ConTro1->Next;
		while(ConTro2 != NULL)
		{
			if(ConTro1->Gpa < ConTro2->Gpa)
			{
				tmp = ConTro1->Gpa;
				ConTro1->Gpa = ConTro2->Gpa;
				ConTro2->Gpa = tmp;

				temp = ConTro1->Tuoi;
				ConTro1->Tuoi = ConTro2->Tuoi;
				ConTro2->Tuoi = temp;

				ConTro = (SinhVien*) malloc(sizeof(SinhVien));
				strcpy(ConTro->TenSV, ConTro1->TenSV);
				strcpy(ConTro1->TenSV, ConTro2->TenSV);
				strcpy(ConTro2->TenSV, ConTro->TenSV);
				free(ConTro);
			}
			ConTro2 = ConTro2->Next;
		}
		ConTro1 = ConTro1->Next;
	}
	InNganh(Nganh);  
	return;
}

void TangTuoi(CauTrucTroNganh * Nganh)
{
	SinhVien* ConTro1 = NULL;
	SinhVien* ConTro2 = NULL;
	SinhVien* ConTro = NULL;
	ConTro1 = Nganh->Dau;
	int tmp;
	float temp;
	while(ConTro1 != NULL)
	{
		ConTro2 = ConTro1->Next;
		while(ConTro2 != NULL)
		{
			if(ConTro1->Tuoi > ConTro2->Tuoi)
			{
				tmp = ConTro1->Tuoi;
				ConTro1->Tuoi = ConTro2->Tuoi;
				ConTro2->Tuoi = tmp;

				temp = ConTro1->Gpa;
				ConTro1->Gpa = ConTro2->Gpa;
				ConTro2->Gpa = temp;

				ConTro = (SinhVien*) malloc(sizeof(SinhVien));
				strcpy(ConTro->TenSV, ConTro1->TenSV);
				strcpy(ConTro1->TenSV, ConTro2->TenSV);
				strcpy(ConTro2->TenSV, ConTro->TenSV);
				free(ConTro);
			}
			ConTro2 = ConTro2->Next;
		}
		ConTro1 = ConTro1->Next;
	}
	InNganh(Nganh);  
	return;
}

void GiamTuoi(CauTrucTroNganh* Nganh)
{
	SinhVien* ConTro1 = NULL;
	SinhVien* ConTro2 = NULL;
	SinhVien* ConTro = NULL;
	ConTro1 = Nganh->Dau;
	int tmp;
	float temp;
	while(ConTro1 != NULL)
	{
		ConTro2 = ConTro1->Next;
		while(ConTro2 != NULL)
		{
			if(ConTro1->Tuoi < ConTro2->Tuoi)
			{
				tmp = ConTro1->Tuoi;
				ConTro1->Tuoi = ConTro2->Tuoi;
				ConTro2->Tuoi = tmp;

				temp = ConTro1->Gpa;
				ConTro1->Gpa = ConTro2->Gpa;
				ConTro2->Gpa = temp;

				ConTro = (SinhVien*) malloc(sizeof(SinhVien));
				strcpy(ConTro->TenSV, ConTro1->TenSV);
				strcpy(ConTro1->TenSV, ConTro2->TenSV);
				strcpy(ConTro2->TenSV, ConTro->TenSV);
				free(ConTro);
			}
			ConTro2 = ConTro2->Next;
		}
		ConTro1 = ConTro1->Next;
	}
	InNganh(Nganh);  
	return;
}

void SapXepNganh(CauTrucTroNganh* Nganh)
{
	puts("1.TangDanGpa 2.GiamDanGpa 3.TangTuoi 4.GiamTuoi 5.Thoat");
	int a = 0;
	while(a != 5)
	{
		printf("\nChon: ");
		scanf("%d", &a);
		getchar();
		switch (a)
		{
			case 1: TangDanGpa(Nganh); break;
			case 2: GiamDanGpa(Nganh); break;
			case 3: TangTuoi(Nganh); break;
			case 4: GiamTuoi(Nganh) ; break;
			case 5: break;
		}
	}
	return;
}

