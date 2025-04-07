#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b1a0);

#define public_6f7b1b3 _public_6f7b1b3
#define public_6f7b1c5 _public_6f7b1c5

PROC_DECLARE(0x6f7b1a0, internal_6f7b1a0, public_6f7b1a0);
extern "C" NAKED register_t __cdecl internal_6f7b1a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f7b1c5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f7b1b3 : nop
        push ebx
        push esi
        call public_6f31000
        add esp, 8
        add esi, 0x44
        dec edi
        jne public_6f7b1b3
        pop esi
        pop ebx
        public_6f7b1c5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f7b1a0)
    }
}

#undef public_6f7b1b3
#undef public_6f7b1c5
