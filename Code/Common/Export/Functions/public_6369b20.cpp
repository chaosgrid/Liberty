#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369bd0);

PROC_DECLARE(0x6369b20, internal_6369b20, public_6369b20);
extern "C" NAKED register_t __cdecl internal_6369b20()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        call public_6369bd0
        ret 4
        UNREACHABLE_TRAP(0x6369b20)
    }
}
