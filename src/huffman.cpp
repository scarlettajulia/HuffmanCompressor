#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <ctime>
#define NYT 256
using namespace std;

//Definisi Bintree
typedef unsigned char Infotype;
typedef struct tNode *AddressTree;
typedef struct tNode {
	Infotype Info;
	int Leaf;
	long long Weight;
	AddressTree Left;
	AddressTree Right;
	AddressTree Parent;
} Node;
typedef AddressTree BinTree;


//KAMUS
fstream Fin;
unsigned char c;
char dummy;
BinTree Root;
BinTree Leaf[260];
int NFile;

class Encode_Writer{
public:
	Encode_Writer(){
		buffpos = 0;
		buffer = 0;
	}
	~Encode_Writer(){
		flush();
		CloseFile();
	}
//FILE Handler
	void OpenFile(string s){
		if(f.is_open())
			f.close();
		f.open(s.c_str(),ios::out|ios::binary);
		OutputFile = s;
		size=0;
	}
	void CloseFile(int& _size,int& _lastbit){
		if(f.is_open())
			f.close();
		_size = size;
		_lastbit = lastbit;
		size=0;
		lastbit = 0;
	}

	void CloseFile(){
		if(f.is_open())
			f.close();
		size=0;
		lastbit=0;
	}

//GETTER
	int GetLastBit(){
		return lastbit;
	}
//METHOD
	void WriteBit(int i)
	{

		buffer = (buffer<<1)+i;
		buffpos++;

		if (buffpos==8) 						//semua posisi bit buffer telah terisi, cetak ke file
		{
			size++;
			f.put(buffer);
			buffpos = 0;
			buffer = 0;
		}
	}

	void flush(){
		if(buffpos!=0)
		{
			lastbit = buffpos;
			while(buffpos<8){
				buffer <<=1;
				buffpos++;
			}
			buffpos = 0;
			f.put(buffer);
			size++;
			buffer=0;
		}
		else{
			lastbit = 0;
			buffer = 0;
			f << buffer;
		}
	}

	Encode_Writer& operator<<(unsigned char c){
		for(int i=7;i>=0;i--){
			this->WriteBit( (c& (1<<i))>>i);
		}
	}

	Encode_Writer& operator<<(int i){
		this->WriteBit(i);
	}
private:
	int buffpos;
	char buffer;
	fstream f;
	string OutputFile;
	int lastbit;
	long long size;
};


class Encode_Reader{
public:
	Encode_Reader(){
		buffpos = 0;
		buffer = 0;
	}

	void OpenFile(string s){
		f.open(s.c_str(),ios::in|ios::binary);
		eof=false;
		InputFile = s;
		buffpos = 0;
		
	}

	void CloseFile(){
		if(f.is_open())
			f.close();
	}

	~Encode_Reader(){

		CloseFile();
	}

	void reset_byte(){
		byte_get = 0;
		buffpos = 8;
	}

	int get(){
		char dummy;
		if(buffpos==8)
		{
			f >> noskipws >> dummy;
			buffer = (unsigned char) dummy;
			buffpos = 1;
			byte_get++;
			return buffer>>7;	
			
			
		}
		else
		{
		
			int hasil;
			hasil = ( (buffer&(1<<(7-buffpos)))>>(7-buffpos) );
			buffpos++;
			return hasil;	
		
			
		}
	}
	int get_buffpos(){
		return buffpos;
	}
	unsigned char getchar(){
		unsigned char hasil = 0;

		for(int i=0;i<=7;i++){
			hasil = (hasil<<1) + this->get();
		}
		return hasil;
	}
	bool GetEof(long long n){
		return byte_get >= n;
	}

	void get_header(int &N,vector<string> &FileName,vector<long long> &File_Size, vector<int> &File_LastBit){
		int NFile;
		unsigned int size;
		long long file_size;
		int last_bit;
		char dummy;
		string s;

		NFile = 0;
		f.get(dummy);
		do{
			NFile = NFile*10 + dummy-'0';
			f.get(dummy);

		}while(dummy!=';');
		
		N = NFile;
		for(int i=0;i<NFile;i++){
			s = "";
			f.get(dummy);
			do{
				s += dummy;
				f.get(dummy);
			}while(dummy!=';');

			FileName.push_back(s);

			file_size = 0;
			f.get(dummy);
			do{
				file_size = (file_size*10) + dummy-'0';
				f.get(dummy);
			}while (dummy !=';');
			File_Size.push_back(file_size);
			last_bit = 0;
			f.get(dummy);
			do{
				last_bit = (last_bit*10) + dummy-'0';
				f.get(dummy);

			}while (dummy != ';');
			File_LastBit.push_back(last_bit);
		}
	}

	unsigned char buffer;
private:
	int buffpos,NFile;
	string InputFile;
	fstream f;
	bool eof;
	int lastbit;
	long long byte_get;
};

string base_name(string const& s){
	return s.substr(s.find_last_of("/\\") + 1);
}
string ExtractPath(string const& s){
	return s.substr(0,s.find_last_of("/\\"));
}

BinTree Tree (Infotype Akar, int Leaf, long long weight,BinTree L, BinTree R,BinTree Parent)
/* Menghasilkan sebuah pohon biner dari A, L, dan R, jika alokasi berhasil */
/* Menghasilkan pohon kosong (Nil) jika alokasi gagal */
{
    BinTree T = (BinTree) malloc(sizeof(Node));

    if(T!=NULL)
    {
        T->Info = Akar;
        T->Left = L;
        T->Right = R;
        T->Weight = weight;
        T-> Parent = Parent;
        T->Leaf = Leaf;
    }
    return T;
}

void PrintPath(Encode_Writer &Fout,int i){
	BinTree P = Leaf[i];
	int Binary[999];
	int back=0;
	while(P->Parent!=NULL){
		
		Binary[back++] = P->Leaf;
		P = P->Parent;
	}
	while(back>0){
		//cout << Binary[back-1];
		Fout << Binary[--back];
		
	}
	//cout << "tuh hasilnya" << endl;
}

void Encode(Encode_Writer& Fout,unsigned char c){
	if(Leaf[c]!=NULL){
		PrintPath(Fout,c);
		//cout << "ke Print!" << endl;
	}
	else{

		PrintPath(Fout,NYT);
		Fout<<c;

		//cout << endl;

		Leaf[NYT]->Left = Tree('?',0,0,NULL,NULL,Leaf[NYT]);
		Leaf[NYT]->Right = Tree(c,1,0,NULL,NULL,Leaf[NYT]);
		Leaf[c] = Leaf[NYT]->Right;
		Leaf[NYT] = Leaf[NYT]->Left;
	}
}

void swapTree(BinTree& B1,BinTree& B2){
	
	BinTree B;
	bool B1Left,B2Left;
	
	if(B1->Leaf==0)
	{
		(B1->Parent)->Left = B2;
		B1Left = true;
	}
	else{
		(B1->Parent)->Right = B2;
		B1Left = false;
	}
	
	if(B2->Leaf == 0)
	{
		(B2->Parent)->Left = B1;
		B2Left = true;
	}
	else{
		(B2->Parent)->Right = B1;
		B2Left = false;
	}

	B = B1->Parent;
	B1->Parent = B2->Parent;
	B2->Parent = B;

	if(B1Left){
		B2->Leaf = 0;
	}
	else
		B2->Leaf = 1;

	if(B2Left){
		B1->Leaf = 0;
	}
	else
		B1->Leaf = 1;

}

void PrintTree (BinTree P, int h)
/* I.S. P terdefinisi, h adalah jarak indentasi */
/* F.S. Semua simpul P sudah ditulis dengan indentasi, Nil diganti dengan '.' */
/* Contoh: h=2
a
  b
    d
        .
        .
    .
  c
    .
    .
*/
{

    int i;

    if(P == NULL)
    {
        puts(".");
    }
    else
    {
        printf("%c\n",P->Info);
        for( i=1;i<=h;i++)
        {
            printf(" ");
        }
        PrintTree(P->Left,h*2);
        for( i=1;i<=h;i++)
        {
            printf(" ");
        }
        PrintTree(P->Right,h*2);
    }
}


void Update(BinTree &B1){
	queue<BinTree> v;
	BinTree B;
	bool found=false;
	//cout << "Update" << B1->Info << endl;
	v.push(Root);
	//PrintTree(Root,1);
	while(found == false && !v.empty()){
		//cout << "hehe";
		B = v.front();
		v.pop();
		//cout << "Nyari, lagi di " <<B->Info << " Weightnya " << B-> Weight << "mencari Weight" << B1->Weight << endl;
		if(B->Weight == B1->Weight && B!=(B1->Parent) && B!=Root ){
			found = true;
			//cout << "beratnya" << B->Weight << " " <<B1->Weight << endl;
			//cout <<"Ketemu " << B->Info << " " << B1->Info << endl;
		}
		else
		{
			
			if (B->Right !=NULL){
				v.push(B->Right);
			}
			if(B->Left != NULL)
			{
				v.push(B->Left);
			}
		}
	}
	//cout << (int)B->Info << " " << (int)B1->Info <<endl;
	
	if(B!=B1 && B!=(B1->Parent) && B!=Root){
		swapTree(B,B1);
		//cout << "UPDATE!!"<<endl;
		//cout << " Leafnya nunjuk ke " << Leaf[i]->Info<<endl;

	}

	(B1->Weight)++;
	if(B1->Parent != NULL && B1->Parent != Root){
		Update(B1->Parent);
	}
	//cout << "Done!" << endl;

}

void Decompres(Encode_Reader& Fin,Encode_Writer& Fout){
	BinTree B =  Root;
	int i;
	unsigned char c;
	while(B->Left != NULL){
		i = Fin.get();
		if(i==0){
			B = B->Left;
		}
		else
		{
			B = B->Right;
		}
	}
	if(B==Leaf[NYT]){
		c = Fin.getchar();
		Fout << c;
		Leaf[NYT]->Left = Tree('?',0,0,NULL,NULL,Leaf[NYT]);
		Leaf[NYT]->Right = Tree(c,1,0,NULL,NULL,Leaf[NYT]);
		Leaf[c] = Leaf[NYT]->Right;
		Leaf[NYT] = Leaf[NYT]->Left;
		Update(Leaf[c]);
	}
	else
	{
		//cout << "bukan NYT" << endl;
		Fout << B->Info;
		Update(Leaf[B->Info]);
	}
}

void DeleteTree(BinTree& B){
	if(B!=NULL){
		DeleteTree((B->Left));
		DeleteTree((B->Right));
		free(B);
	}
	else
		return;
}
//KAMUS
Encode_Writer Fout;
Encode_Reader Encode_Fin;
fstream header;
vector<long long> File_Size;
vector<int> File_LastBit;
vector<string> FileName;
int main(int argc, char* argv[]){
	
	int start_s=clock();
	int arg=1;
	int pilihan;

	pilihan  = atoi(argv[arg++]);
	
	//ALGORITMA
	if(pilihan == 1){
		string Output;
		NFile = atoi(argv[arg++]);

		for(int i=0;i<NFile;i++){
			string input;
			input = argv[arg++];
			FileName.push_back(input);
		}
		Output = argv[arg++]; 

		for(int file=0;file<NFile;file++){

			
			for(int i=0;i<260;i++){
				Leaf[i] = NULL;
			}
			Fin.open(FileName[file].c_str(),ios::binary|ios::in);
			Fout.OpenFile(FileName[file]+".pop");
			DeleteTree(Root);
			Root = Tree('R',1,0,NULL,NULL,NULL);
			Leaf[NYT] = Root;
			int stop_s;
			while( Fin.get(dummy)){
			//while((dummy = getchar()) != 's'){
				c = (unsigned char) dummy; 

				Encode(Fout,c);
				Update(Leaf[c]);
			}
			stop_s=clock();
			cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
			cout << "End of Encode" << endl;

			Fin.close();
			Fout.flush();
			int size,bit;
			Fout.CloseFile(size,bit);
			File_Size.push_back(size);
			File_LastBit.push_back(bit);
		}
		header.open(Output.c_str(),ios::binary|ios::out);
		header<<NFile<<";";
		for(int i=0;i<NFile;i++){
			header<< base_name(FileName[i])<<";";
			header<<File_Size[i]<<";";
			header<<File_LastBit[i]<<";";
		}

		for(int i=0;i<NFile;i++){
			Fin.open( (FileName[i]+".pop").c_str(), ios::binary|ios::in);
			header<<Fin.rdbuf();
			Fin.close();
			remove((FileName[i]+".pop").c_str());
		}

		header.close();
	}
	else{
		string input;
		input = argv[arg++];
		string path = argv[arg++];
		Encode_Fin.OpenFile(input);
		FileName.clear();
		File_Size.clear();
		File_LastBit.clear();
		Encode_Fin.get_header(NFile,FileName,File_Size,File_LastBit);
		Encode_Fin.reset_byte();
		for(int cases=0;cases<NFile;cases++){
			Root = Tree('R',1,0,NULL,NULL,NULL);
			for(int i=0;i<260;i++){
				Leaf[i] = NULL;
			}
			Leaf[NYT] = Root;

			//Pertama unik
			Fout.OpenFile(path+"\\"+FileName[cases]);
			unsigned char c = Encode_Fin.getchar();
			Fout << c; 
			Leaf[NYT]->Left = Tree('?',0,0,NULL,NULL,Leaf[NYT]);
			Leaf[NYT]->Right = Tree(c,1,1,NULL,NULL,Leaf[NYT]);
			Leaf[c] = Leaf[NYT]->Right;
			Leaf[NYT] = Leaf[NYT]->Left;

			while(!(Encode_Fin.GetEof(File_Size[cases])==true)){
				//PrintTree(Root,1);
				Decompres(Encode_Fin,Fout);
				
			}
			int stop_s=clock();
			cout << "End of Decode" << endl;
			cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
			
			Fout.CloseFile();
			Encode_Fin.reset_byte();
			
		}
		Encode_Fin.CloseFile();

		

	}
}