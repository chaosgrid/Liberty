#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099e4, internal_6c099e4, public_6c099e4);
extern "C" NAKED register_t __cdecl internal_6c099e4()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0a0]
        UNREACHABLE_TRAP(0x6c099e4)
    }
}
