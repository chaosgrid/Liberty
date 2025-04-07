#include "Common-PCH.h"

PROC_DECLARE(0x6261010, internal_6261010, public_6261010);
extern "C" NAKED register_t __cdecl internal_6261010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63993dc]
        mov dword ptr ds : [public_63fbb64], eax
        ret 
        UNREACHABLE_TRAP(0x6261010)
    }
}
