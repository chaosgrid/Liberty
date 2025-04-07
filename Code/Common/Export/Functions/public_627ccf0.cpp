#include "Common-PCH.h"

PROC_DECLARE(0x627ccf0, internal_627ccf0, public_627ccf0);
extern "C" NAKED register_t __cdecl internal_627ccf0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639b62c
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax], offset public_639b60c
        ret 4
        UNREACHABLE_TRAP(0x627ccf0)
    }
}
