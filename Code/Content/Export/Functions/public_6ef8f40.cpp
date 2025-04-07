#include "Content-PCH.h"

PROC_DECLARE(0x6ef8f40, internal_6ef8f40, public_6ef8f40);
extern "C" NAKED register_t __cdecl internal_6ef8f40()
{
    __asm
    {
        mov dword ptr ds : [public_6fcf300], 0x456A6000
        ret 
        UNREACHABLE_TRAP(0x6ef8f40)
    }
}
