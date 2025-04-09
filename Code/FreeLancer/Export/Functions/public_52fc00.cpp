#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52fc00, internal_52fc00, public_52fc00);
extern "C" NAKED register_t __cdecl internal_52fc00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd10]
        mov dword ptr ds : [public_6754b0], eax
        ret 
        UNREACHABLE_TRAP(0x52fc00)
    }
}
