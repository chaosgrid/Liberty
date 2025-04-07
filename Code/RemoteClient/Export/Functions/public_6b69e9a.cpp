#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e9a, internal_6b69e9a, public_6b69e9a);
extern "C" NAKED register_t __cdecl internal_6b69e9a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b248]
        UNREACHABLE_TRAP(0x6b69e9a)
    }
}
