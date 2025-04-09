#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453f00, internal_453f00, public_453f00);
extern "C" NAKED register_t __cdecl internal_453f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea ecx, ds:[esi+0x24]
        mov edi, dword ptr ds : [ecx]
        add eax, 0x78
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edi, ds:[eax+0xC]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x453f00)
    }
}
