#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a860);

PROC_DECLARE(0x6c2a860, internal_6c2a860, public_6c2a860);
extern "C" NAKED register_t __cdecl internal_6c2a860()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 4
        ret 
        UNREACHABLE_TRAP(0x6c2a860)
    }
}
