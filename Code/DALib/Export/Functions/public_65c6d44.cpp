#include "DALib-PCH.h"

PROC_DECLARE(0x65c6d44, internal_65c6d44, public_65c6d44);
extern "C" NAKED register_t __cdecl internal_65c6d44()
{
    __asm
    {
        jmp dword ptr ds : [public_65c70c0]
        UNREACHABLE_TRAP(0x65c6d44)
    }
}
