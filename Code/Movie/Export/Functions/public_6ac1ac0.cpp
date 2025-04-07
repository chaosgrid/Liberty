#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac1ae0 _public_6ac1ae0

PROC_DECLARE(0x6ac1ac0, internal_6ac1ac0, public_6ac1ac0);
extern "C" NAKED register_t __cdecl internal_6ac1ac0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[edi+4]
        push esi
        call dword ptr ds : [public_6ada078]
        cmp dword ptr ds : [esi], 0
        jne public_6ac1ae0
        push edi
        call public_6acf3d0
        add esp, 4
        xor eax, eax
        public_6ac1ae0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1ac0)
    }
}

#undef public_6ac1ae0
