#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b0c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621b096 _public_621b096
#define public_621b0bc _public_621b0bc

PROC_DECLARE(0x621b080, internal_621b080, public_621b080);
extern "C" NAKED register_t __cdecl internal_621b080()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_621b096
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_621b096 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_621b0bc
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_621b0c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621b0bc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621b080)
    }
}

#undef public_621b096
#undef public_621b0bc
