#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b46, internal_6c09b46, public_6c09b46);
extern "C" NAKED register_t __cdecl internal_6c09b46()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1a0]
        UNREACHABLE_TRAP(0x6c09b46)
    }
}
