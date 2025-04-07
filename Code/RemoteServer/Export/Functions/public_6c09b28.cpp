#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b28, internal_6c09b28, public_6c09b28);
extern "C" NAKED register_t __cdecl internal_6c09b28()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b18c]
        UNREACHABLE_TRAP(0x6c09b28)
    }
}
