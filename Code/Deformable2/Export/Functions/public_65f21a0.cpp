#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f21bb);
CLANG_FORWARD_PROC_SYMBOL(public_65f51e0);

PROC_DECLARE(0x65f21a0, internal_65f21a0, public_65f21a0);
extern "C" NAKED register_t __cdecl internal_65f21a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f21bb
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_65f21bb
        push eax
        call public_65f51e0
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x65f21a0)
    }
}
