#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4be590, internal_4be590, public_4be590);
extern "C" NAKED register_t __cdecl internal_4be590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6014]
        mov dword ptr ds : [public_6724a8], eax
        ret 
        UNREACHABLE_TRAP(0x4be590)
    }
}
