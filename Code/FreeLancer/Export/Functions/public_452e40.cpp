#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_452e40);

PROC_DECLARE(0x452e40, internal_452e40, public_452e40);
extern "C" NAKED register_t __cdecl internal_452e40()
{
    __asm
    {
        sub esp, 0x30
        mov ecx, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx]
        push esi
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x3C]
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
        ret 4
        UNREACHABLE_TRAP(0x452e40)
    }
}
