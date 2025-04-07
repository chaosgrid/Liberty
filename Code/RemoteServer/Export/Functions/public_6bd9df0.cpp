#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9df0, internal_6bd9df0, public_6bd9df0);
extern "C" NAKED register_t __cdecl internal_6bd9df0()
{
    __asm
    {
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6bd9df0)
    }
}
