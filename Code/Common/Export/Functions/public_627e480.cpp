#include "Common-PCH.h"

PROC_DECLARE(0x627e480, internal_627e480, public_627e480);
extern "C" NAKED register_t __cdecl internal_627e480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc008]
        mov ecx, dword ptr ds : [public_63fbff4]
        add eax, ecx
        ret 
        UNREACHABLE_TRAP(0x627e480)
    }
}
