#include "THORN-PCH.h"

PROC_DECLARE(0x6f2f7b0, internal_6f2f7b0, public_6f2f7b0);
extern "C" NAKED register_t __cdecl internal_6f2f7b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6f2f7b0)
    }
}
