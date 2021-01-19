#include <stdio.h>	// eu vi no gogle q tem q tem esses # com ums nome embaçadinhos
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdbool.h>
#include <string.h>

int main(int argc , char * argv[]) { 	// a main my broder

	if(argc == 0){	// não tem condição!

	} else {	// se no
		char ip[15];
		int soquete, conectar, theos;

		int iporta = 0;	/* porta dos fundos*/int uporta = 65536;		int atual = iporta;

		printf("\e[1;31mdigite the ip do your alvo: ");	// aqui the thetheos se informate sobre what será the ip to ser flooded!!
		scanf("%s", &ip);
printf("\n");

		struct sockaddr_in alvo;

		while (true) {	// lop para flood eternamente no parar!!!!!!!!!!!!!

			if(atual == uporta){
				atual = 0;
			} else{				soquete = socket(AF_INET, SOCK_STREAM, 0);
				alvo.sin_family = AF_INET;
			alvo.sin_addr.s_addr = inet_addr(ip);
					alvo.sin_port = htons(atual);

conectar = connect(soquete, (struct sockaddr *)&alvo, sizeof alvo);	// aqui he conecta

			if(conectar == 0)
	{
				printf("\e[1;32mrackeando!! (ip %s, port %d)\n", ip, atual);
		} else{
			printf("\e[1;32mrackiado com susexo! (ip %s, port %d)\n", ip, atual);

				} }

			close(soquete); close(conectar);
atual++;
		}


	}

return 0;

}
	// the end of minecraft e da script
