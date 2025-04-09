#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597ff0);
CLANG_FORWARD_PROC_SYMBOL(public_598100);
CLANG_FORWARD_PROC_SYMBOL(public_59d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5988d1 _public_5988d1
#define public_5988e1 _public_5988e1
#define public_5988e6 _public_5988e6
#define public_5988ec _public_5988ec
#define public_598948 _public_598948
#define public_598997 _public_598997
#define public_5989c4 _public_5989c4
#define public_598a14 _public_598a14
#define public_598ab0 _public_598ab0
#define public_598aec _public_598aec
#define public_598b22 _public_598b22
#define public_598b24 _public_598b24
#define public_598b56 _public_598b56
#define public_598b61 _public_598b61
#define public_598b6e _public_598b6e
#define public_598b72 _public_598b72
#define public_598b97 _public_598b97
#define public_598be6 _public_598be6
#define public_598bf3 _public_598bf3
#define public_598bfa _public_598bfa
#define public_598bfc _public_598bfc
#define public_598c03 _public_598c03

PROC_DECLARE(0x5988c0, internal_5988c0, public_5988c0);
extern "C" NAKED register_t __cdecl internal_5988c0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        je public_5988ec
        public_5988d1 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_5988e1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_5988e6
        public_5988e1 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_5988e6 : nop
        cmp edi, ebx
        mov ecx, edi
        jne public_5988d1
        public_5988ec : nop
        call public_59d9b0
        cmp eax, esi
        jne public_5989c4
        cmp byte ptr ds : [esi+0x131], bl
        je public_5989c4
        lea eax, ss:[esp+0x14]
        push eax
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        fdiv dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_67da38]
        add esp, 4
        cmp eax, ebx
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        jne public_598948
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_598948 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ds:[esi+0xF4]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        cmp byte ptr ds : [esi+0x132], bl
        push ecx
        mov ecx, esi
        je public_598997
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x134]
        fadd dword ptr ds : [esi+0x138]
        fstp dword ptr ss : [esp]
        push eax
        call public_597ff0
        mov ecx, dword ptr ds : [esi+0x128]
        push ecx
        call dword ptr ds : [public_5c723c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        public_598997 : nop
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+0x134]
        fadd dword ptr ds : [esi+0x138]
        fstp dword ptr ss : [esp]
        push edx
        call public_598100
        mov eax, dword ptr ds : [esi+0x124]
        push eax
        call dword ptr ds : [public_5c723c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        public_5989c4 : nop
        call public_59d9b0
        test eax, eax
        jne public_598bf3
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        fdiv dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [public_67da38]
        add esp, 4
        cmp eax, ebx
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        jne public_598a14
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_598a14 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[esi+0xF4]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        mov byte ptr ds : [esi+0xD8], bl
        mov byte ptr ds : [esi+0x130], bl
        mov byte ptr ds : [esi+0x131], bl
        fnstsw ax
        test ah, 1
        jne public_598bf3
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 5
        jp public_598bf3
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_598bf3
        fld dword ptr ds : [esi+0x80]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_598bf3
        cmp byte ptr ds : [esi+0xF0], bl
        je public_598b22
        mov ecx, dword ptr ds : [esi+0xA8]
        mov edi, 1
        nop 
        public_598ab0 : nop
        cmp ecx, ebx
        je public_598b22
        mov eax, dword ptr ds : [esi+0xAC]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_598b22
        mov edx, dword ptr ds : [esi+0xA8]
        fld dword ptr ds : [edx+edi*4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0xC]
        fabs 
        fld dword ptr ds : [esi+0xEC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_598aec
        inc edi
        jmp public_598ab0
        public_598aec : nop
        mov eax, dword ptr ds : [esi+0x128]
        push eax
        call dword ptr ds : [public_5c723c]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x134], edi
        pop edi
        mov byte ptr ds : [esi+0x130], 1
        fstp dword ptr ds : [esi+0x138]
        mov byte ptr ds : [esi+0x132], 1
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        public_598b22 : nop
        xor edi, edi
        public_598b24 : nop
        mov ecx, dword ptr ds : [esi+0x98]
        cmp ecx, ebx
        je public_598be6
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_598be6
        cmp ecx, ebx
        mov edx, ecx
        fld dword ptr ds : [edx+edi*4]
        fstp dword ptr ss : [esp+0xC]
        jne public_598b56
        xor eax, eax
        jmp public_598b61
        public_598b56 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_598b61 : nop
        lea ecx, ds:[edi+1]
        cmp ecx, eax
        jae public_598b6e
        fld dword ptr ds : [edx+edi*4+4]
        jmp public_598b72
        public_598b6e : nop
        fld dword ptr ss : [esp+0x10]
        public_598b72 : nop
        cmp byte ptr ds : [esi+0xF1], bl
        je public_598b97
        cmp edi, ebx
        jbe public_598b97
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0xC]
        fabs 
        fld dword ptr ds : [esi+0xEC]
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_598c03
        public_598b97 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_598bfa
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_598bfc
        mov ecx, dword ptr ds : [esi+0x98]
        cmp ecx, ebx
        je public_598be6
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_598be6
        mov edx, dword ptr ds : [esi+0xB8]
        cmp byte ptr ds : [edx+edi*8], bl
        je public_598be6
        mov dword ptr ds : [esi+0xDC], edi
        mov byte ptr ds : [esi+0xD8], 1
        public_598be6 : nop
        mov eax, dword ptr ds : [esi+0x12C]
        push eax
        call dword ptr ds : [public_5c723c]
        public_598bf3 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        public_598bfa : nop
        fstp st(0)
        public_598bfc : nop
        mov edi, ecx
        jmp public_598b24
        public_598c03 : nop
        mov ecx, dword ptr ds : [esi+0x124]
        fstp st(0)
        push ecx
        call dword ptr ds : [public_5c723c]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x134], edi
        pop edi
        mov byte ptr ds : [esi+0x132], bl
        fstp dword ptr ds : [esi+0x138]
        mov byte ptr ds : [esi+0x130], 1
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x5988c0)
    }
}

#undef public_5988d1
#undef public_5988e1
#undef public_5988e6
#undef public_5988ec
#undef public_598948
#undef public_598997
#undef public_5989c4
#undef public_598a14
#undef public_598ab0
#undef public_598aec
#undef public_598b22
#undef public_598b24
#undef public_598b56
#undef public_598b61
#undef public_598b6e
#undef public_598b72
#undef public_598b97
#undef public_598be6
#undef public_598bf3
#undef public_598bfa
#undef public_598bfc
#undef public_598c03
