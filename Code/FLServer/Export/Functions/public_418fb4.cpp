#include "FLServer-PCH.h"

PROC_DECLARE(0x418fb4, internal_418fb4, public_418fb4);
extern "C" NAKED register_t __cdecl internal_418fb4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b728]
        UNREACHABLE_TRAP(0x418fb4)
    }
}
