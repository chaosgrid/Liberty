#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9b30, internal_6bd9b30, public_6bd9b30);
extern "C" NAKED register_t __cdecl internal_6bd9b30()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6bd9b30)
    }
}
