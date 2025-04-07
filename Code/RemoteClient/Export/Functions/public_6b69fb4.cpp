#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fb4, internal_6b69fb4, public_6b69fb4);
extern "C" NAKED register_t __cdecl internal_6b69fb4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b064]
        UNREACHABLE_TRAP(0x6b69fb4)
    }
}
