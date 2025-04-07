#include "FLServer-PCH.h"

PROC_DECLARE(0x418f5a, internal_418f5a, public_418f5a);
extern "C" NAKED register_t __cdecl internal_418f5a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6ec]
        UNREACHABLE_TRAP(0x418f5a)
    }
}
