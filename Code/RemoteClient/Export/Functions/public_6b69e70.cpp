#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e70, internal_6b69e70, public_6b69e70);
extern "C" NAKED register_t __cdecl internal_6b69e70()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b264]
        UNREACHABLE_TRAP(0x6b69e70)
    }
}
