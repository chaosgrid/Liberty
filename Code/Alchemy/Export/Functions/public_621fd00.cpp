#include "Alchemy-PCH.h"

PROC_DECLARE(0x621fd00, internal_621fd00, public_621fd00);
extern "C" NAKED register_t __cdecl internal_621fd00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621fd00)
    }
}
