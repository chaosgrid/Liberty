#include "Common-PCH.h"

PROC_DECLARE(0x62ac3d0, internal_62ac3d0, public_62ac3d0);
extern "C" NAKED register_t __cdecl internal_62ac3d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e3a8]
        mov dword ptr ds : [public_63fc2f0], eax
        ret 
        UNREACHABLE_TRAP(0x62ac3d0)
    }
}
