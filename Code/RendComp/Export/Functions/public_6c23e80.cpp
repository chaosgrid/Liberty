#include "RendComp-PCH.h"

PROC_DECLARE(0x6c23e80, internal_6c23e80, public_6c23e80);
extern "C" NAKED register_t __cdecl internal_6c23e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c23e80)
    }
}
