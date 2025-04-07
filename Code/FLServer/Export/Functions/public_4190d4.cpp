#include "FLServer-PCH.h"

PROC_DECLARE(0x4190d4, internal_4190d4, public_4190d4);
extern "C" NAKED register_t __cdecl internal_4190d4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7f4]
        UNREACHABLE_TRAP(0x4190d4)
    }
}
