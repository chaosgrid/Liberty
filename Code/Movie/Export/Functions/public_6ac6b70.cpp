#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac61a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6b70);

#define public_6ac6b7a _public_6ac6b7a
#define public_6ac6b8b _public_6ac6b8b
#define public_6ac6b9d _public_6ac6b9d

PROC_DECLARE(0x6ac6b70, internal_6ac6b70, public_6ac6b70);
extern "C" NAKED register_t __cdecl internal_6ac6b70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi], 0
        je public_6ac6b9d
        public_6ac6b7a : nop
        cmp dword ptr ds : [esi+8], 0x14
        jne public_6ac6b8b
        push esi
        call public_6ac61a0
        cmp dword ptr ds : [esi], 0
        jne public_6ac6b7a
        public_6ac6b8b : nop
        cmp dword ptr ds : [esi], 0
        je public_6ac6b9d
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi+8], ecx
        pop esi
        ret 4
        public_6ac6b9d : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac6b70)
    }
}

#undef public_6ac6b7a
#undef public_6ac6b8b
#undef public_6ac6b9d
