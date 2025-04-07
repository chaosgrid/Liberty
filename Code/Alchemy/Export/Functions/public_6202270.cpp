#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202270);

PROC_DECLARE(0x6202270, internal_6202270, public_6202270);
extern "C" NAKED register_t __cdecl internal_6202270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6255068], eax
        mov dword ptr ds : [public_6257bdc], eax
        ret 
        UNREACHABLE_TRAP(0x6202270)
    }
}
