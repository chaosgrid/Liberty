#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4666f0, internal_4666f0, public_4666f0);
extern "C" NAKED register_t __cdecl internal_4666f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        sub ecx, edx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x4666f0)
    }
}
