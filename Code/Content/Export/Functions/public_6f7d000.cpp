#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d000);

#define public_6f7d013 _public_6f7d013
#define public_6f7d025 _public_6f7d025

PROC_DECLARE(0x6f7d000, internal_6f7d000, public_6f7d000);
extern "C" NAKED register_t __cdecl internal_6f7d000()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f7d025
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f7d013 : nop
        push ebx
        push esi
        call public_6ef8060
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6f7d013
        pop esi
        pop ebx
        public_6f7d025 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f7d000)
    }
}

#undef public_6f7d013
#undef public_6f7d025
