#include "DALib-PCH.h"

PROC_DECLARE(0x65c6bea, internal_65c6bea, public_65c6bea);
extern "C" NAKED register_t __cdecl internal_65c6bea()
{
    __asm
    {
        jmp dword ptr ds : [public_65c70c4]
        UNREACHABLE_TRAP(0x65c6bea)
    }
}
