enum calculadorastat{
	CALCULADORA_OK = 0, /*no error*/
	CALCULADORA_NOK = 1 /*error*/
};
/*valor de la caculadora*/
union resultado switch(calculadorastat status){
	case CALCULADORA_OK:
		float respuesta;
	default:
		void;
};
/*Procedimiento remoto de la calculadora*/
program CALCULADORA_PROGRAM{
	version CALCULADORA_VERSION{
		resultado BASIC(void) = 1;
	}=1;
}=0x3;
