#include "FLServer-PCH.h"

PROC_DECLARE(0x418f60, internal_418f60, public_418f60);
extern "C" NAKED register_t __cdecl internal_418f60()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6f0]
        UNREACHABLE_TRAP(0x418f60)
    }
}
