#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621acef _public_621acef
#define public_621ad08 _public_621ad08

PROC_DECLARE(0x621ace0, internal_621ace0, public_621ace0);
extern "C" NAKED register_t __cdecl internal_621ace0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_621acef
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_621acef : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_621ad08
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621ad08 : nop
        ret 4
        UNREACHABLE_TRAP(0x621ace0)
    }
}

#undef public_621acef
#undef public_621ad08
