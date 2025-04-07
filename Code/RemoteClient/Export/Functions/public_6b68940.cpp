#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68940, internal_6b68940, public_6b68940);
extern "C" NAKED register_t __cdecl internal_6b68940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea90]
        mov dword ptr ds : [public_6b745ec], eax
        ret 
        UNREACHABLE_TRAP(0x6b68940)
    }
}
