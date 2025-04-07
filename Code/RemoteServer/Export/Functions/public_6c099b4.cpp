#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099b4, internal_6c099b4, public_6c099b4);
extern "C" NAKED register_t __cdecl internal_6c099b4()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b080]
        UNREACHABLE_TRAP(0x6c099b4)
    }
}
