#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b60, internal_6c09b60, public_6c09b60);
extern "C" NAKED register_t __cdecl internal_6c09b60()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b224]
        UNREACHABLE_TRAP(0x6c09b60)
    }
}
