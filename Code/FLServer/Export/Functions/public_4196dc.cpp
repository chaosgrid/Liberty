#include "FLServer-PCH.h"

PROC_DECLARE(0x4196dc, internal_4196dc, public_4196dc);
extern "C" NAKED register_t __cdecl internal_4196dc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b190]
        UNREACHABLE_TRAP(0x4196dc)
    }
}
