#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099a2, internal_6c099a2, public_6c099a2);
extern "C" NAKED register_t __cdecl internal_6c099a2()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b074]
        UNREACHABLE_TRAP(0x6c099a2)
    }
}
