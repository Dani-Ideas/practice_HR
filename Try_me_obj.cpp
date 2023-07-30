#include <iostream>
#include <string>

using namespace std;

int Npc::number_elemets=0;

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
            number_elemets++;
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

}