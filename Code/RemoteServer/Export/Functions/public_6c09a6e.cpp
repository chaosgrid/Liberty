#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a6e, internal_6c09a6e, public_6c09a6e);
extern "C" NAKED register_t __cdecl internal_6c09a6e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b08c]
        UNREACHABLE_TRAP(0x6c09a6e)
    }
}
