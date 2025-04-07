#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fc6, internal_6b69fc6, public_6b69fc6);
extern "C" NAKED register_t __cdecl internal_6b69fc6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b070]
        UNREACHABLE_TRAP(0x6b69fc6)
    }
}
