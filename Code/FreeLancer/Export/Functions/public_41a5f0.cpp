#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a5f0, internal_41a5f0, public_41a5f0);
extern "C" NAKED register_t __cdecl internal_41a5f0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_5c9034
        ret 
        UNREACHABLE_TRAP(0x41a5f0)
    }
}
