#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae610);
CLANG_FORWARD_PROC_SYMBOL(public_5af3b0);

#define public_5ae623 _public_5ae623
#define public_5ae645 _public_5ae645

PROC_DECLARE(0x5ae610, internal_5ae610, public_5ae610);
extern "C" NAKED register_t __cdecl internal_5ae610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_5ae645
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_5ae623 : nop
        push esi
        push edi
        call public_5af3b0
        add esi, 0x9C
        add esp, 8
        add edi, 0x9C
        cmp esi, ebx
        jne public_5ae623
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_5ae645 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5ae610)
    }
}

#undef public_5ae623
#undef public_5ae645
