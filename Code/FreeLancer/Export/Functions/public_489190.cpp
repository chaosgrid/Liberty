#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489190);
CLANG_FORWARD_PROC_SYMBOL(public_489620);

#define public_4891a3 _public_4891a3
#define public_4891bf _public_4891bf

PROC_DECLARE(0x489190, internal_489190, public_489190);
extern "C" NAKED register_t __cdecl internal_489190()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_4891bf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_4891a3 : nop
        push esi
        push edi
        call public_489620
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_4891a3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_4891bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x489190)
    }
}

#undef public_4891a3
#undef public_4891bf
