#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_51f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_51f7f0 _public_51f7f0
#define public_51f801 _public_51f801

PROC_DECLARE(0x51f7d0, internal_51f7d0, public_51f7d0);
extern "C" NAKED register_t __cdecl internal_51f7d0()
{
    __asm
    {
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        mov edi, ecx
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_51f801
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_51f7f0 : nop
        push ebx
        push esi
        mov ecx, edi
        call public_51f2c0
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_51f7f0
        pop ebx
        public_51f801 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x51f7d0)
    }
}

#undef public_51f7f0
#undef public_51f801
