#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099de, internal_6c099de, public_6c099de);
extern "C" NAKED register_t __cdecl internal_6c099de()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b09c]
        UNREACHABLE_TRAP(0x6c099de)
    }
}
