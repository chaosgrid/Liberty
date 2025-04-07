#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099ba, internal_6c099ba, public_6c099ba);
extern "C" NAKED register_t __cdecl internal_6c099ba()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b084]
        UNREACHABLE_TRAP(0x6c099ba)
    }
}
