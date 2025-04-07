#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fae, internal_6b69fae, public_6b69fae);
extern "C" NAKED register_t __cdecl internal_6b69fae()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b060]
        UNREACHABLE_TRAP(0x6b69fae)
    }
}
