#include "FLServer-PCH.h"

PROC_DECLARE(0x418d26, internal_418d26, public_418d26);
extern "C" NAKED register_t __cdecl internal_418d26()
{
    __asm
    {
        jmp dword ptr ds : [public_41b56c]
        UNREACHABLE_TRAP(0x418d26)
    }
}
