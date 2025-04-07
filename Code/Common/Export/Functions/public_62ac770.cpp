#include "Common-PCH.h"

PROC_DECLARE(0x62ac770, internal_62ac770, public_62ac770);
extern "C" NAKED register_t __cdecl internal_62ac770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e44c]
        mov dword ptr ds : [public_63fc2fc], eax
        ret 
        UNREACHABLE_TRAP(0x62ac770)
    }
}
