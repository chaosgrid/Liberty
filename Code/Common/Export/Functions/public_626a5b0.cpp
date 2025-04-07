#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);

#define public_626a5c3 _public_626a5c3
#define public_626a5d5 _public_626a5d5

PROC_DECLARE(0x626a5b0, internal_626a5b0, public_626a5b0);
extern "C" NAKED register_t __cdecl internal_626a5b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_626a5d5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_626a5c3 : nop
        push ebx
        push esi
        call public_626c1e0
        add esp, 8
        add esi, 0x20
        dec edi
        jne public_626a5c3
        pop esi
        pop ebx
        public_626a5d5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x626a5b0)
    }
}

#undef public_626a5c3
#undef public_626a5d5
