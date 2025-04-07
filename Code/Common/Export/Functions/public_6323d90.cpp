#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323d90);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);

#define public_6323da3 _public_6323da3
#define public_6323db8 _public_6323db8

PROC_DECLARE(0x6323d90, internal_6323d90, public_6323d90);
extern "C" NAKED register_t __cdecl internal_6323d90()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6323db8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6323da3 : nop
        push ebx
        push esi
        call public_63240a0
        add esp, 8
        add esi, 0x90
        dec edi
        jne public_6323da3
        pop esi
        pop ebx
        public_6323db8 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6323d90)
    }
}

#undef public_6323da3
#undef public_6323db8
