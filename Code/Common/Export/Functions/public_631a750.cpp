#include "Common-PCH.h"

PROC_DECLARE(0x631a750, internal_631a750, public_631a750);
extern "C" NAKED register_t __cdecl internal_631a750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3930]
        mov dword ptr ds : [public_6401344], eax
        ret 
        UNREACHABLE_TRAP(0x631a750)
    }
}
