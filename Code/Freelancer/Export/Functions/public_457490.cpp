#include "Freelancer-PCH.h"

PROC_DECLARE(0x457490, internal_457490, public_457490);
extern "C" NAKED register_t __cdecl internal_457490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+0xA8]
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea esi, ds:[eax+0xB4]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x457490)
    }
}
