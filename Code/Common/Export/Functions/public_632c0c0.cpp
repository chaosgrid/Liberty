#include "Common-PCH.h"

PROC_DECLARE(0x632c0c0, internal_632c0c0, public_632c0c0);
extern "C" NAKED register_t __cdecl internal_632c0c0()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x632c0c0)
    }
}
