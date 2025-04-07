#include "Common-PCH.h"

PROC_DECLARE(0x627cad0, internal_627cad0, public_627cad0);
extern "C" NAKED register_t __cdecl internal_627cad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b5b4]
        mov dword ptr ds : [public_63fc00c], eax
        ret 
        UNREACHABLE_TRAP(0x627cad0)
    }
}
