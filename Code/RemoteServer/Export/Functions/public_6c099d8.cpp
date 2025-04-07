#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099d8, internal_6c099d8, public_6c099d8);
extern "C" NAKED register_t __cdecl internal_6c099d8()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b098]
        UNREACHABLE_TRAP(0x6c099d8)
    }
}
