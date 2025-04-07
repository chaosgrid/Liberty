#include "FLServer-PCH.h"

PROC_DECLARE(0x41993a, internal_41993a, public_41993a);
extern "C" NAKED register_t __cdecl internal_41993a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8d4]
        UNREACHABLE_TRAP(0x41993a)
    }
}
