#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int acak = rand() % 5, pilihan;
	char quit;
	string motivasiHidup[5] = {"\"Tidak ada istilah gagal dalam hidup, yang ada hanya sukses dan belum berhasil. Jangan menyerah!\"", "\"Ingatlah bahwa tak ada yang abadi di dunia ini, termasuk masalah yang ada dalam hidupmu\"", "\"Setiap cobaan yg datang adalah proses pendewasaan diri\"", "\"Jika kamu hanya bertahan di zona nyaman, maka kamu tak akan pernah tahu banyak hal. Jangan takut mencoba!\"", "\"Tidak ada kata gagal dalam hidup ini, kecuali saat kamu menyerah menghadapi cobaan\""};
	string motivasiCinta[5] = {"\"Cinta menyembuhkan orang, baik yang memberi maupun yang menerimanya\"", "\"Dan pada akhirnya, cinta yang kamu dapat, sama dengan cinta yang kamu buat\"", "\"Terapi penyembuhan terbesar adalah persahabatan dan cinta\"", "\"Cinta bukan hanya sesuatu yang kamu rasakan, itu adalah sesuatu yang kamu lakukan\"", "\"Cinta bukanlah bertahan seberapa lama. Tetapi seberapa jelas dan ke arah mana\""};
	string motivasiAgama[5] = {"\"Allah tidak membebani jiwa lebih dari yang dapat ditanggungnya\"", "\"Allah tahu apa yang terbaik untuk Anda dan kapan yang terbaik bagi Anda untuk memilikinya\"", "\"Hanya dengan mengingat Allah lah hati menjadi tentram\"", "\"Percayalah kepada Allah ketika segala sesuatunya tidak berjalan sesuai keinginan Anda. Allah memiliki rencana yang lebih baik untuk Anda\"", "\"Ilmu tanpa adanya agama adalah sesuatu kecacatan dan agama tanpa ilmu merupakan kebutaan\""};
	string motivasiKuliah[5] = {"\"Uang bisa dicari, ilmu bisa digali. Namun, kesempatan untuk membahagiakan orang tua tidak akan terulang kembali\"",  "\"Sesulit apa pun rintangan untuk wisuda, jika sudah berusaha pasti akan tercapai. Usaha tidak akan pernah mengkhianati hasil\"", "\"Ingatlah kehidupan kampus dengan terus mengasah. Jangan habiskan waktumu untuk berkeluh kesah\"", "\"Berhenti di tengah jalan adalah kesia-siaan. Ayo mahasiswa, segera tuntaskan kewajiban kalian\"", "\"Terkadang keberhasilan sudah berada di depan mata, saat hati dan pikiran ingin menyerah\""};
  //  cout << sizeof(motivasiKuliah) / sizeof(motivasiKuliah[0]);

	cout << "\n======= MOTIVASI UNTUKMU =======" << endl;
	cout << "\nMau motivasi apa?\n1. Motivasi Hidup\n2. Motivasi Cinta\n3. Motivasi Islami\n4. Motivasi Kuliah" << endl<< endl;

	cout << "Pilih dengan angka: ";
	cin >> pilihan;
	switch (pilihan){
	case 1:
		cout << "\n"<< motivasiHidup[acak] << endl;
		break;
	case 2:
		cout << "\n"<< motivasiCinta[acak] << endl;
		break;
	case 3:
		cout << "\n"<< motivasiAgama[acak] << endl;
		break;
	case 4:
		cout << "\n"<< motivasiKuliah[acak] << endl;
		break;
	default:
		cout << "Angka yang anda masukkan tidak valid" << endl<< endl;
		main();
	}

	cout << "\nButuh motivasi lagi? (Y/N): ";
	while (true){
		cin >> quit;
		cout << endl;
		if (quit == 'y' || quit == 'Y'){
			main();
            return 0;
		}else if (quit == 'n' || quit == 'N'){
		    return 0;
		}else{
			cout << "Tolong masukkan (Y/N): ";
		}
	}
    
	return 0;
}