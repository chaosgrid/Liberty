#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369a10);

PROC_DECLARE(0x6369a00, internal_6369a00, public_6369a00);
extern "C" NAKED register_t __cdecl internal_6369a00()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        call public_6369a10
        ret 8
        UNREACHABLE_TRAP(0x6369a00)
    }
}
