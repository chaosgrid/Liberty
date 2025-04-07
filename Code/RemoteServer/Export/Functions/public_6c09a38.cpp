#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a38, internal_6c09a38, public_6c09a38);
extern "C" NAKED register_t __cdecl internal_6c09a38()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0d8]
        UNREACHABLE_TRAP(0x6c09a38)
    }
}
