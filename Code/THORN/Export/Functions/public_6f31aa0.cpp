#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33df0);

#define public_6f31ab3 _public_6f31ab3
#define public_6f31ac5 _public_6f31ac5

PROC_DECLARE(0x6f31aa0, internal_6f31aa0, public_6f31aa0);
extern "C" NAKED register_t __cdecl internal_6f31aa0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f31ac5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f31ab3 : nop
        push ebx
        push esi
        call public_6f33df0
        add esp, 8
        add esi, 0x10
        dec edi
        jne public_6f31ab3
        pop esi
        pop ebx
        public_6f31ac5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f31aa0)
    }
}

#undef public_6f31ab3
#undef public_6f31ac5
