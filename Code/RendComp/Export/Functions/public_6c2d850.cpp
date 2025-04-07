#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2d850, internal_6c2d850, public_6c2d850);
extern "C" NAKED register_t __cdecl internal_6c2d850()
{
    __asm
    {
        xor al, al
        ret 0x20
        UNREACHABLE_TRAP(0x6c2d850)
    }
}
