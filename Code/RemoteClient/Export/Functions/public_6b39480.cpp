#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39480, internal_6b39480, public_6b39480);
extern "C" NAKED register_t __cdecl internal_6b39480()
{
    __asm
    {
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6b39480)
    }
}
