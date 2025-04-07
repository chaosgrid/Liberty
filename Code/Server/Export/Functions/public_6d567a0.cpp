#include "Server-PCH.h"

PROC_DECLARE(0x6d567a0, internal_6d567a0, public_6d567a0);
extern "C" NAKED register_t __cdecl internal_6d567a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d567a0)
    }
}
