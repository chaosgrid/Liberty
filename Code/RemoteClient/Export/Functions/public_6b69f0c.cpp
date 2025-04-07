#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f0c, internal_6b69f0c, public_6b69f0c);
extern "C" NAKED register_t __cdecl internal_6b69f0c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b27c]
        UNREACHABLE_TRAP(0x6b69f0c)
    }
}
