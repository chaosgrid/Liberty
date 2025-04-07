#include "Common-PCH.h"

PROC_DECLARE(0x6325490, internal_6325490, public_6325490);
extern "C" NAKED register_t __cdecl internal_6325490()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_63a3f64
        ret 4
        UNREACHABLE_TRAP(0x6325490)
    }
}
