#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543110);
CLANG_FORWARD_PROC_SYMBOL(public_543130);

#define public_543129 _public_543129

PROC_DECLARE(0x543110, internal_543110, public_543110);
extern "C" NAKED register_t __cdecl internal_543110()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_543130
        test byte ptr ss : [esp+8], 1
        je public_543129
        push esi
        call dword ptr ds : [public_5c69b0]
        add esp, 4
        public_543129 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x543110)
    }
}

#undef public_543129
