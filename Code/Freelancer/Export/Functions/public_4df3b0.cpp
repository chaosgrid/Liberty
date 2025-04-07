#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df3b0);
CLANG_FORWARD_PROC_SYMBOL(public_4df750);

#define public_4df3c3 _public_4df3c3
#define public_4df3df _public_4df3df

PROC_DECLARE(0x4df3b0, internal_4df3b0, public_4df3b0);
extern "C" NAKED register_t __cdecl internal_4df3b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_4df3df
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_4df3c3 : nop
        push esi
        push edi
        call public_4df750
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_4df3c3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_4df3df : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4df3b0)
    }
}

#undef public_4df3c3
#undef public_4df3df
