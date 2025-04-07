#include "FLServer-PCH.h"

PROC_DECLARE(0x4197ba, internal_4197ba, public_4197ba);
extern "C" NAKED register_t __cdecl internal_4197ba()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbf4]
        UNREACHABLE_TRAP(0x4197ba)
    }
}
