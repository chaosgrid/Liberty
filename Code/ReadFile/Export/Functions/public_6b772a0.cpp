#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b772a0, internal_6b772a0, public_6b772a0);
extern "C" NAKED register_t __cdecl internal_6b772a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b772a0)
    }
}
