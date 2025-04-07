#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68920, internal_6b68920, public_6b68920);
extern "C" NAKED register_t __cdecl internal_6b68920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea8c]
        mov dword ptr ds : [public_6b745f0], eax
        ret 
        UNREACHABLE_TRAP(0x6b68920)
    }
}
