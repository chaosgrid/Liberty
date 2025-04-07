#include "Common-PCH.h"

PROC_DECLARE(0x62a8710, internal_62a8710, public_62a8710);
extern "C" NAKED register_t __cdecl internal_62a8710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e0c0]
        mov dword ptr ds : [public_63fc2e0], eax
        ret 
        UNREACHABLE_TRAP(0x62a8710)
    }
}
