#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c81a0);

#define public_4c81b0 _public_4c81b0
#define public_4c81b2 _public_4c81b2
#define public_4c81c0 _public_4c81c0

PROC_DECLARE(0x4c81a0, internal_4c81a0, public_4c81a0);
extern "C" NAKED register_t __cdecl internal_4c81a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x28
        test eax, eax
        je public_4c81b0
        add eax, 8
        jmp public_4c81b2
        public_4c81b0 : nop
        xor eax, eax
        public_4c81b2 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_4c81c0
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c62a8]
        public_4c81c0 : nop
        ret 4
        UNREACHABLE_TRAP(0x4c81a0)
    }
}

#undef public_4c81b0
#undef public_4c81b2
#undef public_4c81c0
