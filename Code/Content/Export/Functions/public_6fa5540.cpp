#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5540);

#define public_6fa5553 _public_6fa5553
#define public_6fa5575 _public_6fa5575

PROC_DECLARE(0x6fa5540, internal_6fa5540, public_6fa5540);
extern "C" NAKED register_t __cdecl internal_6fa5540()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6fa5575
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6fa5553 : nop
        push esi
        push edi
        call public_6fa4a60
        add esi, 0xF0
        add esp, 8
        add edi, 0xF0
        cmp esi, ebx
        jne public_6fa5553
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6fa5575 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa5540)
    }
}

#undef public_6fa5553
#undef public_6fa5575
