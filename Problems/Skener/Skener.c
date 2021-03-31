include <stdio.h>

int main(){
	int r, c, zr, zc;
	char ch;

	scanf("%d %d %d %d", &r, &c, &zr, &zc);

	int arr[r][c];

	scanf("%c", &ch);

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			scanf("%c", &ch);
			arr[i][j] = ch;
		}
		scanf("%c", &ch);
	}

	for(int i = 0; i < r * zr; i++){
		for(int j = 0; j < c * zc; j++){
			printf("%c", arr[i / zr][j / zc]);
		}
		printf("\n");
	}

	return 0;
}
