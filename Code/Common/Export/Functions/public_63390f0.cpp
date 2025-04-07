#include "Common-PCH.h"

PROC_DECLARE(0x63390f0, internal_63390f0, public_63390f0);
extern "C" NAKED register_t __cdecl internal_63390f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x50]
        ret 
        UNREACHABLE_TRAP(0x63390f0)
    }
}
