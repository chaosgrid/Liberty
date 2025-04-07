#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d99950);

#define public_6d99972 _public_6d99972
#define public_6d99987 _public_6d99987

PROC_DECLARE(0x6d99950, internal_6d99950, public_6d99950);
extern "C" NAKED register_t __cdecl internal_6d99950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x28], eax
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d99972
        push eax
        call dword ptr ds : [public_6db31c0]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6d99972 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d99987
        push eax
        call dword ptr ds : [public_6db3208]
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        public_6d99987 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d99950)
    }
}

#undef public_6d99972
#undef public_6d99987
