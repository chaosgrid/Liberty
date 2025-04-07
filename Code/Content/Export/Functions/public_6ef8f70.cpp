#include "Content-PCH.h"

PROC_DECLARE(0x6ef8f70, internal_6ef8f70, public_6ef8f70);
extern "C" NAKED register_t __cdecl internal_6ef8f70()
{
    __asm
    {
        mov dword ptr ds : [public_6fcf2f8], 0x456A6000
        ret 
        UNREACHABLE_TRAP(0x6ef8f70)
    }
}
