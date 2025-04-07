#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_621c51f _public_621c51f
#define public_621c538 _public_621c538

PROC_DECLARE(0x621c510, internal_621c510, public_621c510);
extern "C" NAKED register_t __cdecl internal_621c510()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_621c51f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_621c51f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_621c538
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621c538 : nop
        ret 4
        UNREACHABLE_TRAP(0x621c510)
    }
}

#undef public_621c51f
#undef public_621c538
