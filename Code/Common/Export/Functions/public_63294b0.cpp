#include "Common-PCH.h"

PROC_DECLARE(0x63294b0, internal_63294b0, public_63294b0);
extern "C" NAKED register_t __cdecl internal_63294b0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a40fc
        mov dword ptr ds : [eax+4], 3
        ret 
        UNREACHABLE_TRAP(0x63294b0)
    }
}
