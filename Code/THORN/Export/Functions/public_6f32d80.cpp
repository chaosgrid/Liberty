#include "THORN-PCH.h"

PROC_DECLARE(0x6f32d80, internal_6f32d80, public_6f32d80);
extern "C" NAKED register_t __cdecl internal_6f32d80()
{
    __asm
    {
        mov eax, offset public_6f5febc
        ret 
        UNREACHABLE_TRAP(0x6f32d80)
    }
}
