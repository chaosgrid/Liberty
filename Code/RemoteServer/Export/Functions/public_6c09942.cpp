#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09942, internal_6c09942, public_6c09942);
extern "C" NAKED register_t __cdecl internal_6c09942()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b034]
        UNREACHABLE_TRAP(0x6c09942)
    }
}
