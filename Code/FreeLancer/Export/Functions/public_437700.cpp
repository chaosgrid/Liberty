#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ace0);

PROC_DECLARE(0x437700, internal_437700, public_437700);
extern "C" NAKED register_t __cdecl internal_437700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_668708
        call public_43ace0
        ret 8
        UNREACHABLE_TRAP(0x437700)
    }
}
