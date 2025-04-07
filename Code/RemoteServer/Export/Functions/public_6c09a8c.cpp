#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a8c, internal_6c09a8c, public_6c09a8c);
extern "C" NAKED register_t __cdecl internal_6c09a8c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b00c]
        UNREACHABLE_TRAP(0x6c09a8c)
    }
}
