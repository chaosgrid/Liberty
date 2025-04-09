#include "FreeLancer-PCH.h"

PROC_DECLARE(0x419160, internal_419160, public_419160);
extern "C" NAKED register_t __cdecl internal_419160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        inc eax
        mov dword ptr ds : [ecx+0x2C], eax
        ret 
        UNREACHABLE_TRAP(0x419160)
    }
}
