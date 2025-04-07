#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f78, internal_6b69f78, public_6b69f78);
extern "C" NAKED register_t __cdecl internal_6b69f78()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b33c]
        UNREACHABLE_TRAP(0x6b69f78)
    }
}
