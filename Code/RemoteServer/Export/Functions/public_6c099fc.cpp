#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099fc, internal_6c099fc, public_6c099fc);
extern "C" NAKED register_t __cdecl internal_6c099fc()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0b0]
        UNREACHABLE_TRAP(0x6c099fc)
    }
}
