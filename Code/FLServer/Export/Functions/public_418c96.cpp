#include "FLServer-PCH.h"

PROC_DECLARE(0x418c96, internal_418c96, public_418c96);
extern "C" NAKED register_t __cdecl internal_418c96()
{
    __asm
    {
        jmp dword ptr ds : [public_41b508]
        UNREACHABLE_TRAP(0x418c96)
    }
}
