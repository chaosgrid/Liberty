#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a9f0);

PROC_DECLARE(0x4378d0, internal_4378d0, public_4378d0);
extern "C" NAKED register_t __cdecl internal_4378d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, offset public_668708
        call public_43a9f0
        ret 0xC
        UNREACHABLE_TRAP(0x4378d0)
    }
}
