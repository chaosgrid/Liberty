#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09936, internal_6c09936, public_6c09936);
extern "C" NAKED register_t __cdecl internal_6c09936()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b02c]
        UNREACHABLE_TRAP(0x6c09936)
    }
}
