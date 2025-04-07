#include "Server-PCH.h"

PROC_DECLARE(0x6ce1070, internal_6ce1070, public_6ce1070);
extern "C" NAKED register_t __cdecl internal_6ce1070()
{
    __asm
    {
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x6ce1070)
    }
}
