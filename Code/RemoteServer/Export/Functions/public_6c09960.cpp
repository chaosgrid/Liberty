#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09960, internal_6c09960, public_6c09960);
extern "C" NAKED register_t __cdecl internal_6c09960()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b048]
        UNREACHABLE_TRAP(0x6c09960)
    }
}
