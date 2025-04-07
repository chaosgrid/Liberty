#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae650);
CLANG_FORWARD_PROC_SYMBOL(public_5af3b0);

#define public_5ae663 _public_5ae663
#define public_5ae678 _public_5ae678

PROC_DECLARE(0x5ae650, internal_5ae650, public_5ae650);
extern "C" NAKED register_t __cdecl internal_5ae650()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_5ae678
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_5ae663 : nop
        push ebx
        push esi
        call public_5af3b0
        add esp, 8
        add esi, 0x9C
        dec edi
        jne public_5ae663
        pop esi
        pop ebx
        public_5ae678 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x5ae650)
    }
}

#undef public_5ae663
#undef public_5ae678
