#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f2e, internal_6c09f2e, public_6c09f2e);
extern "C" NAKED register_t __cdecl internal_6c09f2e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b140]
        UNREACHABLE_TRAP(0x6c09f2e)
    }
}
