#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67c50, internal_6b67c50, public_6b67c50);
extern "C" NAKED register_t __cdecl internal_6b67c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea6c]
        mov dword ptr ds : [public_6b745bc], eax
        ret 
        UNREACHABLE_TRAP(0x6b67c50)
    }
}
