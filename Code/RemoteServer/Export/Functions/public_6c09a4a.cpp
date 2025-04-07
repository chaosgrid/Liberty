#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a4a, internal_6c09a4a, public_6c09a4a);
extern "C" NAKED register_t __cdecl internal_6c09a4a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0e4]
        UNREACHABLE_TRAP(0x6c09a4a)
    }
}
