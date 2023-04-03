#include <iostream>
template <typename T>
void mostrar_binario(const T a) {
	for (int i = sizeof(a)*8-1; i>=0 ; i--) {
		std::cout << (1&(a>>i));
	}
	std::cout << '\n';
}
int main() {
	uint8_t var = 4;
	unsigned short int var2 = 65535;
	int z = 20;
	u_int8_t var3 = 0xF;
	u_int8_t var4 = 010;
	mostrar_binario(var);
	mostrar_binario(var2);
	mostrar_binario(z);
	mostrar_binario(var3);
	mostrar_binario(var4);
}
