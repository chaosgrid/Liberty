#include "Common-PCH.h"

PROC_DECLARE(0x633aff0, internal_633aff0, public_633aff0);
extern "C" NAKED register_t __cdecl internal_633aff0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        ret 
        UNREACHABLE_TRAP(0x633aff0)
    }
}
