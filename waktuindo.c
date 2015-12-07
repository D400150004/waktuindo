#include <stdio.h>
#include <time.h>
#include <string.h>
void tampilkan_tanggal() {

	 time_t DETIK;
	 struct tm * info;
     char buffer[100];
	 char HARI[20];

	 time( &DETIK );
	 info = localtime( &DETIK );
     strftime(buffer,100," %d %B %Y - %H:%M:%S", info);

	strftime(HARI,20,"%A", info);
	if ( strcmp(HARI,"Monday") == 0 ) {
			printf("\n Sekarang hari | Senin,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Tuesday") == 0 ) {
			printf("\n Sekarang hari | Selasa,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Wednesday") == 0 ) {
			printf("\n Sekarang hari | Rabu,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Thursday") == 0 ) {
			printf("\n Sekarang hari | Kamis,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Friday") == 0 ) {
			printf("\n Sekarang hari | Jum'at,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Saturday") == 0 ) {
			printf("\n Sekarang hari | Sabtu,");
			printf("%s |\n", buffer );
	}
	if ( strcmp(HARI,"Sunday") == 0 ) {
			printf("\n Sekarang hari | Minggu,");
			printf("%s |\n", buffer );
	}

}
int main ()
{
  time_t AWAL=0, AKHIR=0;
	time( &AWAL );
	while (1) {
		time( &AKHIR );
		if ( AKHIR - AWAL > 0 ) {
			tampilkan_tanggal();
			AWAL = AKHIR;
		}
	}
   return(0);
}
