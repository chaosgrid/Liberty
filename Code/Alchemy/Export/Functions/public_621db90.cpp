#include "Alchemy-PCH.h"

PROC_DECLARE(0x621db90, internal_621db90, public_621db90);
extern "C" NAKED register_t __cdecl internal_621db90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x10]
        UNREACHABLE_TRAP(0x621db90)
    }
}
