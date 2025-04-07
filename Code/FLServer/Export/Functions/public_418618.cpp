#include "FLServer-PCH.h"

PROC_DECLARE(0x418618, internal_418618, public_418618);
extern "C" NAKED register_t __cdecl internal_418618()
{
    __asm
    {
        jmp dword ptr ds : [public_41b07c]
        UNREACHABLE_TRAP(0x418618)
    }
}
