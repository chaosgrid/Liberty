#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b750);

PROC_DECLARE(0x6d1b750, internal_6d1b750, public_6d1b750);
/* CHUNK of public_6d1be80 */
extern "C" NAKED register_t __cdecl internal_6d1b750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [public_6d64c54]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d1b750)
    }
}
