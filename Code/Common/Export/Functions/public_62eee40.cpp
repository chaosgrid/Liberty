#include "Common-PCH.h"

PROC_DECLARE(0x62eee40, internal_62eee40, public_62eee40);
extern "C" NAKED register_t __cdecl internal_62eee40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0898]
        mov dword ptr ds : [public_63fcb24], eax
        ret 
        UNREACHABLE_TRAP(0x62eee40)
    }
}
