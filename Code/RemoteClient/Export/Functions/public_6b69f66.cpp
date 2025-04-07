#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f66, internal_6b69f66, public_6b69f66);
extern "C" NAKED register_t __cdecl internal_6b69f66()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b348]
        UNREACHABLE_TRAP(0x6b69f66)
    }
}
