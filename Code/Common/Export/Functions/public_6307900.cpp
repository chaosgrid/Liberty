#include "Common-PCH.h"

PROC_DECLARE(0x6307900, internal_6307900, public_6307900);
extern "C" NAKED register_t __cdecl internal_6307900()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        lea ecx, ds:[eax+0x24]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, 9
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6307900)
    }
}
