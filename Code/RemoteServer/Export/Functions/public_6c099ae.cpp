#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099ae, internal_6c099ae, public_6c099ae);
extern "C" NAKED register_t __cdecl internal_6c099ae()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b07c]
        UNREACHABLE_TRAP(0x6c099ae)
    }
}
