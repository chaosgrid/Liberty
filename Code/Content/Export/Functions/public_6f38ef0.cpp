#include "Content-PCH.h"

PROC_DECLARE(0x6f38ef0, internal_6f38ef0, public_6f38ef0);
extern "C" NAKED register_t __cdecl internal_6f38ef0()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f38ef0)
    }
}
