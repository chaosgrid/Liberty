#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0ec, internal_6b6a0ec, public_6b6a0ec);
extern "C" NAKED register_t __cdecl internal_6b6a0ec()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b148]
        UNREACHABLE_TRAP(0x6b6a0ec)
    }
}
