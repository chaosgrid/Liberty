#include "FLServer-PCH.h"

PROC_DECLARE(0x4190e6, internal_4190e6, public_4190e6);
extern "C" NAKED register_t __cdecl internal_4190e6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b800]
        UNREACHABLE_TRAP(0x4190e6)
    }
}
