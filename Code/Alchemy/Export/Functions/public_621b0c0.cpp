#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b0c0);

#define public_621b0ca _public_621b0ca
#define public_621b0cc _public_621b0cc
#define public_621b0e0 _public_621b0e0

PROC_DECLARE(0x621b0c0, internal_621b0c0, public_621b0c0);
extern "C" NAKED register_t __cdecl internal_621b0c0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_621b0ca
        lea esi, ds:[ecx+4]
        jmp public_621b0cc
        public_621b0ca : nop
        xor esi, esi
        public_621b0cc : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_621b0e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_621b0e0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621b0c0)
    }
}

#undef public_621b0ca
#undef public_621b0cc
#undef public_621b0e0
