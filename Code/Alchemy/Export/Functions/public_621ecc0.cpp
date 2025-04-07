#include "Alchemy-PCH.h"

PROC_DECLARE(0x621ecc0, internal_621ecc0, public_621ecc0);
extern "C" NAKED register_t __cdecl internal_621ecc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov edx, dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [edx+ecx*8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], esi
        mov eax, dword ptr ds : [eax+0x28]
        pop esi
        mov ecx, dword ptr ds : [eax+ecx*8+4]
        xor eax, eax
        mov dword ptr ds : [edx+4], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x621ecc0)
    }
}
