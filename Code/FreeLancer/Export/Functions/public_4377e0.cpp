#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43af80);

PROC_DECLARE(0x4377e0, internal_4377e0, public_4377e0);
extern "C" NAKED register_t __cdecl internal_4377e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_668708
        call public_43af80
        ret 8
        UNREACHABLE_TRAP(0x4377e0)
    }
}
