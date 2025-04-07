#include "FLServer-PCH.h"

PROC_DECLARE(0x418b64, internal_418b64, public_418b64);
extern "C" NAKED register_t __cdecl internal_418b64()
{
    __asm
    {
        jmp dword ptr ds : [public_41b438]
        UNREACHABLE_TRAP(0x418b64)
    }
}
