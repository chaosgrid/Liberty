#include "FLServer-PCH.h"

PROC_DECLARE(0x4194ba, internal_4194ba, public_4194ba);
extern "C" NAKED register_t __cdecl internal_4194ba()
{
    __asm
    {
        jmp dword ptr ds : [public_41b950]
        UNREACHABLE_TRAP(0x4194ba)
    }
}
