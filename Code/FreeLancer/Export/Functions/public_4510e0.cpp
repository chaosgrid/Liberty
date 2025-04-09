#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4510e0, internal_4510e0, public_4510e0);
extern "C" NAKED register_t __cdecl internal_4510e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cce24]
        mov dword ptr ds : [public_66d110], eax
        ret 
        UNREACHABLE_TRAP(0x4510e0)
    }
}
