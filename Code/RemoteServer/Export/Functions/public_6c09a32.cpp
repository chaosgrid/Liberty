#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a32, internal_6c09a32, public_6c09a32);
extern "C" NAKED register_t __cdecl internal_6c09a32()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0d4]
        UNREACHABLE_TRAP(0x6c09a32)
    }
}
