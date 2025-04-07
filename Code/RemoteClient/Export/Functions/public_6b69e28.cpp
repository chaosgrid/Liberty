#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e28, internal_6b69e28, public_6b69e28);
extern "C" NAKED register_t __cdecl internal_6b69e28()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b294]
        UNREACHABLE_TRAP(0x6b69e28)
    }
}
