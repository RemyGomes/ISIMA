#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/socket.h>
#include <string.h>

void main(int argc, char *argv[])
{
  char buffer[200],texte[200];
  int port, rc, sock,i,c;
  struct sockaddr_in addr;
  struct hostent *entree;

  int choix;

  if (argc !=3)  {
      printf("usage : clientv4 nom_serveur port\n");
	exit(1);    }
  
  addr.sin_port=htons(atoi(argv[2]));
  addr.sin_family=AF_INET;
  entree=(struct hostent *)gethostbyname(argv[1]);
  bcopy((char *)entree->h_addr,(char *)&addr.sin_addr,entree->h_length);
    
  sock= socket(AF_INET,SOCK_STREAM,0);

  if (connect(sock, (struct sockaddr *)&addr,sizeof(struct sockaddr_in)) < 0) {
    printf("probleme connexion\n");
    exit(1); }

  printf("connexion passe\n");

  while (1) {
      bzero(texte,sizeof(texte)); 
      bzero(buffer,sizeof(buffer));     
      i = 0;
      
      do
      {
        printf("Choissisez une option\n1) Nombre de voyelles dans le texte\n2) Longueur du texte\n3) Quitter\n");
        scanf("%d", &choix);
      }while(choix >3 || choix < 0);
      printf("Entrez une ligne de texte : \n");
      texte[i] = choix + '0';
      printf("%c\n", texte[i]);
      i++;
      while((c=getchar()) != '\n')
	      texte[i++]=c;
      send(sock,texte,strlen(texte)+1,0);
      recv(sock,buffer,sizeof(buffer),0);
      printf("recu %s\n",buffer);
      
      if (strcmp("FIN",texte) == 0)	break;
    }

  close(sock); }
