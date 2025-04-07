#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a122, internal_6b6a122, public_6b6a122);
extern "C" NAKED register_t __cdecl internal_6b6a122()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b16c]
        UNREACHABLE_TRAP(0x6b6a122)
    }
}
