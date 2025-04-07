#include "FLServer-PCH.h"

PROC_DECLARE(0x4010e0, internal_4010e0, public_4010e0);
extern "C" NAKED register_t __cdecl internal_4010e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_41be04
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_41bc90
        mov dword ptr ds : [eax+4], offset public_41bc88
        ret 
        UNREACHABLE_TRAP(0x4010e0)
    }
}
