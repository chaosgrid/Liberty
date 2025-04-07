#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631f8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x631f8f0, internal_631f8f0, public_631f8f0);
extern "C" NAKED register_t __cdecl internal_631f8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018e0]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_64018e0], eax
        mov dword ptr ds : [public_64018e4], eax
        mov dword ptr ds : [public_64018e8], eax
        ret 
        UNREACHABLE_TRAP(0x631f8f0)
    }
}
