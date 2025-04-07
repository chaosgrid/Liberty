#include "FLServer-PCH.h"

PROC_DECLARE(0x418dda, internal_418dda, public_418dda);
extern "C" NAKED register_t __cdecl internal_418dda()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5e4]
        UNREACHABLE_TRAP(0x418dda)
    }
}
