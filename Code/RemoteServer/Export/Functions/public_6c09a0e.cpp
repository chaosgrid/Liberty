#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a0e, internal_6c09a0e, public_6c09a0e);
extern "C" NAKED register_t __cdecl internal_6c09a0e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0bc]
        UNREACHABLE_TRAP(0x6c09a0e)
    }
}
