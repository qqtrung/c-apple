void XoaNganh(CauTrucTroNganh* Nganh);
void XoaTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 

void XoaTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		XoaNganh(&Nganh[0]); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		XoaNganh(&Nganh[1]); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		XoaNganh(&Nganh[2]); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		XoaNganh(&Nganh[3]); 
	}	
	return;
}

void XoaNganh(CauTrucTroNganh* Nganh)
{
	printf("Vi tri xoa: ");
	int n, i = 1; scanf("%d", &n);

	SinhVien* ConTro1 = NULL;
	SinhVien* ConTro2 = NULL;
	ConTro1 = Nganh->Dau;
	if(n == 1) 
	{
		Nganh->Dau = ConTro1->Next;
		InNganh(Nganh);
		return;
	}
	while(ConTro1 != NULL)
	{
		ConTro2 = ConTro1->Next;
		if(i == n-1)
		{
			ConTro1->Next = ConTro2->Next;
			ConTro2->Next = NULL;
		}
		ConTro1 = ConTro1->Next;
		i++;
	}
	InNganh(Nganh);
}

