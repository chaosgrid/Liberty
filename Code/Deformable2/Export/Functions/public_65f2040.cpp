#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3fd0);

#define public_65f205c _public_65f205c

PROC_DECLARE(0x65f2040, internal_65f2040, public_65f2040);
extern "C" NAKED register_t __cdecl internal_65f2040()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f205c
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        call public_65f3fd0
        xor eax, eax
        ret 0x10
        public_65f205c : nop
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x65f2040)
    }
}

#undef public_65f205c
