#include "Common-PCH.h"

PROC_DECLARE(0x6261000, internal_6261000, public_6261000);
extern "C" NAKED register_t __cdecl internal_6261000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63993dc]
        mov dword ptr ds : [public_63fbb68], eax
        ret 
        UNREACHABLE_TRAP(0x6261000)
    }
}
