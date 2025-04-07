#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_40dfa0);

#define public_40d803 _public_40d803
#define public_40d81f _public_40d81f

PROC_DECLARE(0x40d7f0, internal_40d7f0, public_40d7f0);
extern "C" NAKED register_t __cdecl internal_40d7f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_40d81f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_40d803 : nop
        push esi
        push edi
        call public_40dfa0
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_40d803
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_40d81f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x40d7f0)
    }
}

#undef public_40d803
#undef public_40d81f
