#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542d20);
CLANG_FORWARD_PROC_SYMBOL(public_542d40);

#define public_542d39 _public_542d39

PROC_DECLARE(0x542d20, internal_542d20, public_542d20);
extern "C" NAKED register_t __cdecl internal_542d20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_542d40
        test byte ptr ss : [esp+8], 1
        je public_542d39
        push esi
        call dword ptr ds : [public_5c69b0]
        add esp, 4
        public_542d39 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x542d20)
    }
}

#undef public_542d39
