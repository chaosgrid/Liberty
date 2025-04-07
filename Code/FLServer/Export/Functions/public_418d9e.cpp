#include "FLServer-PCH.h"

PROC_DECLARE(0x418d9e, internal_418d9e, public_418d9e);
extern "C" NAKED register_t __cdecl internal_418d9e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5bc]
        UNREACHABLE_TRAP(0x418d9e)
    }
}
