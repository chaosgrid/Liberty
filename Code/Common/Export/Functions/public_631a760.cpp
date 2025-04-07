#include "Common-PCH.h"

PROC_DECLARE(0x631a760, internal_631a760, public_631a760);
extern "C" NAKED register_t __cdecl internal_631a760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3934]
        mov dword ptr ds : [public_6401340], eax
        ret 
        UNREACHABLE_TRAP(0x631a760)
    }
}
