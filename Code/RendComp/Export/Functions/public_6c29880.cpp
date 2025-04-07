#include "RendComp-PCH.h"

PROC_DECLARE(0x6c29880, internal_6c29880, public_6c29880);
extern "C" NAKED register_t __cdecl internal_6c29880()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c29880)
    }
}
