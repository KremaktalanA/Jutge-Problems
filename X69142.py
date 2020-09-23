gpu_frequency=int(input())
game_needed_frequency=int(input())
count_of_games=0
while( game_needed_frequency != 0):
 	if(game_needed_frequency<=gpu_frequency):
 		count_of_games = count_of_games+1
 	game_needed_frequency=int(input())
print(count_of_games)
