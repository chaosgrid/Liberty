#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7950);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a30);

#define public_51eac6 _public_51eac6
#define public_51eac8 _public_51eac8
#define public_51ead6 _public_51ead6

PROC_DECLARE(0x51eaa0, internal_51eaa0, public_51eaa0);
extern "C" NAKED register_t __cdecl internal_51eaa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c7950
        push 0
        call public_4c7a30
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 4
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        pop esi
        je public_51eac6
        add eax, 8
        jmp public_51eac8
        public_51eac6 : nop
        xor eax, eax
        public_51eac8 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_51ead6
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c62a8]
        public_51ead6 : nop
        ret 4
        UNREACHABLE_TRAP(0x51eaa0)
    }
}

#undef public_51eac6
#undef public_51eac8
#undef public_51ead6
