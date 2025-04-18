#pragma once



namespace CmnAsteroid
{
    class CAsteroidCube
    {
        public:
        enum CubeState
        {
        };
        COMMON_DEC CAsteroidCube(const CAsteroidCube&);
        COMMON_DEC CAsteroidCube(class CAsteroidField*);
        COMMON_DEC ~CAsteroidCube();
        COMMON_DEC CAsteroidCube& operator=(const CAsteroidCube&);
        COMMON_DEC struct asteroid_marker* get_changes();
        COMMON_DEC unsigned long get_id();
        COMMON_DEC FLHookCore::Matrix get_orient();
        COMMON_DEC FLHookCore::Vector get_pos();
        COMMON_DEC CubeState get_state();
        COMMON_DEC void init(const FLHookCore::Vector&, unsigned long, struct AsteroidCubeArch*, const struct AxisRotations&, float);
        COMMON_DEC void set_size(int);
        COMMON_DEC void set_state(CubeState);
        COMMON_DEC void set_system(unsigned int);

        private:
        COMMON_DEC bool compute_asteroid_id(const FLHookCore::Vector&, unsigned long&);

        public:
        unsigned char data[OBJECT_DATA_SIZE];
    };
}