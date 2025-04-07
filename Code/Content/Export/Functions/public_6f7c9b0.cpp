#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f300e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9b0);

#define public_6f7c9c3 _public_6f7c9c3
#define public_6f7c9d5 _public_6f7c9d5

PROC_DECLARE(0x6f7c9b0, internal_6f7c9b0, public_6f7c9b0);
extern "C" NAKED register_t __cdecl internal_6f7c9b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f7c9d5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f7c9c3 : nop
        push ebx
        push esi
        call public_6f300e0
        add esp, 8
        add esi, 0x44
        dec edi
        jne public_6f7c9c3
        pop esi
        pop ebx
        public_6f7c9d5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f7c9b0)
    }
}

#undef public_6f7c9c3
#undef public_6f7c9d5
