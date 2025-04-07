#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b675e0, internal_6b675e0, public_6b675e0);
extern "C" NAKED register_t __cdecl internal_6b675e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea5c]
        mov dword ptr ds : [public_6b745b4], eax
        ret 
        UNREACHABLE_TRAP(0x6b675e0)
    }
}
