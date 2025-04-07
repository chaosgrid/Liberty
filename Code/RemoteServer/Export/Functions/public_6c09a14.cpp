#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a14, internal_6c09a14, public_6c09a14);
extern "C" NAKED register_t __cdecl internal_6c09a14()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0c0]
        UNREACHABLE_TRAP(0x6c09a14)
    }
}
