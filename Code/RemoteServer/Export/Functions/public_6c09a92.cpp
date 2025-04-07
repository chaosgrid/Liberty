#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a92, internal_6c09a92, public_6c09a92);
extern "C" NAKED register_t __cdecl internal_6c09a92()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b000]
        UNREACHABLE_TRAP(0x6c09a92)
    }
}
