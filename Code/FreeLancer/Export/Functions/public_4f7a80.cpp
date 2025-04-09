#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);

PROC_DECLARE(0x4f7a80, internal_4f7a80, public_4f7a80);
extern "C" NAKED register_t __cdecl internal_4f7a80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x58]
        inc eax
        mov dword ptr ds : [ecx+0x58], eax
        ret 
        UNREACHABLE_TRAP(0x4f7a80)
    }
}
