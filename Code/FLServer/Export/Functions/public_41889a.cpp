#include "FLServer-PCH.h"

PROC_DECLARE(0x41889a, internal_41889a, public_41889a);
extern "C" NAKED register_t __cdecl internal_41889a()
{
    __asm
    {
        jmp dword ptr ds : [public_41baac]
        UNREACHABLE_TRAP(0x41889a)
    }
}
