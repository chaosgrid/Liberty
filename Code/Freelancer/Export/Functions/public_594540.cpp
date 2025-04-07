#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_594540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_594550 _public_594550
#define public_594572 _public_594572

PROC_DECLARE(0x594540, internal_594540, public_594540);
extern "C" NAKED register_t __cdecl internal_594540()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_594572
        mov edi, edi
        public_594550 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_5b7e1d
        add esp, 4
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        call public_46dfb0
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [edi+4]
        jne public_594550
        public_594572 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x594540)
    }
}

#undef public_594550
#undef public_594572
