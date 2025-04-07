#include "Common-PCH.h"

PROC_DECLARE(0x62ac780, internal_62ac780, public_62ac780);
extern "C" NAKED register_t __cdecl internal_62ac780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e450]
        mov dword ptr ds : [public_63fc2f8], eax
        ret 
        UNREACHABLE_TRAP(0x62ac780)
    }
}
