#include "Common-PCH.h"

PROC_DECLARE(0x62eee30, internal_62eee30, public_62eee30);
extern "C" NAKED register_t __cdecl internal_62eee30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0898]
        mov dword ptr ds : [public_63fcb28], eax
        ret 
        UNREACHABLE_TRAP(0x62eee30)
    }
}
