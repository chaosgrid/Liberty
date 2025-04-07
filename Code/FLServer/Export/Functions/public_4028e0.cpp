#include "FLServer-PCH.h"

PROC_DECLARE(0x4028e0, internal_4028e0, public_4028e0);
extern "C" NAKED register_t __cdecl internal_4028e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_41c1f0
        ret 4
        UNREACHABLE_TRAP(0x4028e0)
    }
}
