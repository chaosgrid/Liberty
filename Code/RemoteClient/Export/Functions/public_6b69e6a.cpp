#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e6a, internal_6b69e6a, public_6b69e6a);
extern "C" NAKED register_t __cdecl internal_6b69e6a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b268]
        UNREACHABLE_TRAP(0x6b69e6a)
    }
}
