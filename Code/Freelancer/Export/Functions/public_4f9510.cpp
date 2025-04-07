#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f9450);

#define public_4f952b _public_4f952b

PROC_DECLARE(0x4f9510, internal_4f9510, public_4f9510);
extern "C" NAKED register_t __cdecl internal_4f9510()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f9450
        test byte ptr ss : [esp+8], 1
        je public_4f952b
        push esi
        mov ecx, offset public_674ccc
        call dword ptr ds : [public_5c60c4]
        public_4f952b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f9510)
    }
}

#undef public_4f952b
