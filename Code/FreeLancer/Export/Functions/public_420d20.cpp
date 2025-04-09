#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_420d39 _public_420d39

PROC_DECLARE(0x420d20, internal_420d20, public_420d20);
extern "C" NAKED register_t __cdecl internal_420d20()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5c9694
        je public_420d39
        push esi
        call public_5b7e1d
        add esp, 4
        public_420d39 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x420d20)
    }
}

#undef public_420d39
