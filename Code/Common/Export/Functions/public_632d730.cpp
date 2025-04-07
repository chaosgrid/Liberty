#include "Common-PCH.h"

PROC_DECLARE(0x632d730, internal_632d730, public_632d730);
extern "C" NAKED register_t __cdecl internal_632d730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48b0]
        mov dword ptr ds : [public_640a718], eax
        ret 
        UNREACHABLE_TRAP(0x632d730)
    }
}
