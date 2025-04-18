#pragma once



namespace CmnAsteroid
{
    class CAsteroidSystem
    {
        public:
        COMMON_DEC CAsteroidSystem(const CAsteroidSystem&);
        COMMON_DEC CAsteroidSystem();
        COMMON_DEC ~CAsteroidSystem();
        COMMON_DEC CAsteroidSystem& operator=(const CAsteroidSystem&);
        COMMON_DEC int AddRef();
        COMMON_DEC CAsteroidField* FindFirst();
        COMMON_DEC CAsteroidField* FindNext();
        COMMON_DEC int Release();
        COMMON_DEC CAsteroidField* create_field();
        COMMON_DEC unsigned int get_sys_id();
        COMMON_DEC void set_sys_id(unsigned int);
        COMMON_DEC void update(struct IObjDB*, float);

        public:
        unsigned char data[OBJECT_DATA_SIZE];
    };
}