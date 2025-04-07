#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a08, internal_6c09a08, public_6c09a08);
extern "C" NAKED register_t __cdecl internal_6c09a08()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0b8]
        UNREACHABLE_TRAP(0x6c09a08)
    }
}
