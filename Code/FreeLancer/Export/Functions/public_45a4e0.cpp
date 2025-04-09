#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_45a530 _public_45a530
#define public_45a58d _public_45a58d
#define public_45a58f _public_45a58f
#define public_45a5ad _public_45a5ad
#define public_45a5ce _public_45a5ce
#define public_45a5ef _public_45a5ef
#define public_45a621 _public_45a621
#define public_45a631 _public_45a631

PROC_DECLARE(0x45a4e0, internal_45a4e0, public_45a4e0);
extern "C" NAKED register_t __cdecl internal_45a4e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_45a631
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_45a631
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        push eax
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_45a5ad
        test byte ptr ds : [esi+0x18C], 4
        je public_45a530
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_679b9c]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 
        public_45a530 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_45a5ad
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_45a5ad
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_45a5ad
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_45a5ad
        mov eax, dword ptr ds : [esi+0x1B4]
        test eax, eax
        je public_45a5ad
        call public_54baf0
        test eax, eax
        je public_45a5ad
        add eax, 0xC
        test eax, eax
        je public_45a58d
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_45a58d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_45a58f
        public_45a58d : nop
        xor eax, eax
        public_45a58f : nop
        mov edx, dword ptr ds : [eax+0x1B4]
        cmp edx, dword ptr ds : [esi+0x1B4]
        jne public_45a5ad
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_679b88]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 
        public_45a5ad : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x68]
        test eax, eax
        je public_45a5ce
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_679b84]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 
        public_45a5ce : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5ce7ec]
        fnstsw ax
        test ah, 0x41
        jp public_45a5ef
        mov edx, dword ptr ds : [public_679ba8]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 
        public_45a5ef : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5ce7f0]
        fnstsw ax
        test ah, 0x41
        jnp public_45a621
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5ce7f8]
        fnstsw ax
        test ah, 1
        jne public_45a621
        mov edx, dword ptr ds : [public_679bac]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 
        public_45a621 : nop
        mov ecx, dword ptr ds : [public_679b84]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 
        public_45a631 : nop
        mov edx, dword ptr ds : [public_679b84]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x45a4e0)
    }
}

#undef public_45a530
#undef public_45a58d
#undef public_45a58f
#undef public_45a5ad
#undef public_45a5ce
#undef public_45a5ef
#undef public_45a621
#undef public_45a631
