void InMinGpa(float min, CauTrucTroNganh* Nganh);
void InMaxGpa(float max, CauTrucTroNganh* Nganh);

void TimMinGpa(CauTrucTroNganh* Nganh);
void TimMaxGpa(CauTrucTroNganh* Nganh);
void TimGpa(CauTrucTroNganh* Nganh);
void TimTenSV(CauTrucTroNganh* Nganh); 
void TimTuoi(CauTrucTroNganh* Nganh); 

void TimNganh(CauTrucTroNganh* Nganh);
void TimTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 


void TimTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		TimNganh(&Nganh[0]); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		TimNganh(&Nganh[1]); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		TimNganh(&Nganh[2]); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		TimNganh(&Nganh[3]); 
	}	
	return;
}

void InMinGpa(float min, CauTrucTroNganh* Nganh)
{
	bool p = false; 
	printf("+-----------+-------------------------+------------+---------+\n");
    printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    printf("+-----------+-------------------------+------------+---------+\n");

	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Gpa == min)
		{
			p = true; 
			int khoang_trang_TenNganh = 3; 
			int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               					   (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               							(ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	   khoang_trang_Gpa + 3, ConTro->Gpa,
        	   khoang_trang_Gpa, ""); 
              
    	printf("+-----------+-------------------------+------------+---------+\n");

		}
		ConTro = ConTro->Next;
	}

	if(p == false)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	}
	return; 
}

void TimMinGpa(CauTrucTroNganh* Nganh)
{
	float min = MIN;
	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Gpa <= min) min = ConTro->Gpa;
		ConTro = ConTro->Next;
	}
	InMinGpa(min, Nganh);
	return;
}

void InMaxGpa(float max, CauTrucTroNganh* Nganh)
{
	bool p = false; 
	printf("+-----------+-------------------------+------------+---------+\n");
    printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    printf("+-----------+-------------------------+------------+---------+\n");

	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Gpa == max)
		{
			p = true; 
			int khoang_trang_TenNganh = 3; 
			int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               					   (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               							(ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	   khoang_trang_Gpa + 3, ConTro->Gpa,
        	   khoang_trang_Gpa, ""); 

               
    	printf("+-----------+-------------------------+------------+---------+\n");

		}
		ConTro = ConTro->Next;
	}

	if(p == false)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	}
	return;
}

void TimMaxGpa(CauTrucTroNganh* Nganh)
{
	float max = MAX;
	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Gpa >= max) max = ConTro->Gpa;
		ConTro = ConTro->Next;
	}
	InMaxGpa(max, Nganh);
	return;
}

void TimGpa(CauTrucTroNganh* Nganh)
{
	printf("Gpa: ");
	float n;
	scanf("%f", &n); getchar(); 

	bool p = false; 
	printf("+-----------+-------------------------+------------+---------+\n");
    printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    printf("+-----------+-------------------------+------------+---------+\n");

	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Gpa == n)
		{
			p = true; 
			int khoang_trang_TenNganh = 3; 
			int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               					   (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               							(ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	   khoang_trang_Gpa + 3, ConTro->Gpa,
        	   khoang_trang_Gpa, ""); 

               
    	printf("+-----------+-------------------------+------------+---------+\n");

		}
		ConTro = ConTro->Next;
	}

	if(p == false)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	}
	return;
}

void TimTenSV(CauTrucTroNganh* Nganh)  
{
	char TenSV[KT_TenSV];
	printf("TenSV: "); 
	fgets(TenSV, sizeof(TenSV), stdin); 
	TenSV[(int) strlen(TenSV) - 1] = '\0'; 
	ChuanHoaTenSV(TenSV); 

	bool p = false; 
	printf("+-----------+-------------------------+------------+---------+\n");
    printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    printf("+-----------+-------------------------+------------+---------+\n");

	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(strcmp(TenSV, ConTro->TenSV) == 0)
		{
			p = true; 
			int khoang_trang_TenNganh = 3; 
			int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               					   (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               							(ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	   khoang_trang_Gpa + 3, ConTro->Gpa,
        	   khoang_trang_Gpa, ""); 

               
    	printf("+-----------+-------------------------+------------+---------+\n");

		}
		ConTro = ConTro->Next;
	}
	if(p == false)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	}
	return;
}

void TimTuoi(CauTrucTroNganh* Nganh)
{
	bool p = false; 
	printf("Tuoi: ");
	int n; scanf("%d", &n);
	printf("+-----------+-------------------------+------------+---------+\n");
    printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    printf("+-----------+-------------------------+------------+---------+\n");
	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		if(ConTro->Tuoi == n)
		{
			p = true; 
			int khoang_trang_TenNganh = 3; 
			int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               					   (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               							(ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	   khoang_trang_Gpa + 3, ConTro->Gpa,
        	   khoang_trang_Gpa, ""); 
     
    	printf("+-----------+-------------------------+------------+---------+\n");

		}
		ConTro = ConTro->Next;
	}
	if(p == false)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	}
	return;
}

void TimNganh(CauTrucTroNganh* Nganh)
{
	puts("1.TimGpa 2.TimMaxGpa 3.TimMinGpa 4.TimTenSV 5.TimTuoi 6.Thoat");
	int a = 0;
	while(a != 6)
	{
		printf("\nChon: ");
		scanf("%d", &a);
		getchar();
		switch (a)
		{
			case 1: TimGpa(Nganh); break;
			case 2: TimMaxGpa(Nganh); break;
			case 3: TimMinGpa(Nganh); break;
			case 4: TimTenSV(Nganh) ; break;
			case 5: TimTuoi(Nganh); break;
			case 6: break;
		}
	}
	return;
}
