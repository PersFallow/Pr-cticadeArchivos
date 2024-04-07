#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define max 100

typedef char cadena[30];

typedef struct {
  int id;
  cadena nombre;
  cadena puesto;
  float sueldo;
} personal;

typedef personal ListaPersonal[max];

void llenado_automatico();
int contar_empleados();
void mostrar_lista(ListaPersonal empleados);
void cargar_empleado(ListaPersonal empleados, int i);
void add_personal();
void mostrar_personal();
void buscar();
void buscar_por_id();
void buscar_por_nombre();
void buscar_por_salario();
void buscar_por_puesto();
void editar_perfil_por_id();
void borrar_perfil_por_id();
void ordenar_por_id();
void ordenar_por_sueldo();
void ordenar_por_nombre();
void ordenar_por_puesto();
void ordenar();
int consultar_opc();

void menu();

int main() {

  printf("Bienvenido al nuestro programa de gestión de personal.\n");

  menu();

  printf("\nMuchas gracias por utilizar nuestro programa.\n");

  return 0;
}

void llenado_automatico() {

  ListaPersonal empleados;

  empleados[0].id = 1;
  strcpy(empleados[0].nombre, "Billy");
  strcpy(empleados[0].puesto, "Staff");
  empleados[0].sueldo = 700;
  empleados[1].id = 2;
  strcpy(empleados[1].nombre, "Hanny");
  strcpy(empleados[1].puesto, "Arquitecto");
  empleados[1].sueldo = 1620;
  empleados[2].id = 3;
  strcpy(empleados[2].nombre, "Valentina");
  strcpy(empleados[2].puesto, "Programador Sr.");
  empleados[2].sueldo = 10000;
  empleados[3].id = 4;
  strcpy(empleados[3].nombre, "Jeanne");
  strcpy(empleados[3].puesto, "Asociado");
  empleados[3].sueldo = 450;
  empleados[4].id = 5;
  strcpy(empleados[4].nombre, "Kai");
  strcpy(empleados[4].puesto, "Staff");
  empleados[4].sueldo = 500;
  empleados[5].id = 6;
  strcpy(empleados[5].nombre, "Ailu");
  strcpy(empleados[5].puesto, "Ventas");
  empleados[5].sueldo = 1200;
  empleados[6].id = 7;
  strcpy(empleados[6].nombre, "Pers");
  strcpy(empleados[6].puesto, "Programador Jr.");
  empleados[6].sueldo = 2100;
  empleados[7].id = 8;
  strcpy(empleados[7].nombre, "Fer");
  strcpy(empleados[7].puesto, "Interprete");
  empleados[7].sueldo = 900;
  empleados[8].id = 9;
  strcpy(empleados[8].nombre, "Roxy");
  strcpy(empleados[8].puesto, "Administrativo");
  empleados[8].sueldo = 650;
  empleados[9].id = 10;
  strcpy(empleados[9].nombre, "Elias");
  strcpy(empleados[9].puesto, "Cocinero");
  empleados[9].sueldo = 450;
  empleados[10].id = 11;
  strcpy(empleados[10].nombre, "Mai");
  strcpy(empleados[10].puesto, "Profesor");
  empleados[10].sueldo = 500;
  empleados[11].id = 12;
  strcpy(empleados[11].nombre, "Belu");
  strcpy(empleados[11].puesto, "Publicista");
  empleados[11].sueldo = 800;
  empleados[12].id = 13;
  strcpy(empleados[12].nombre, "Belén");
  strcpy(empleados[12].puesto, "Traductor");
  empleados[12].sueldo = 1200;
  empleados[13].id = 14;
  strcpy(empleados[13].nombre, "Aguilar");
  strcpy(empleados[13].puesto, "Abogado");
  empleados[13].sueldo = 6000;
  empleados[14].id = 15;
  strcpy(empleados[14].nombre, "Maria");
  strcpy(empleados[14].puesto, "Abogado");
  empleados[14].sueldo = 4000;
  empleados[15].id = 16;
  strcpy(empleados[15].nombre, "Emerson");
  strcpy(empleados[15].puesto, "Programador Ssr");
  empleados[15].sueldo = 4500;
  empleados[16].id = 17;
  strcpy(empleados[16].nombre, "Maryuri");
  strcpy(empleados[16].puesto, "Profesor");
  empleados[16].sueldo = 500;
  empleados[17].id = 18;
  strcpy(empleados[17].nombre, "Elena");
  strcpy(empleados[17].puesto, "Modelo");
  empleados[17].sueldo = 800;
  empleados[18].id = 19;
  strcpy(empleados[18].nombre, "Agustín");
  strcpy(empleados[18].puesto, "Lider de Ventas");
  empleados[18].sueldo = 3600;
  empleados[19].id = 20;
  strcpy(empleados[19].nombre, "Federico");
  strcpy(empleados[19].puesto, "Staff");
  empleados[19].sueldo = 800;
  empleados[20].id = 21;
  strcpy(empleados[20].nombre, "Juan");
  strcpy(empleados[20].puesto, "Caballo");
  empleados[20].sueldo = 1500;
  empleados[21].id = 22;
  strcpy(empleados[21].nombre, "Brenda");
  strcpy(empleados[21].puesto, "Médico");
  empleados[21].sueldo = 13000;
  empleados[22].id = 23;
  strcpy(empleados[22].nombre, "Stitch");
  strcpy(empleados[22].puesto, "CEO de Empresa");
  empleados[22].sueldo = 50000;
  empleados[23].id = 24;
  strcpy(empleados[23].nombre, "Mayra");
  strcpy(empleados[23].puesto, "Médico");
  empleados[23].sueldo = 8000;
  empleados[24].id = 25;
  strcpy(empleados[24].nombre, "Prato");
  strcpy(empleados[24].puesto, "Tech Lider");
  empleados[24].sueldo = 23000;
  empleados[25].id = 26;
  strcpy(empleados[25].nombre, "Manuel");
  strcpy(empleados[25].puesto, "Interprete");
  empleados[25].sueldo = 2000;
  empleados[26].id = 27;
  strcpy(empleados[26].nombre, "Rossi");
  strcpy(empleados[26].puesto, "Veterniari");
  empleados[26].sueldo = 2400;
  empleados[27].id = 28;
  strcpy(empleados[27].nombre, "Teffy");
  strcpy(empleados[27].puesto, "Veterinario");
  empleados[27].sueldo = 4500;
  empleados[28].id = 29;
  strcpy(empleados[28].nombre, "Matias");
  strcpy(empleados[28].puesto, "Profesor");
  empleados[28].sueldo = 500;
  empleados[29].id = 30;
  strcpy(empleados[29].nombre, "Bun");
  strcpy(empleados[29].puesto, "Estilista");
  empleados[29].sueldo = 340;
  empleados[30].id = 0;

  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "wb");
  fwrite(empleados, sizeof(empleados), 1, arPersonal);
  fclose(arPersonal);

  return;
}

int contar_empleados() {

  int i = 0;

  FILE *arPersonal;
  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("No se ha encontrado ningún archivo, se procederá a la creación de "
           "este.\n\n");
  } else {
    ListaPersonal empleados;

    fread(empleados, sizeof(empleados), 1, arPersonal);

    while (empleados[i].id != 0) {
      i++;
    }
  }

  fclose(arPersonal);
  return i;
}

void mostrar_lista(ListaPersonal empleados) {

  printf("-------------------------------------------------");
  printf("\n\nA continuación enseñaremos la lista de empleados:\n\n");

  int j = 0;

  printf("ID\t\tNombre\t\t\tPuesto\t\t\t\t\tSueldo\n\n");

  while (empleados[j].id != 0) {
    if (j < 9)
      printf("0");
    printf("%d\t\t%-15s\t%-17s\t\t%0.2f\n", empleados[j].id,
           empleados[j].nombre, empleados[j].puesto, empleados[j].sueldo);
    j++;
  }

  return;
}

void cargar_empleado(ListaPersonal empleados, int i) {

  printf("Insertar id de personal. (0 para finalizar carga):\n");
  scanf("%d", &empleados[i].id);
  while (getchar() != '\n')
    ;

  if (empleados[i].id != 0) {

    printf("\nIngresa nombre del empleado: ");
    fgets(empleados[i].nombre, 30, stdin);
    strtok(empleados[i].nombre, "\n");

    printf("\nIngresa puesto del empleado: ");
    fgets(empleados[i].puesto, 30, stdin);
    strtok(empleados[i].puesto, "\n");
    fflush(stdin);

    printf("\nIngresa sueldo del empleado: ");
    scanf("%f", &empleados[i].sueldo);
    while (getchar() != '\n')
      ;
  }
  return;
}

void add_personal() {

  int i;
  ListaPersonal empleados;

  printf("\n");
  printf("-------------------------------------------------\n");

  FILE *arPersonal;
  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error con la apertura del archivo, se procederá a "
           "crearse el mismo.");

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    empleados[0].id = 0;
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
  }

  fread(empleados, sizeof(empleados), 1, arPersonal);

  fclose(arPersonal);

  i = contar_empleados();

  do {
    cargar_empleado(empleados, i);
    printf("\nCarga de empleado posición %d:\n", i);
    printf("%d\n", empleados[i].id);
    printf("%s\n", empleados[i].nombre);
    printf("%s\n", empleados[i].puesto);
    printf("%f\n", empleados[i].sueldo);
    i++;
  } while (empleados[i].id != 0);

  arPersonal = fopen("ArchivoPersonal.dat", "wb");

  fwrite(empleados, sizeof(empleados), 1, arPersonal);

  fclose(arPersonal);
  return;
}

void mostrar_empleado(ListaPersonal empleados, int i) {
  printf("\nID\t\tNombre\t\t\tPuesto\t\t\t\t\tSueldo\n\n"
         "%d\t\t%-15s\t%-17s\t\t%0.2f\n",
         empleados[i].id, empleados[i].nombre, empleados[i].puesto,
         empleados[i].sueldo);
}

void mostrar_personal() {

  FILE *arPersonal;
  ListaPersonal empleados;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("No se ha encontrado ningún archivo, se procederá a la creación de "
           "este.\n");

    arPersonal = fopen("ArchivoPersonal.dat", "wb");

    empleados[0].id = 0;

    fwrite(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    mostrar_lista(empleados);
  }

  return;
}

void editar_perfil_por_id() {

  ListaPersonal empleados;
  personal perfil_actualizado;
  int i;
  int id;
  i = contar_empleados();
  int j;

  FILE *arPersonal;
  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error con la apertura del archivo\n");

  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    printf("Insertar ID del empleado a modificar: ");
    scanf("%d", &id);

    j = 0;

    bool completado = false;

    while (empleados[j].id != 0 && completado == false) {
      if (empleados[j].id == id) {

        cargar_empleado(empleados, j);
        arPersonal = fopen("ArchivoPersonal.dat", "wb");
        fwrite(empleados, sizeof(empleados), 1, arPersonal);
        fclose(arPersonal);
        completado = true;
      }
      j++;
    }
    if (empleados[j].id == 0) {
      printf("\nNo hay ningún empleado registrado con este ID");
    }
  }
  return;
}

void borrar_perfil_por_id() {

  ListaPersonal empleados;
  FILE *arPersonal;
  int id;
  int i, pos;
  int ML;
  ML = contar_empleados();

  arPersonal = fopen("ArchivoPersonal.dat", "rb");
  if (arPersonal == NULL) {
    printf("Ha ocurrido un error con la apertura del archivo");
  } else {

    printf("¿Cuál el id del empleado que desea borrar?: ");
    scanf("%d", &id);

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    pos = 0;
    while (empleados[pos].id != id) {
      pos++;
    }

    for (i = 0; (i + pos) <= ML; i++) {
      empleados[pos + i] = empleados[pos + i + 1];
    }

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
  }

  fclose(arPersonal);
  return;
}

void ordenar_por_id() {

  ListaPersonal empleados;
  personal aux;
  int j = 0;
  int ml;

  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error en la apertura del archivo\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    ml = contar_empleados();

    bool completado = false;

    while (completado == false) {
      completado = true;
      for (j = 0; j < ml - 1; j++) {
        if (empleados[j].id > empleados[j + 1].id) {
          aux = empleados[j + 1];
          empleados[j + 1] = empleados[j];
          empleados[j] = aux;
          completado = false;
        }
      }
    }

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
  }
  return;
}

void ordenar_por_sueldo() {

  ListaPersonal empleados;
  personal aux;
  int j = 0;
  int ml;
  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error en la apertura del archivo\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    ml = contar_empleados();
    printf("\nj = %d\n", j);

    bool completado = false;

    while (completado == false) {
      completado = true;
      for (j = 0; j < ml - 1; j++) {
        if (empleados[j].sueldo < empleados[j + 1].sueldo) {
          aux = empleados[j + 1];
          empleados[j + 1] = empleados[j];
          empleados[j] = aux;
          completado = false;
        }
      }
    }

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
  }
  return;
}

void ordenar_por_nombre() {

  ListaPersonal empleados;
  personal aux;

  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error en la apertura del archivo\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
    int j = 0;
    int ml;

    ml = contar_empleados();
    printf("\nj = %d\n", j);

    bool completado = false;

    while (completado == false) {
      completado = true;
      for (j = 0; j < ml - 1; j++) {
        if (strcmp(empleados[j].nombre, empleados[j + 1].nombre) > 0) {
          aux = empleados[j + 1];
          empleados[j + 1] = empleados[j];
          empleados[j] = aux;
          completado = false;
        }
      }
    }

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
  }
  return;
}

void ordenar_por_cargo() {

  ListaPersonal empleados;
  personal aux;

  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha ocurrido un error en la apertura del archivo\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
    int j = 0;
    int ml;

    ml = contar_empleados();
    printf("\nj = %d\n", j);

    bool completado = false;

    while (completado == false) {
      completado = true;
      for (j = 0; j < ml - 1; j++) {
        if (strcmp(empleados[j].puesto, empleados[j + 1].puesto) > 0) {
          aux = empleados[j + 1];
          empleados[j + 1] = empleados[j];
          empleados[j] = aux;
          completado = false;
        }
      }
    }

    arPersonal = fopen("ArchivoPersonal.dat", "wb");
    fwrite(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);
  }
  return;
}

void ordenar() {
  int opc;

  printf("\nCon qué criterio desea ordenar la lista?\n"
         "\n1. - Ordenar por id."
         "\n2. - Ordenar por nombre."
         "\n3. - Ordenar por sueldo."
         "\n4. - Ordenar por cargo.\n\n");
  scanf("%d", &opc);

  switch (opc) {
  case 1:
    ordenar_por_id();
    break;
  case 2:
    ordenar_por_nombre();
    break;
  case 3:
    ordenar_por_sueldo();
    break;
  case 4:
    ordenar_por_cargo();
    break;
  default:
    printf("Esa opción no es válida. Por favor seleccione una opción válida");
  }

  return;
}

void buscar_por_id() {

  ordenar_por_id();

  ListaPersonal empleados;
  int mayor = contar_empleados();
  mayor -= 1;
  int menor = 0;
  int mitad = (mayor + menor) / 2;
  int contador = 0;

  FILE *arPersonal;
  int idBuscado;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha habido un error con la apertura del archivo.\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    printf("\n-------------------------------------------------");
    printf("\n\nIngresa el id del empleado solicitado:\n\n");
    scanf("%d", &idBuscado);
    printf("\n");

    if (idBuscado > empleados[mayor].id) {
      printf(
          "\nEl ID solicitado no pertenece a ningún registro de empleado.\n");
    } else {
      while ((empleados[mitad].id != idBuscado) &&
             (empleados[menor].id <= empleados[mayor].id)) {
        mitad = (mayor + menor) / 2;
        if (empleados[mitad].id == idBuscado) {
          mostrar_empleado(empleados, mitad);
        } else {
          if (idBuscado > empleados[mitad].id) {
            menor = mitad + 1;
          } else if (idBuscado < empleados[mitad].id) {
            mayor = mitad - 1;
          }
        }

        if (empleados[menor].id > empleados[mayor].id) {
          printf("\nEl ID solicitado no pertenece a ningún registro de "
                 "empleado.\n");
        }
      }
    }
  }

  return;
}

void buscar_por_nombre() {

  ordenar_por_nombre();
  ListaPersonal empleados;
  FILE *arPersonal;
  cadena nombreBuscado;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha habido un error con la apertura del archivo.\n");
  } else {
    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    int i, ml;
    while (getchar() != '\n')
      ;
    printf("\n-------------------------------------------------");

    printf("\n\nIngresa el nombre a buscar:\n\n");
    fgets(nombreBuscado, 30, stdin);
    strtok(nombreBuscado, "\n");

    ml = contar_empleados();

    for (i = 0; i < ml; i++) {
      if (strstr(empleados[i].nombre, nombreBuscado) != NULL) {
        mostrar_empleado(empleados, i);
      }
    }
  }

  return;
}

void buscar_por_salario() {

  ordenar_por_id();

  ListaPersonal empleados;
  int i, min, may, cant;
  cant = contar_empleados();

  FILE *arPersonal;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha habido un error con la apertura del archivo.\n");
  } else {

    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    printf("\n-------------------------------------------------");
    printf("\n\n¿Entre qué rangos de sueldo desea realizar la búqueda?:\n\n");
    printf("Minimo: ");
    scanf("%d", &min);
    printf("\n");
    printf("Máximo: ");
    scanf("%d", &may);
    printf("\n");

    for (i = 0; i < cant; i++) {
      if (empleados[i].sueldo > min && empleados[i].sueldo < may) {
        mostrar_empleado(empleados, i);
      }
    }
  }

  return;
}

void buscar_por_puesto() {

  ordenar_por_nombre();
  ListaPersonal empleados;
  FILE *arPersonal;
  cadena puesto;

  arPersonal = fopen("ArchivoPersonal.dat", "rb");

  if (arPersonal == NULL) {
    printf("Ha habido un error con la apertura del archivo.\n");
  } else {
    fread(empleados, sizeof(empleados), 1, arPersonal);
    fclose(arPersonal);

    int i, ml;
    while (getchar() != '\n')
      ;
    printf("\n-------------------------------------------------");

    printf("\n\nIngresa el nombre a buscar:\n\n");
    fgets(puesto, 30, stdin);
    strtok(puesto, "\n");

    ml = contar_empleados();

    for (i = 0; i < ml; i++) {
      if (strstr(empleados[i].puesto, puesto) != NULL) {
        mostrar_empleado(empleados, i);
      }
    }
  }

  return;
}

void buscar() {
  int opc;

  printf("\nCon qué criterio desea ordenar la lista?\n"
         "\n1. - Buscar por id."
         "\n2. - Buscar por nombre."
         "\n3. - Buscar por sueldo."
         "\n4. - Buscar por cargo.\n\n");
  scanf("%d", &opc);

  switch (opc) {
  case 1:
    buscar_por_id();
    break;
  case 2:
    buscar_por_nombre();
    break;
  case 3:
    buscar_por_salario();
    break;
  case 4:
    buscar_por_puesto();
    break;
  default:
    printf("Esa opción no es válida. Por favor seleccione una opción válida");
  }

  return;
}

int consultar_opc() {

  int opc;
  printf("\n");
  printf("-------------------------------------------------");
  printf("\n\nMenu:\n\n"
         "0. - Salir del Programa\n"
         "1. - Añadir Personal.\n"
         "2. - Mostrar Personal.\n"
         "3. - Editar Perfil.\n"
         "4. - Borrar Perfil.\n"
         "5. - Buscar\n"
         "6. - Ordenar\n"
         "7. - Llenado Automático.\n\n"
         "¿Qué acción desea realizar?  ");
  scanf("%d", &opc);
  printf("\n");

  return opc;
}

void menu() {

  int opc;

  opc = consultar_opc();

  while (opc != 0) {
    switch (opc) {
    case 1:
      add_personal();
      break;
    case 2:
      mostrar_personal();
      break;
    case 3:
      editar_perfil_por_id();
      break;
    case 4:
      borrar_perfil_por_id();
      break;
    case 5:
      buscar();
      break;
    case 6:
      ordenar();
      break;
    case 7:
      llenado_automatico();
      break;
    default:
      printf("Esa opción no es válida, por favor seleccione una opción "
             "válida.\n");
      break;
    }

    opc = consultar_opc();
  }

  return;
}
