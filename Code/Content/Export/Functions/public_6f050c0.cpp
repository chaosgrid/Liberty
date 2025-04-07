#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f050c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f050c0, internal_6f050c0, public_6f050c0);
extern "C" NAKED register_t __cdecl internal_6f050c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd05d8]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6fd05d8], eax
        mov dword ptr ds : [public_6fd05dc], eax
        mov dword ptr ds : [public_6fd05e0], eax
        ret 
        UNREACHABLE_TRAP(0x6f050c0)
    }
}
