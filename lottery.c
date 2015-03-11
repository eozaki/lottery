#include <stdlib.h>
#include <time.h>

void validate(int number) {
  if (number<=0){
    exit(1);
  }
}

int main() {
  int tickets, games_per_ticket, numbers_per_game;

  srand(time(NULL));

  printf("Quantos bilhetes? ");
  scanf("%d", &tickets);
  validate(tickets);
  printf("Quantos jogos por bilhete? ");
  scanf("%d", &games_per_ticket);
  validate(games_per_ticket);
  printf("Quantos numeros por jogo? ");
  scanf("%d", &numbers_per_game);
  validate(numbers_per_game);

  while(tickets > 0){
    int games_to_do = games_per_ticket;
    while(games_to_do > 0){
      int numbers_to_randomize = numbers_per_game;
      while(numbers_to_randomize > 0){
        int r = 1 + rand()%60;
        printf("%d ", r);
        numbers_to_randomize--;
      }
      printf("\n");
      games_to_do--;
    }
    printf("\n");
    tickets--;
  }
  return 0;
}
