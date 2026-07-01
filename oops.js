// let animal={
//     eats:true,
// }
// let rabbit={
//     jumps:true,
// }
// rabbit.__proto__=animal
// class Animal {
//     constructor(name) {
//         this.name=name;
//         console.log('Object is created')
//     }
//     eats() {
//         console.log('khaa raha hoon')
//     }
//     jumps(){
//         console.log('kood raha hoon')
//     }
// }
// let a=new Animal('Rabbit')
// console.log(a.eats())
class Hi{
    constructor(name){
        this.name=name
    }
    get name{
        return this.name
    }
}
let a= new Hi('Rabbit')
console.log(a.name)