#include <iostream>
#include <string>

using namespace std;

//int Npc::number_elemets=0;

class Npc {
    private:
        int age;
        string name;
        static int number_elemets;
    public:
        int job = 0;
        Npc(string name_input,int age_input){
            this-> name=name_input;
            this-> age = age_input;
  //          number_elemets+=1;
        }
        ~Npc(){
            cout << name<<" fue eliminado";
        }
        void updateName(string NewName){
            this-> name;
        }
        void updateAge(int newAge){
            this-> age= newAge;
        }
        void interaction(){
            string ocupations[]={"Desempleado","Profesor","Ingeniero","Medico","Abogado","Programador","Arquitecto","Veterinario","Psicologo","Enfermero","Diseñador","Contador","Cocinero","Electricista","Periodista","Actor","Músico","Escritor","Policía","Bombero","Astrónomo"} ;
            if (age<18&&job==0)
                cout << "Actualmete soy estudiante"<<endl;
            else    
                cout << "Actualmete trabajo como "<< ocupations[job]<<endl;
            //delete this;
        }

        void Say_hello(){
            cout << "Hola mi nombre es "<<name<<endl;
            interaction();
        }
};

int check_if_number(string intput){
    int verification= stoi(intput);
    if(verification>0&&verification<4)
        return verification;
    else 
        return 0;
}

int main (){
    Npc *carlos=new Npc ("Carlos de la O",42);
    /*
    carlos->name="Carlos de la O";
    carlos->age=42;
    */
    carlos->job=12;
    carlos->Say_hello();
    Npc *juan=new Npc("Carlos Pedocles Poncho",10);
    juan->Say_hello(); 


    string user_interaction;
    cout <<"Escoje una opcion: \n1-modificar un valor de un NPC \n2-Eliminar un NPC\n3-Crear un NPC\n";
    cin >> user_interaction;
    int choose=check_if_number(user_interaction);
    if (choose==1){
        cout<<"Despelgando menu:\n";
    }else if (choose==2){
        cout<<"Despelgando menu para eliminar:\n";
    }else if (choose==3){
        cout<<"Despelgando menu para ¡¡Crear vidaaaa!!:\n";
    }else 
        cout <<"Opción invalida\n";
    //return 0;
}