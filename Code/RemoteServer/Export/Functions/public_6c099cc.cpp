#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c099cc, internal_6c099cc, public_6c099cc);
extern "C" NAKED register_t __cdecl internal_6c099cc()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b010]
        UNREACHABLE_TRAP(0x6c099cc)
    }
}
