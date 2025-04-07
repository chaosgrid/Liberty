#include "FLServer-PCH.h"

PROC_DECLARE(0x418c30, internal_418c30, public_418c30);
extern "C" NAKED register_t __cdecl internal_418c30()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4c4]
        UNREACHABLE_TRAP(0x418c30)
    }
}
