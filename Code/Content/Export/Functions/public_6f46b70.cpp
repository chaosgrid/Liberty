#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f46b70, internal_6f46b70, public_6f46b70);
extern "C" NAKED register_t __cdecl internal_6f46b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0bd4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6fd0bd4], eax
        mov dword ptr ds : [public_6fd0bd8], eax
        mov dword ptr ds : [public_6fd0bdc], eax
        ret 
        UNREACHABLE_TRAP(0x6f46b70)
    }
}
