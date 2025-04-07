#include "Common-PCH.h"

PROC_DECLARE(0x62969a0, internal_62969a0, public_62969a0);
extern "C" NAKED register_t __cdecl internal_62969a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ced0]
        mov dword ptr ds : [public_63fc17c], eax
        ret 
        UNREACHABLE_TRAP(0x62969a0)
    }
}
