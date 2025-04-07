#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f59d0);

#define public_65f21ec _public_65f21ec

PROC_DECLARE(0x65f21d0, internal_65f21d0, public_65f21d0);
extern "C" NAKED register_t __cdecl internal_65f21d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_65f21ec
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        call public_65f59d0
        xor eax, eax
        public_65f21ec : nop
        ret 0x10
        UNREACHABLE_TRAP(0x65f21d0)
    }
}

#undef public_65f21ec
