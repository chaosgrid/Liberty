#include "Freelancer-PCH.h"

PROC_DECLARE(0x454690, internal_454690, public_454690);
extern "C" NAKED register_t __cdecl internal_454690()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[edi+4]
        push edx
        push esi
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[edi+0x1C]
        push ecx
        lea edx, ds:[edi+0x18]
        push edx
        lea ecx, ds:[edi+0x14]
        push ecx
        push esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edi+0x10]
        push eax
        inc edi
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x454690)
    }
}
