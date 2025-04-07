#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099d2, internal_6c099d2, public_6c099d2);
extern "C" NAKED register_t __cdecl internal_6c099d2()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b094]
        UNREACHABLE_TRAP(0x6c099d2)
    }
}
