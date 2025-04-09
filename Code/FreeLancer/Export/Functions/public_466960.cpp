#include "FreeLancer-PCH.h"

PROC_DECLARE(0x466960, internal_466960, public_466960);
extern "C" NAKED register_t __cdecl internal_466960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax+4]
        sub eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x466960)
    }
}
