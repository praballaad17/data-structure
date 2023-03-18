#include<iostream>
#include<cstring>
#include<vector>


using namespace std;

	char* mystrtok(char* str, char delim) {
		cout<<"str: "<<str<<endl;
		
		static char* input = NULL;
		cout<<"input: "<<input<<endl;
		cout.clear();
		
		if(str != NULL) {
			input = str;
		}
		if( input == NULL) {
			return NULL;
		}
		char *token = new char[strlen(input)+1];
		int i=0;
		
		for ( ; input[i] !='\0'; i++) {
			if(input[i]!=delim) {
				token[i]=input[i];
			}
			else {
				token[i]='\0';
				input = input + i+1;
				cout<<"else-input: "<<input<<endl;
				cout<<token<<endl;
				return token;
			}
		}

		token[i]='\0';
		input = NULL;
		return token;
	}

int main() {
	char arr[1000];
	cin.getline(arr,1000);
	char *token = mystrtok(arr, ' ');
	cout<<endl;
	while(token !=NULL) {
		cout<<"token: "<<token<<endl;
		token = mystrtok(NULL, ' ');
	}
	return 0;
}