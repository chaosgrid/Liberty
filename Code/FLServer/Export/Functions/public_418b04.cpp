#include "FLServer-PCH.h"

PROC_DECLARE(0x418b04, internal_418b04, public_418b04);
extern "C" NAKED register_t __cdecl internal_418b04()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3f8]
        UNREACHABLE_TRAP(0x418b04)
    }
}
