#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4adde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4adde0, internal_4adde0, public_4adde0);
extern "C" NAKED register_t __cdecl internal_4adde0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6721c4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6721c4], eax
        mov dword ptr ds : [public_6721c8], eax
        mov dword ptr ds : [public_6721cc], eax
        ret 
        UNREACHABLE_TRAP(0x4adde0)
    }
}
