#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c78a0);

#define public_4c78a8 _public_4c78a8
#define public_4c78b4 _public_4c78b4
#define public_4c78b7 _public_4c78b7
#define public_4c78c5 _public_4c78c5

PROC_DECLARE(0x4c78a0, internal_4c78a0, public_4c78a0);
extern "C" NAKED register_t __cdecl internal_4c78a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        public_4c78a8 : nop
        test esi, esi
        jne public_4c78b4
        mov esi, dword ptr ds : [public_673518]
        jmp public_4c78b7
        public_4c78b4 : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c78b7 : nop
        test esi, esi
        je public_4c78c5
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+8]
        jmp public_4c78a8
        public_4c78c5 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c78a0)
    }
}

#undef public_4c78a8
#undef public_4c78b4
#undef public_4c78b7
#undef public_4c78c5
