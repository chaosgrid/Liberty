#include "FreeLancer-PCH.h"

PROC_DECLARE(0x414860, internal_414860, public_414860);
extern "C" NAKED register_t __cdecl internal_414860()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        inc eax
        mov dword ptr ds : [ecx+0x10], eax
        ret 
        UNREACHABLE_TRAP(0x414860)
    }
}
