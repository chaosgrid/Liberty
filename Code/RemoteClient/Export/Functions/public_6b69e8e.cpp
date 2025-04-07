#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e8e, internal_6b69e8e, public_6b69e8e);
extern "C" NAKED register_t __cdecl internal_6b69e8e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b250]
        UNREACHABLE_TRAP(0x6b69e8e)
    }
}
