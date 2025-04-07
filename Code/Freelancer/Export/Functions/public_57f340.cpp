#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f340);
CLANG_FORWARD_PROC_SYMBOL(public_57fc60);

#define public_57f353 _public_57f353
#define public_57f365 _public_57f365

PROC_DECLARE(0x57f340, internal_57f340, public_57f340);
extern "C" NAKED register_t __cdecl internal_57f340()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_57f365
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_57f353 : nop
        push ebx
        push esi
        call public_57fc60
        add esp, 8
        add esi, 0xC
        dec edi
        jne public_57f353
        pop esi
        pop ebx
        public_57f365 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x57f340)
    }
}

#undef public_57f353
#undef public_57f365
