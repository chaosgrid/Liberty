#include "Common-PCH.h"

PROC_DECLARE(0x62d0b60, internal_62d0b60, public_62d0b60);
extern "C" NAKED register_t __cdecl internal_62d0b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a001c]
        mov dword ptr ds : [public_63fc940], eax
        ret 
        UNREACHABLE_TRAP(0x62d0b60)
    }
}
