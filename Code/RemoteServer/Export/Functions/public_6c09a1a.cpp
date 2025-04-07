#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a1a, internal_6c09a1a, public_6c09a1a);
extern "C" NAKED register_t __cdecl internal_6c09a1a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0c4]
        UNREACHABLE_TRAP(0x6c09a1a)
    }
}
