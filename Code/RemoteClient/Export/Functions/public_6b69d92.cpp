#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d92, internal_6b69d92, public_6b69d92);
extern "C" NAKED register_t __cdecl internal_6b69d92()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2f8]
        UNREACHABLE_TRAP(0x6b69d92)
    }
}
