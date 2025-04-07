#include "Deformable2-PCH.h"

PROC_DECLARE(0x65fed10, internal_65fed10, public_65fed10);
extern "C" NAKED register_t __cdecl internal_65fed10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x65fed10)
    }
}
