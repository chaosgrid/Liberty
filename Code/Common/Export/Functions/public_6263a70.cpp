#include "Common-PCH.h"

PROC_DECLARE(0x6263a70, internal_6263a70, public_6263a70);
extern "C" NAKED register_t __cdecl internal_6263a70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6263a70)
    }
}
