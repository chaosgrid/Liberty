#include "Common-PCH.h"

PROC_DECLARE(0x62a3ba0, internal_62a3ba0, public_62a3ba0);
extern "C" NAKED register_t __cdecl internal_62a3ba0()
{
    __asm
    {
        mov dword ptr ds : [public_63fc290], 0
        ret 
        UNREACHABLE_TRAP(0x62a3ba0)
    }
}
