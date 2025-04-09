#include "Freelancer-PCH.h"

PROC_DECLARE(0x457400, internal_457400, public_457400);
extern "C" NAKED register_t __cdecl internal_457400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea ecx, ds:[esi+0x24]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xA8]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[eax+0xB4]
        mov ecx, 9
        rep movsd
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x457400)
    }
}
