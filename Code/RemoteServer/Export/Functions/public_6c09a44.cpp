#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a44, internal_6c09a44, public_6c09a44);
extern "C" NAKED register_t __cdecl internal_6c09a44()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0e0]
        UNREACHABLE_TRAP(0x6c09a44)
    }
}
