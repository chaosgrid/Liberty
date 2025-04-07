#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4c5660, internal_4c5660, public_4c5660);
extern "C" NAKED register_t __cdecl internal_4c5660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6728cc]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6728cc], eax
        mov dword ptr ds : [public_6728d0], eax
        mov dword ptr ds : [public_6728d4], eax
        ret 
        UNREACHABLE_TRAP(0x4c5660)
    }
}
