#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c490);
CLANG_FORWARD_PROC_SYMBOL(public_52c7d0);

#define public_52c4a3 _public_52c4a3
#define public_52c4bf _public_52c4bf

PROC_DECLARE(0x52c490, internal_52c490, public_52c490);
extern "C" NAKED register_t __cdecl internal_52c490()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_52c4bf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_52c4a3 : nop
        push esi
        push edi
        call public_52c7d0
        add esi, 0x34
        add esp, 8
        add edi, 0x34
        cmp esi, ebx
        jne public_52c4a3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_52c4bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x52c490)
    }
}

#undef public_52c4a3
#undef public_52c4bf
