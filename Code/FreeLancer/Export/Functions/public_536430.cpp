#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536450);

#define public_536449 _public_536449

PROC_DECLARE(0x536430, internal_536430, public_536430);
extern "C" NAKED register_t __cdecl internal_536430()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_536450
        test byte ptr ss : [esp+8], 1
        je public_536449
        push esi
        call dword ptr ds : [public_5c69b0]
        add esp, 4
        public_536449 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x536430)
    }
}

#undef public_536449
