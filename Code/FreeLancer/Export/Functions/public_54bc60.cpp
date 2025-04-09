#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_54bc60);

PROC_DECLARE(0x54bc60, internal_54bc60, public_54bc60);
extern "C" NAKED register_t __cdecl internal_54bc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4c4910
        push 0
        call public_4c4a10
        add esp, 8
        mov dword ptr ds : [public_679778], 4
        ret 
        UNREACHABLE_TRAP(0x54bc60)
    }
}
