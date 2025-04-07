#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a9e, internal_6c09a9e, public_6c09a9e);
extern "C" NAKED register_t __cdecl internal_6c09a9e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b028]
        UNREACHABLE_TRAP(0x6c09a9e)
    }
}
