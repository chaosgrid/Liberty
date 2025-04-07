#include "Common-PCH.h"

PROC_DECLARE(0x627bdc0, internal_627bdc0, public_627bdc0);
extern "C" NAKED register_t __cdecl internal_627bdc0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x627bdc0)
    }
}
