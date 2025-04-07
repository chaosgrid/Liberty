#include "FLServer-PCH.h"

PROC_DECLARE(0x418edc, internal_418edc, public_418edc);
extern "C" NAKED register_t __cdecl internal_418edc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b690]
        UNREACHABLE_TRAP(0x418edc)
    }
}
