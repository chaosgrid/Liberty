#include "FLServer-PCH.h"

PROC_DECLARE(0x4197a2, internal_4197a2, public_4197a2);
extern "C" NAKED register_t __cdecl internal_4197a2()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc04]
        UNREACHABLE_TRAP(0x4197a2)
    }
}
