#pragma once


namespace Archetype
{
    struct Equipment;
    struct Solar;
    struct Root;
    struct Ship;
    struct MotorData;
    struct Explosion;
    struct DynamicAsteroid;
    struct Asteroid;

    enum class ClassType
    {
        Root = 0,
        EqObj = 1,
        Solar = 2,
        Ship = 3,
        Asteroid = 4,
        DynamicAsteroid = 5,
        Equipment = 6,
        AttachedEquipment = 7,
        LootCrate = 8,
        CargoPod = 9,
        Commodity = 10,
        Power = 11,
        Engine = 12,
        Shield = 13,
        ShieldGenerator = 14,
        Thruster = 15,
        Launcher = 16,
        Gun = 17,
        MineDropper = 18,
        CounterMeasureDropper = 19,
        Scanner = 20,
        Light = 21,
        Tractor = 22,
        AttachedFxEquip = 23,
        InternalFxEquip = 24,
        RepairDroid = 25,
        RepairKit = 26,
        ShieldBattery = 27,
        CloakingDevice = 28,
        TradeLaneEquip = 29,
        Projectile = 30,
        Munition = 31,
        Mine = 32,
        CounterMeasure = 33,
        Armor = 34,
    };

    COMMON_DEC void EnumAsteroids(struct ArchEnumerator*);
    COMMON_DEC void EnumDynamicAsteroids(ArchEnumerator*);
    COMMON_DEC void EnumEquipment(ArchEnumerator*);
    COMMON_DEC void EnumShips(ArchEnumerator*);
    COMMON_DEC void EnumSimples(ArchEnumerator*);
    COMMON_DEC void EnumSolars(ArchEnumerator*);
    COMMON_DEC void Free();
    COMMON_DEC void FreeExplosions();
    COMMON_DEC int GetArchMaxHitPts(unsigned int);
    COMMON_DEC Asteroid* GetAsteroid(unsigned int);
    COMMON_DEC Asteroid* GetAsteroidByName(const ID_String&);
    COMMON_DEC unsigned int GetAsteroidID(const ID_String&);
    COMMON_DEC DynamicAsteroid* GetDynamicAsteroid(unsigned int);
    COMMON_DEC DynamicAsteroid* GetDynamicAsteroidByName(const ID_String&);
    COMMON_DEC unsigned int GetDynamicAsteroidID(const ID_String&);
    COMMON_DEC Equipment* GetEquipment(unsigned int);
    COMMON_DEC Equipment* GetEquipmentByName(const ID_String&);
    COMMON_DEC unsigned int GetEquipmentID(const ID_String&);
    COMMON_DEC Explosion* GetExplosion(const ID_String&);
    COMMON_DEC unsigned int GetId(ClassType, unsigned int);
    COMMON_DEC unsigned int GetIdCount(ClassType);
    COMMON_DEC const MotorData* GetMotor(unsigned int);
    COMMON_DEC Ship* GetShip(unsigned int);
    COMMON_DEC Ship* GetShipByName(const ID_String&);
    COMMON_DEC unsigned int GetShipID(const ID_String&);
    COMMON_DEC Root* GetSimple(unsigned int);
    COMMON_DEC Root* GetSimpleByName(const ID_String&);
    COMMON_DEC unsigned int GetSimpleID(const ID_String&);
    COMMON_DEC Solar* GetSolar(unsigned int);
    COMMON_DEC Solar* GetSolarByName(const ID_String&);
    COMMON_DEC unsigned int GetSolarID(const ID_String&);
    COMMON_DEC unsigned short LargeIDToSmallID(unsigned int);
    COMMON_DEC bool Load(struct IFileSystem*, long*, int*);
    COMMON_DEC bool Load(const char*, long*, int*);
    COMMON_DEC int LoadAsteroids(const char*, struct IClObjFactory*);
    COMMON_DEC int LoadEquipment(const char*, bool, IClObjFactory*);
    COMMON_DEC bool LoadExplosion(INI_Reader&, bool);
    COMMON_DEC int LoadShips(const char*, bool, IClObjFactory*);
    COMMON_DEC int LoadSimples(const char*, bool, IClObjFactory*);
    COMMON_DEC int LoadSolar(const char*, bool, IClObjFactory*);
    COMMON_DEC unsigned int SmallIdToLargeID(unsigned short);
}