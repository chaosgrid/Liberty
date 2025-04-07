#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f3c, internal_6b69f3c, public_6b69f3c);
extern "C" NAKED register_t __cdecl internal_6b69f3c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b318]
        UNREACHABLE_TRAP(0x6b69f3c)
    }
}
