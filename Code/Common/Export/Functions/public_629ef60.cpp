#include "Common-PCH.h"


#define public_629efd6 _public_629efd6

PROC_DECLARE(0x629ef60, internal_629ef60, public_629ef60);
extern "C" NAKED register_t __cdecl internal_629ef60()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 0
        xor bl, bl
        call dword ptr ds : [eax+0x64]
        cmp eax, 0xFFFFFFFF
        je public_629efd6
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [edx]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [edi+0x64]
        mov esi, dword ptr ds : [esi+0x20]
        push esi
        mov edi, eax
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_6399024]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov bl, al
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop edi
        public_629efd6 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x629ef60)
    }
}

#undef public_629efd6
