#include "FLServer-PCH.h"

PROC_DECLARE(0x418eb2, internal_418eb2, public_418eb2);
extern "C" NAKED register_t __cdecl internal_418eb2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b674]
        UNREACHABLE_TRAP(0x418eb2)
    }
}
