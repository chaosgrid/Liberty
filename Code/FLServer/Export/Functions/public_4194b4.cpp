#include "FLServer-PCH.h"

PROC_DECLARE(0x4194b4, internal_4194b4, public_4194b4);
extern "C" NAKED register_t __cdecl internal_4194b4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9ac]
        UNREACHABLE_TRAP(0x4194b4)
    }
}
