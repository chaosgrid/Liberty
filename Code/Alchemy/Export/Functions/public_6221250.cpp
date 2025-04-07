#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6221250);

#define public_622125e _public_622125e
#define public_622126c _public_622126c

PROC_DECLARE(0x6221250, internal_6221250, public_6221250);
extern "C" NAKED register_t __cdecl internal_6221250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_622126c
        public_622125e : nop
        mov ecx, esi
        call public_621f5f0
        add esi, 0x10
        cmp esi, edi
        jne public_622125e
        public_622126c : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6221250)
    }
}

#undef public_622125e
#undef public_622126c
