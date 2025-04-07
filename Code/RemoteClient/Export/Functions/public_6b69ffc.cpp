#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ffc, internal_6b69ffc, public_6b69ffc);
extern "C" NAKED register_t __cdecl internal_6b69ffc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b07c]
        UNREACHABLE_TRAP(0x6b69ffc)
    }
}
