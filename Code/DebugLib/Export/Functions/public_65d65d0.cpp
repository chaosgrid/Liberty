#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d65d0, internal_65d65d0, public_65d65d0);
extern "C" NAKED register_t __cdecl internal_65d65d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x2520]
        inc ecx
        mov dword ptr ds : [eax+0x2520], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d65d0)
    }
}
