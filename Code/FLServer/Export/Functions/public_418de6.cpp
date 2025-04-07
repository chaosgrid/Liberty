#include "FLServer-PCH.h"

PROC_DECLARE(0x418de6, internal_418de6, public_418de6);
extern "C" NAKED register_t __cdecl internal_418de6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5ec]
        UNREACHABLE_TRAP(0x418de6)
    }
}
