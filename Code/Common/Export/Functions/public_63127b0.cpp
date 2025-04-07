#include "Common-PCH.h"

PROC_DECLARE(0x63127b0, internal_63127b0, public_63127b0);
extern "C" NAKED register_t __cdecl internal_63127b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37a0]
        mov dword ptr ds : [public_64012cc], eax
        ret 
        UNREACHABLE_TRAP(0x63127b0)
    }
}
