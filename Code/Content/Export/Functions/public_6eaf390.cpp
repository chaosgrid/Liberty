#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaf390);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1830);

#define public_6eaf3a3 _public_6eaf3a3
#define public_6eaf3bf _public_6eaf3bf

PROC_DECLARE(0x6eaf390, internal_6eaf390, public_6eaf390);
extern "C" NAKED register_t __cdecl internal_6eaf390()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6eaf3bf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6eaf3a3 : nop
        push esi
        push edi
        call public_6eb1830
        add esi, 0x28
        add esp, 8
        add edi, 0x28
        cmp esi, ebx
        jne public_6eaf3a3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6eaf3bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eaf390)
    }
}

#undef public_6eaf3a3
#undef public_6eaf3bf
