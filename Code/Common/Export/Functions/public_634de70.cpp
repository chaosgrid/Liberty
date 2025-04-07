#include "Common-PCH.h"

PROC_DECLARE(0x634de70, internal_634de70, public_634de70);
extern "C" NAKED register_t __cdecl internal_634de70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+0x44]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x634de70)
    }
}
