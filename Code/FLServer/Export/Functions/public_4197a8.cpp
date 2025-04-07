#include "FLServer-PCH.h"

PROC_DECLARE(0x4197a8, internal_4197a8, public_4197a8);
extern "C" NAKED register_t __cdecl internal_4197a8()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc00]
        UNREACHABLE_TRAP(0x4197a8)
    }
}
