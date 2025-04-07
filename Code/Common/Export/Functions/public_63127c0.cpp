#include "Common-PCH.h"

PROC_DECLARE(0x63127c0, internal_63127c0, public_63127c0);
extern "C" NAKED register_t __cdecl internal_63127c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37a4]
        mov dword ptr ds : [public_64012c8], eax
        ret 
        UNREACHABLE_TRAP(0x63127c0)
    }
}
