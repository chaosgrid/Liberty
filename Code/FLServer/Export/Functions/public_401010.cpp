#include "FLServer-PCH.h"

PROC_DECLARE(0x401010, internal_401010, public_401010);
extern "C" NAKED register_t __cdecl internal_401010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41bc60]
        mov dword ptr ds : [public_425f08], eax
        ret 
        UNREACHABLE_TRAP(0x401010)
    }
}
