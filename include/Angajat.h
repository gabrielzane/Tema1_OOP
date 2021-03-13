#ifndef ANGAJAT_H
#define ANGAJAT_H


class Angajat
{
    public:
        Angajat();
        virtual ~Angajat();

        string GetName() { return Name; }
        void SetName(string val) { Name = val; }

    protected:

    private:
        string Name;
};

#endif // ANGAJAT_H
