#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fde, internal_6b69fde, public_6b69fde);
extern "C" NAKED register_t __cdecl internal_6b69fde()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b004]
        UNREACHABLE_TRAP(0x6b69fde)
    }
}
