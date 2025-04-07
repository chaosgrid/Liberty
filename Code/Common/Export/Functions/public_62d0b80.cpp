#include "Common-PCH.h"

PROC_DECLARE(0x62d0b80, internal_62d0b80, public_62d0b80);
extern "C" NAKED register_t __cdecl internal_62d0b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0020]
        mov dword ptr ds : [public_63fc938], eax
        ret 
        UNREACHABLE_TRAP(0x62d0b80)
    }
}
