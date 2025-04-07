#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a3e, internal_6c09a3e, public_6c09a3e);
extern "C" NAKED register_t __cdecl internal_6c09a3e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0dc]
        UNREACHABLE_TRAP(0x6c09a3e)
    }
}
