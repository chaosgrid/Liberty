#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81110, internal_6d81110, public_6d81110);
extern "C" NAKED register_t __cdecl internal_6d81110()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6db35c4
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6db3450
        mov dword ptr ds : [eax+4], offset public_6db3448
        ret 
        UNREACHABLE_TRAP(0x6d81110)
    }
}
