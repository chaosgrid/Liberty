#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5877b0);
CLANG_FORWARD_PROC_SYMBOL(public_587af0);

#define public_5877c3 _public_5877c3
#define public_5877d5 _public_5877d5

PROC_DECLARE(0x5877b0, internal_5877b0, public_5877b0);
extern "C" NAKED register_t __cdecl internal_5877b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_5877d5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_5877c3 : nop
        push ebx
        push esi
        call public_587af0
        add esp, 8
        add esi, 0x20
        dec edi
        jne public_5877c3
        pop esi
        pop ebx
        public_5877d5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x5877b0)
    }
}

#undef public_5877c3
#undef public_5877d5
