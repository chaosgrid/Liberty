#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ad00, internal_623ad00, public_623ad00);
extern "C" NAKED register_t __cdecl internal_623ad00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x623ad00)
    }
}
