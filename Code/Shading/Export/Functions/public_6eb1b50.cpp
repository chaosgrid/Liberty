#include "Shading-PCH.h"

PROC_DECLARE(0x6eb1b50, internal_6eb1b50, public_6eb1b50);
extern "C" NAKED register_t __cdecl internal_6eb1b50()
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
        UNREACHABLE_TRAP(0x6eb1b50)
    }
}
