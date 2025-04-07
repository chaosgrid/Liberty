#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3640);
CLANG_FORWARD_PROC_SYMBOL(public_65f3ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f1ef6 _public_65f1ef6

PROC_DECLARE(0x65f1ed0, internal_65f1ed0, public_65f1ed0);
extern "C" NAKED register_t __cdecl internal_65f1ed0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_65f1ef6
        mov ecx, esi
        call public_65f3ed0
        mov ecx, esi
        call public_65f3640
        push esi
        call public_6600bb0
        add esp, 4
        xor eax, eax
        pop esi
        ret 8
        public_65f1ef6 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65f1ed0)
    }
}

#undef public_65f1ef6
