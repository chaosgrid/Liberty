#include "Content-PCH.h"

PROC_DECLARE(0x6eef520, internal_6eef520, public_6eef520);
extern "C" NAKED register_t __cdecl internal_6eef520()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x6eef520)
    }
}
