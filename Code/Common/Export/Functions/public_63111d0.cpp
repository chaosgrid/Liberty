#include "Common-PCH.h"

PROC_DECLARE(0x63111d0, internal_63111d0, public_63111d0);
extern "C" NAKED register_t __cdecl internal_63111d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a36f8]
        mov dword ptr ds : [public_63fd298], eax
        ret 
        UNREACHABLE_TRAP(0x63111d0)
    }
}
