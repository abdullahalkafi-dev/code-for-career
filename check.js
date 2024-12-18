const obj = {
    name: 'John',
    fn: function () {
        var name = 'Doe';
        console.log(this.name);
    }
};
obj.fn(); // Logs "John"