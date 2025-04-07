#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a86, internal_6c09a86, public_6c09a86);
extern "C" NAKED register_t __cdecl internal_6c09a86()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b01c]
        UNREACHABLE_TRAP(0x6c09a86)
    }
}
