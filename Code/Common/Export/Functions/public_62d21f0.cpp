#include "Common-PCH.h"

PROC_DECLARE(0x62d21f0, internal_62d21f0, public_62d21f0);
extern "C" NAKED register_t __cdecl internal_62d21f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0330]
        mov dword ptr ds : [public_63fc960], eax
        ret 
        UNREACHABLE_TRAP(0x62d21f0)
    }
}
