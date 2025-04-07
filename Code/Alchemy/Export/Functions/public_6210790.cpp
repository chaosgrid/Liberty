#include "Alchemy-PCH.h"

PROC_DECLARE(0x6210790, internal_6210790, public_6210790);
extern "C" NAKED register_t __cdecl internal_6210790()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6210790)
    }
}
