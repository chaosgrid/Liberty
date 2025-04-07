#include "Common-PCH.h"

PROC_DECLARE(0x627bdb0, internal_627bdb0, public_627bdb0);
extern "C" NAKED register_t __cdecl internal_627bdb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b594]
        mov dword ptr ds : [public_63fbfe0], eax
        ret 
        UNREACHABLE_TRAP(0x627bdb0)
    }
}
