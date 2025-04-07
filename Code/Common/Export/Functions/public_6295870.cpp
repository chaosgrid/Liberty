#include "Common-PCH.h"

PROC_DECLARE(0x6295870, internal_6295870, public_6295870);
extern "C" NAKED register_t __cdecl internal_6295870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce2c]
        mov dword ptr ds : [public_63fc138], eax
        ret 
        UNREACHABLE_TRAP(0x6295870)
    }
}
