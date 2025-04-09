#include "FreeLancer-PCH.h"

PROC_DECLARE(0x524e60, internal_524e60, public_524e60);
extern "C" NAKED register_t __cdecl internal_524e60()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [ecx+0x3C], eax
        mov dword ptr ds : [ecx+0x34], 0x41200000
        ret 
        UNREACHABLE_TRAP(0x524e60)
    }
}
