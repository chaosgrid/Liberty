#include "FLServer-PCH.h"

PROC_DECLARE(0x418dfe, internal_418dfe, public_418dfe);
extern "C" NAKED register_t __cdecl internal_418dfe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5fc]
        UNREACHABLE_TRAP(0x418dfe)
    }
}
