#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67c40, internal_6b67c40, public_6b67c40);
extern "C" NAKED register_t __cdecl internal_6b67c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea68]
        mov dword ptr ds : [public_6b745c4], eax
        ret 
        UNREACHABLE_TRAP(0x6b67c40)
    }
}
