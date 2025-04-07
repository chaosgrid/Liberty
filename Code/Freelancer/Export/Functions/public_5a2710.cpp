#include "Freelancer-PCH.h"


#define public_5a2756 _public_5a2756
#define public_5a2785 _public_5a2785
#define public_5a27a9 _public_5a27a9
#define public_5a27ca _public_5a27ca

PROC_DECLARE(0x5a2710, internal_5a2710, public_5a2710);
extern "C" NAKED register_t __cdecl internal_5a2710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x8A2]
        test al, al
        push edi
        je public_5a27ca
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi+4], 1
        je public_5a27ca
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        jne public_5a27ca
        mov eax, dword ptr ds : [esi+0x7C]
        mov edx, dword ptr ds : [esi+0x8A4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x8AC], eax
        jl public_5a2756
        mov dword ptr ds : [esi+0x8AC], 0xFFFFFFFF
        public_5a2756 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5a27ca
        mov ecx, dword ptr ds : [esi+0x8AC]
        xor eax, eax
        test ecx, ecx
        jl public_5a2785
        cmp ecx, edx
        jge public_5a2785
        cmp ecx, 0x100
        jge public_5a2785
        mov ecx, dword ptr ds : [esi+ecx*4+0x48C]
        test ecx, ecx
        je public_5a2785
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_5a2785 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 2
        jne public_5a27a9
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+0x8AC]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push 0xF001
        call dword ptr ds : [edx+0x5C]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_5a27a9 : nop
        cmp ecx, 3
        jne public_5a27ca
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+0x8AC]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push 0xF002
        call dword ptr ds : [edx+0x5C]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_5a27ca : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a2710)
    }
}

#undef public_5a2756
#undef public_5a2785
#undef public_5a27a9
#undef public_5a27ca
