#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4f00);

#define public_65f2107 _public_65f2107

PROC_DECLARE(0x65f20f0, internal_65f20f0, public_65f20f0);
extern "C" NAKED register_t __cdecl internal_65f20f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f2107
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_65f4f00
        xor eax, eax
        ret 0xC
        public_65f2107 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f20f0)
    }
}

#undef public_65f2107
