#include "Alchemy-PCH.h"


#define public_624283d _public_624283d
#define public_624286a _public_624286a

PROC_DECLARE(0x6242810, internal_6242810, public_6242810);
extern "C" NAKED register_t __cdecl internal_6242810()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x30]
        push eax
        push ebx
        call dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x38]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_624286a
        public_624283d : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0x14]
        inc edi
        cmp edi, ebp
        jl public_624283d
        public_624286a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6242810)
    }
}

#undef public_624283d
#undef public_624286a
