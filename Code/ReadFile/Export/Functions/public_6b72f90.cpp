#include "ReadFile-PCH.h"


#define public_6b72fd1 _public_6b72fd1
#define public_6b72fd9 _public_6b72fd9
#define public_6b72fef _public_6b72fef
#define public_6b72ff5 _public_6b72ff5
#define public_6b72fff _public_6b72fff
#define public_6b73001 _public_6b73001
#define public_6b73023 _public_6b73023
#define public_6b73038 _public_6b73038
#define public_6b7304d _public_6b7304d
#define public_6b7305e _public_6b7305e
#define public_6b73098 _public_6b73098
#define public_6b730b2 _public_6b730b2
#define public_6b730e8 _public_6b730e8
#define public_6b730ec _public_6b730ec
#define public_6b730fd _public_6b730fd
#define public_6b7310e _public_6b7310e

PROC_DECLARE(0x6b72f90, internal_6b72f90, public_6b72f90);
extern "C" NAKED register_t __cdecl internal_6b72f90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6b7310e
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6b7310e
        mov edx, dword ptr ss : [esp+0x1C]
        test edx, edx
        jne public_6b72fd9
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x238]
        test ecx, ecx
        je public_6b72fd1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b72fff
        public_6b72fd1 : nop
        mov ebp, dword ptr ds : [edi+0x23C]
        jmp public_6b73001
        public_6b72fd9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x230]
        test eax, eax
        je public_6b72fef
        mov ecx, dword ptr ds : [eax+0x238]
        jmp public_6b72ff5
        public_6b72fef : nop
        mov ecx, dword ptr ds : [ecx+0x238]
        public_6b72ff5 : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        mov edi, dword ptr ss : [esp+0x18]
        public_6b72fff : nop
        mov ebp, eax
        public_6b73001 : nop
        test ebp, ebp
        je public_6b730fd
        mov ecx, dword ptr ds : [edi+0x230]
        lea eax, ds:[edi+0x230]
        test ecx, ecx
        je public_6b73023
        mov ebx, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x10]
        jmp public_6b73038
        public_6b73023 : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, edi
        push edi
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [ecx+4]
        mov ecx, 1
        lea eax, ss:[esp+0x1C]
        public_6b73038 : nop
        mov esi, dword ptr ds : [eax]
        test cl, 1
        mov dword ptr ss : [esp+0x1C], esi
        je public_6b7304d
        test ebx, ebx
        je public_6b7304d
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_6b7304d : nop
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        jne public_6b7305e
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6b730ec
        public_6b7305e : nop
        mov ecx, dword ptr ds : [esi+0x238]
        test ecx, ecx
        je public_6b730ec
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax+0x24]
        mov ecx, ebp
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp]
        add ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        add ebx, edi
        lea esi, ds:[edi+eax]
        call dword ptr ds : [edx+8]
        cmp esi, eax
        jbe public_6b73098
        mov esi, eax
        public_6b73098 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], esi
        sub esi, edi
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, esi
        cmp ebx, ecx
        ja public_6b730e8
        sub ecx, ebx
        cmp eax, ecx
        jbe public_6b730b2
        mov eax, ecx
        public_6b730b2 : nop
        mov esi, dword ptr ds : [edx+0xC]
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, eax
        add esi, ebx
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        lea ecx, ds:[eax+ebx]
        test eax, eax
        mov dword ptr ds : [edx+0x14], ecx
        je public_6b730e8
        mov edx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], eax
        mov eax, 1
        pop ebx
        pop ecx
        ret 0x18
        public_6b730e8 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_6b730ec : nop
        mov dword ptr ds : [edi+0x1C], 0x1E
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x18
        public_6b730fd : nop
        mov dword ptr ds : [edi+0x1C], 6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x18
        public_6b7310e : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x1C], 0x57
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6b72f90)
    }
}

#undef public_6b72fd1
#undef public_6b72fd9
#undef public_6b72fef
#undef public_6b72ff5
#undef public_6b72fff
#undef public_6b73001
#undef public_6b73023
#undef public_6b73038
#undef public_6b7304d
#undef public_6b7305e
#undef public_6b73098
#undef public_6b730b2
#undef public_6b730e8
#undef public_6b730ec
#undef public_6b730fd
#undef public_6b7310e
