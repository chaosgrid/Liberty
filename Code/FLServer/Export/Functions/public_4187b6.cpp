#include "FLServer-PCH.h"

PROC_DECLARE(0x4187b6, internal_4187b6, public_4187b6);
extern "C" NAKED register_t __cdecl internal_4187b6()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba28]
        UNREACHABLE_TRAP(0x4187b6)
    }
}
