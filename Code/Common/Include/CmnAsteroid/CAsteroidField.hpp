#pragma once



namespace CmnAsteroid
{
    class CAsteroidField
    {
        public:
        COMMON_DEC CAsteroidField(const CAsteroidField&);
        COMMON_DEC CAsteroidField();
        COMMON_DEC ~CAsteroidField();
        COMMON_DEC CAsteroidField& operator=(const CAsteroidField&);
        COMMON_DEC int AddRef();
        COMMON_DEC int Release();
        COMMON_DEC FLHookCore::Vector closest_cube_pos(const FLHookCore::Vector&);
        COMMON_DEC unsigned long create_cube_id(const FLHookCore::Vector&);
        COMMON_DEC CAsteroidCube* find_cube(unsigned long);
        COMMON_DEC void flush_changes();
        COMMON_DEC AxisRotations& get_axis_rotations();
        COMMON_DEC asteroid_marker* get_changes();
        COMMON_DEC int get_cube_size();
        COMMON_DEC Exclusion::AsteroidExclusionZoneMgr* get_exclusion_mgr();
        COMMON_DEC float get_immersion(const FLHookCore::Vector&);
        COMMON_DEC const Universe::IZone* get_lootable_zone(const FLHookCore::Vector&) const;
        COMMON_DEC void load(INI_Reader&, int);
        COMMON_DEC bool near_field(const FLHookCore::Vector&);
        COMMON_DEC float near_field_fraction(const FLHookCore::Vector&, float);
        COMMON_DEC void populate_asteroids(const FLHookCore::Vector&, const FLHookCore::Vector&);
        COMMON_DEC void set_cube_size(int);
        COMMON_DEC void set_empty_freq(float);
        COMMON_DEC void set_fill_dist(int);
        COMMON_DEC void set_system(unsigned int);
        COMMON_DEC void set_zone(const Universe::IZone*);

        private:
        COMMON_DEC void populate_asteroids_internal(const FLHookCore::Vector&, const FLHookCore::Vector&, float);
        COMMON_DEC void update(float);

        public:
        uint dunno[10];
        /* 10 */ Universe::IZone* zone;
        /* 11 */ uint dunno4;
        /* 12 */ Exclusion::AsteroidExclusionZoneMgr* exclusionZoneMgr;
        /* 13 */ uint dunno1;
        /* 14 */ uint dunno2;
        /* 15 */ uint dunno3;
        /* 16 */ uint systemId;
        /* 17 */ int cubeSize;
        /* 18 */ int fillDist;
        /* 19 */ float emptyFreq;
        // This is probably a FLHookCore::Matrix? // TODO: Test the type @Nen
        /* 20 */ float rotX[4];
        /* 24 */ float rotY[4];
        /* 28 */ float rotZ[4];
    };
}