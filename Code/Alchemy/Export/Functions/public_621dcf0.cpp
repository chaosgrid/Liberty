#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621dcff _public_621dcff
#define public_621dd18 _public_621dd18

PROC_DECLARE(0x621dcf0, internal_621dcf0, public_621dcf0);
extern "C" NAKED register_t __cdecl internal_621dcf0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_621dcff
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_621dcff : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_621dd18
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621dd18 : nop
        ret 4
        UNREACHABLE_TRAP(0x621dcf0)
    }
}

#undef public_621dcff
#undef public_621dd18
