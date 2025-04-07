#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0997e, internal_6c0997e, public_6c0997e);
extern "C" NAKED register_t __cdecl internal_6c0997e()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b05c]
        UNREACHABLE_TRAP(0x6c0997e)
    }
}
