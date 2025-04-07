#include "Common-PCH.h"

PROC_DECLARE(0x631bf20, internal_631bf20, public_631bf20);
extern "C" NAKED register_t __cdecl internal_631bf20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3a60]
        mov dword ptr ds : [public_64017f4], eax
        ret 
        UNREACHABLE_TRAP(0x631bf20)
    }
}
