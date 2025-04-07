#include "Content-PCH.h"

PROC_DECLARE(0x6f479a0, internal_6f479a0, public_6f479a0);
extern "C" NAKED register_t __cdecl internal_6f479a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        mov dword ptr ds : [ecx+4], eax
        ret 
        UNREACHABLE_TRAP(0x6f479a0)
    }
}
