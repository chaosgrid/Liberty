#include "ximage-PCH.h"

PROC_DECLARE(0x6f82810, internal_6f82810, public_6f82810);
extern "C" NAKED register_t __cdecl internal_6f82810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x44]
        inc ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f82810)
    }
}
