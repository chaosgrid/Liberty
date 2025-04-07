#include "Content-PCH.h"

PROC_DECLARE(0x6ec1bd0, internal_6ec1bd0, public_6ec1bd0);
extern "C" NAKED register_t __cdecl internal_6ec1bd0()
{
    __asm
    {
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6ec1bd0)
    }
}
