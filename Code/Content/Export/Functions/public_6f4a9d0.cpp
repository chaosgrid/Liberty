#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f4a9d0, internal_6f4a9d0, public_6f4a9d0);
extern "C" NAKED register_t __cdecl internal_6f4a9d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0c3c]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6fd0c3c], eax
        mov dword ptr ds : [public_6fd0c40], eax
        mov dword ptr ds : [public_6fd0c44], eax
        ret 
        UNREACHABLE_TRAP(0x6f4a9d0)
    }
}
