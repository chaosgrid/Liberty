#include "Common-PCH.h"

PROC_DECLARE(0x6295850, internal_6295850, public_6295850);
extern "C" NAKED register_t __cdecl internal_6295850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce28]
        mov dword ptr ds : [public_63fc140], eax
        ret 
        UNREACHABLE_TRAP(0x6295850)
    }
}
