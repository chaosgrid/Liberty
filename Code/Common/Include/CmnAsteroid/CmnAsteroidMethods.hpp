#pragma once



namespace CmnAsteroid
{
    COMMON_DEC CAsteroidField* CreateAsteroidField(unsigned int);
    COMMON_DEC CAsteroidSystem* Find(unsigned int);
    COMMON_DEC int Load(unsigned int);
    COMMON_DEC int Unload(unsigned int);
    COMMON_DEC void Update(struct IObjDB*, float);
    COMMON_DEC int closest_cube_coord(int, int, int);
    COMMON_DEC unsigned long compute_cube_id(const FLHookCore::Vector&);
    COMMON_DEC bool compute_cube_orientation(unsigned long, FLHookCore::Matrix*, const struct AxisRotations&, float);
}