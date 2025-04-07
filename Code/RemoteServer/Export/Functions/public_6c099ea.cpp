#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099ea, internal_6c099ea, public_6c099ea);
extern "C" NAKED register_t __cdecl internal_6c099ea()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0a4]
        UNREACHABLE_TRAP(0x6c099ea)
    }
}
