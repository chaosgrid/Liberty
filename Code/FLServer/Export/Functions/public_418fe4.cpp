#include "FLServer-PCH.h"

PROC_DECLARE(0x418fe4, internal_418fe4, public_418fe4);
extern "C" NAKED register_t __cdecl internal_418fe4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b748]
        UNREACHABLE_TRAP(0x418fe4)
    }
}
