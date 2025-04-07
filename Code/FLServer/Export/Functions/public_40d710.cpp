#include "FLServer-PCH.h"

PROC_DECLARE(0x40d710, internal_40d710, public_40d710);
extern "C" NAKED register_t __cdecl internal_40d710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b6c0]
        ret 
        UNREACHABLE_TRAP(0x40d710)
    }
}
