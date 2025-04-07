#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a3ec, internal_6b6a3ec, public_6b6a3ec);
extern "C" NAKED register_t __cdecl internal_6b6a3ec()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1c8]
        UNREACHABLE_TRAP(0x6b6a3ec)
    }
}
