#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dfe0);

PROC_DECLARE(0x6c2dfe0, internal_6c2dfe0, public_6c2dfe0);
extern "C" NAKED register_t __cdecl internal_6c2dfe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        inc eax
        mov dword ptr ds : [ecx+0x2C], eax
        ret 
        UNREACHABLE_TRAP(0x6c2dfe0)
    }
}
