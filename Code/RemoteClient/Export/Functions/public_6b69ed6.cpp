#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ed6, internal_6b69ed6, public_6b69ed6);
extern "C" NAKED register_t __cdecl internal_6b69ed6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b220]
        UNREACHABLE_TRAP(0x6b69ed6)
    }
}
