#include "Common-PCH.h"

PROC_DECLARE(0x6293cf0, internal_6293cf0, public_6293cf0);
extern "C" NAKED register_t __cdecl internal_6293cf0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_639c6e8
        ret 
        UNREACHABLE_TRAP(0x6293cf0)
    }
}
