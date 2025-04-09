#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab4b0);

PROC_DECLARE(0x5ab4b0, internal_5ab4b0, public_5ab4b0);
extern "C" NAKED register_t __cdecl internal_5ab4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x230], eax
        ret 4
        UNREACHABLE_TRAP(0x5ab4b0)
    }
}
