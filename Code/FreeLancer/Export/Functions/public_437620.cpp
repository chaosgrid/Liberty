#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a5a0);

PROC_DECLARE(0x437620, internal_437620, public_437620);
extern "C" NAKED register_t __cdecl internal_437620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, offset public_668708
        call public_43a5a0
        ret 0xC
        UNREACHABLE_TRAP(0x437620)
    }
}
