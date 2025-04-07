#include "FLServer-PCH.h"

PROC_DECLARE(0x4028d0, internal_4028d0, public_4028d0);
extern "C" NAKED register_t __cdecl internal_4028d0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_41c1f0
        ret 
        UNREACHABLE_TRAP(0x4028d0)
    }
}
