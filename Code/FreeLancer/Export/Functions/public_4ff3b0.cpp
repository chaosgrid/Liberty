#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ff3b0);

PROC_DECLARE(0x4ff3b0, internal_4ff3b0, public_4ff3b0);
extern "C" NAKED register_t __cdecl internal_4ff3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x260], eax
        ret 4
        UNREACHABLE_TRAP(0x4ff3b0)
    }
}
