#include "FLServer-PCH.h"

PROC_DECLARE(0x418f96, internal_418f96, public_418f96);
extern "C" NAKED register_t __cdecl internal_418f96()
{
    __asm
    {
        jmp dword ptr ds : [public_41b714]
        UNREACHABLE_TRAP(0x418f96)
    }
}
