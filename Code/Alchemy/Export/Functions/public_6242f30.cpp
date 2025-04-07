#include "Alchemy-PCH.h"


#define public_6242f53 _public_6242f53
#define public_6242f98 _public_6242f98

PROC_DECLARE(0x6242f30, internal_6242f30, public_6242f30);
extern "C" NAKED register_t __cdecl internal_6242f30()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x14]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_6242f98
        public_6242f53 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        push edi
        push esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        push esi
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x18]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push ebx
        call dword ptr ds : [eax+0x20]
        inc edi
        cmp edi, ebp
        jl public_6242f53
        public_6242f98 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call dword ptr ds : [eax+0x40]
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        call dword ptr ds : [edx+0x3C]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        call dword ptr ds : [eax+0x18]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6242f30)
    }
}

#undef public_6242f53
#undef public_6242f98
