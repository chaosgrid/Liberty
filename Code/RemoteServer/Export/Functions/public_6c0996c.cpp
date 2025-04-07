#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0996c, internal_6c0996c, public_6c0996c);
extern "C" NAKED register_t __cdecl internal_6c0996c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b050]
        UNREACHABLE_TRAP(0x6c0996c)
    }
}
