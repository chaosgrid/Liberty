#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fcc, internal_6b69fcc, public_6b69fcc);
extern "C" NAKED register_t __cdecl internal_6b69fcc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b03c]
        UNREACHABLE_TRAP(0x6b69fcc)
    }
}
