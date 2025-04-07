#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f9c, internal_6b69f9c, public_6b69f9c);
extern "C" NAKED register_t __cdecl internal_6b69f9c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b054]
        UNREACHABLE_TRAP(0x6b69f9c)
    }
}
