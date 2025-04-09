#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);

#define public_42883b _public_42883b

PROC_DECLARE(0x428820, internal_428820, public_428820);
extern "C" NAKED register_t __cdecl internal_428820()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_429140
        test byte ptr ss : [esp+8], 1
        je public_42883b
        push esi
        mov ecx, offset public_667a34
        call dword ptr ds : [public_5c60c4]
        public_42883b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x428820)
    }
}

#undef public_42883b
