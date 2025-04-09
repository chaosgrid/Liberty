#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43b220);

PROC_DECLARE(0x4378b0, internal_4378b0, public_4378b0);
extern "C" NAKED register_t __cdecl internal_4378b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_668708
        call public_43b220
        ret 8
        UNREACHABLE_TRAP(0x4378b0)
    }
}
