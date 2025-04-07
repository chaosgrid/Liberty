#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04c50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f04c50, internal_6f04c50, public_6f04c50);
extern "C" NAKED register_t __cdecl internal_6f04c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd05f0]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6fd05f0], eax
        mov dword ptr ds : [public_6fd05f4], eax
        mov dword ptr ds : [public_6fd05f8], eax
        ret 
        UNREACHABLE_TRAP(0x6f04c50)
    }
}
