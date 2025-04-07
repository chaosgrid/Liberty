#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0999c, internal_6c0999c, public_6c0999c);
extern "C" NAKED register_t __cdecl internal_6c0999c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b070]
        UNREACHABLE_TRAP(0x6c0999c)
    }
}
