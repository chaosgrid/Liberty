#include "THORN-PCH.h"

PROC_DECLARE(0x6f347e0, internal_6f347e0, public_6f347e0);
extern "C" NAKED register_t __cdecl internal_6f347e0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x6f347e0)
    }
}
