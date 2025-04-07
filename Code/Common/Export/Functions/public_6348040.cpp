#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348040);

#define public_634804f _public_634804f
#define public_6348060 _public_6348060

PROC_DECLARE(0x6348040, internal_6348040, public_6348040);
extern "C" NAKED register_t __cdecl internal_6348040()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea edx, ds:[ecx+8]
        sub esi, ecx
        mov ecx, 3
        public_634804f : nop
        fld dword ptr ds : [esi+edx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 1
        je public_6348060
        mov eax, dword ptr ds : [esi+edx]
        mov dword ptr ds : [edx], eax
        public_6348060 : nop
        sub edx, 4
        dec ecx
        jne public_634804f
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348040)
    }
}

#undef public_634804f
#undef public_6348060
