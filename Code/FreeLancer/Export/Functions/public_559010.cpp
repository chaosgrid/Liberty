#include "FreeLancer-PCH.h"

PROC_DECLARE(0x559010, internal_559010, public_559010);
extern "C" NAKED register_t __cdecl internal_559010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1488]
        mov dword ptr ds : [public_6799f4], eax
        ret 
        UNREACHABLE_TRAP(0x559010)
    }
}
