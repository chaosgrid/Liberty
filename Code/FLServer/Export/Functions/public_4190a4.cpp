#include "FLServer-PCH.h"

PROC_DECLARE(0x4190a4, internal_4190a4, public_4190a4);
extern "C" NAKED register_t __cdecl internal_4190a4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7d4]
        UNREACHABLE_TRAP(0x4190a4)
    }
}
