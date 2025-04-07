#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e3a, internal_6b69e3a, public_6b69e3a);
extern "C" NAKED register_t __cdecl internal_6b69e3a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b288]
        UNREACHABLE_TRAP(0x6b69e3a)
    }
}
