#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a26, internal_6c09a26, public_6c09a26);
extern "C" NAKED register_t __cdecl internal_6c09a26()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0cc]
        UNREACHABLE_TRAP(0x6c09a26)
    }
}
