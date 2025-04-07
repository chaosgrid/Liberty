#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_51f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_51f41a _public_51f41a
#define public_51f41e _public_51f41e
#define public_51f440 _public_51f440
#define public_51f469 _public_51f469
#define public_51f46b _public_51f46b
#define public_51f499 _public_51f499
#define public_51f4e0 _public_51f4e0
#define public_51f4f6 _public_51f4f6
#define public_51f513 _public_51f513
#define public_51f524 _public_51f524
#define public_51f538 _public_51f538
#define public_51f53e _public_51f53e
#define public_51f586 _public_51f586
#define public_51f5ba _public_51f5ba
#define public_51f5f0 _public_51f5f0
#define public_51f5f4 _public_51f5f4
#define public_51f626 _public_51f626
#define public_51f62b _public_51f62b
#define public_51f633 _public_51f633
#define public_51f638 _public_51f638
#define public_51f644 _public_51f644
#define public_51f6c4 _public_51f6c4
#define public_51f705 _public_51f705
#define public_51f725 _public_51f725
#define public_51f740 _public_51f740
#define public_51f74f _public_51f74f
#define public_51f758 _public_51f758
#define public_51f765 _public_51f765
#define public_51f769 _public_51f769

PROC_DECLARE(0x51f2c0, internal_51f2c0, public_51f2c0);
extern "C" NAKED register_t __cdecl internal_51f2c0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fst dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_6164d0]
        fmul dword ptr ds : [public_6164d0]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_51f440
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, 2
        cmp ecx, eax
        jne public_51f769
        cmp dword ptr ds : [public_67524c], eax
        je public_51f769
        mov eax, dword ptr ds : [public_610534]
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, ebp
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov edx, dword ptr ds : [edi]
        xor ebx, ebx
        push ebx
        push ebp
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x17C]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push ebp
        call dword ptr ds : [edx+0x20]
        push ecx
        mov ecx, ebp
        fstp dword ptr ss : [esp]
        call public_40fb60
        cmp word ptr ss : [esp+0x34], 3
        jb public_51f769
        cmp word ptr ss : [esp+0x36], 2
        jge public_51f769
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x18C]
        test eax, eax
        jne public_51f769
        mov ecx, offset public_675350
        call dword ptr ds : [public_5c60c0]
        cmp eax, ebx
        je public_51f41a
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov word ptr ds : [eax+0xC], bx
        mov word ptr ds : [eax+0xE], 0xFFFF
        mov dword ptr ds : [eax], offset public_5dc364
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ss : [esp+0x38], eax
        jmp public_51f41e
        public_51f41a : nop
        mov dword ptr ss : [esp+0x38], ebx
        public_51f41e : nop
        mov ecx, dword ptr ds : [public_675318]
        lea eax, ss:[esp+0x38]
        push eax
        push 1
        push ecx
        mov ecx, offset public_675310
        call public_537260
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        public_51f440 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebx, ebx
        cmp eax, 2
        jne public_51f499
        lea eax, ds:[edi+0xC]
        cmp eax, ebx
        je public_51f469
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_51f469
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_51f46b
        public_51f469 : nop
        xor eax, eax
        public_51f46b : nop
        test byte ptr ds : [eax+0xE0], 7
        je public_51f499
        cmp dword ptr ds : [edi+0xE4], ebx
        jne public_51f499
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x178]
        fld st(0)
        fmul st, st(1)
        fsubr dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        public_51f499 : nop
        mov eax, dword ptr ds : [public_675244]
        xor esi, esi
        cmp eax, ebx
        je public_51f53e
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], esi
        call dword ptr ds : [edx+0x18C]
        cmp eax, dword ptr ds : [public_675244]
        je public_51f4e0
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_5cbf58]
        fnstsw ax
        test ah, 0x41
        je public_51f769
        fld dword ptr ds : [public_5c7474]
        jmp public_51f4f6
        public_51f4e0 : nop
        fld dword ptr ss : [esp+0x34]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51f4f6
        mov esi, 1
        public_51f4f6 : nop
        mov eax, dword ptr ds : [public_67524c]
        cmp eax, 2
        jne public_51f513
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_51f769
        jmp public_51f53e
        public_51f513 : nop
        fcomp dword ptr ds : [public_5c75dc]
        cmp eax, ebx
        fnstsw ax
        jne public_51f524
        test ah, 1
        jmp public_51f538
        public_51f524 : nop
        test ah, 1
        jne public_51f53e
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_675248]
        fnstsw ax
        test ah, 0x41
        public_51f538 : nop
        je public_51f769
        public_51f53e : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x17C]
        cmp word ptr ss : [esp+0x10], 3
        jb public_51f769
        cmp word ptr ss : [esp+0x12], 2
        jge public_51f769
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_5dc35c]
        fnstsw ax
        test ah, 5
        jp public_51f586
        mov eax, dword ptr ds : [public_67524c]
        xor ecx, ecx
        cmp eax, ebx
        setne cl
        mov esi, ecx
        public_51f586 : nop
        lea eax, ds:[edi+0xC]
        cmp eax, ebx
        je public_51f5ba
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_51f5ba
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_51f5ba
        mov eax, dword ptr ds : [eax+0x88]
        cmp eax, ebx
        je public_51f5ba
        cmp byte ptr ds : [eax+0x80], bl
        je public_51f5ba
        add esi, 3
        public_51f5ba : nop
        mov ecx, offset public_675350
        call dword ptr ds : [public_5c60c0]
        cmp eax, ebx
        je public_51f5f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x38]
        mov word ptr ds : [eax+0xC], bx
        mov word ptr ds : [eax+0xE], 0xFFFF
        mov dword ptr ds : [eax], offset public_5dc364
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ss : [esp+0x38], eax
        jmp public_51f5f4
        public_51f5f0 : nop
        mov dword ptr ss : [esp+0x38], ebx
        public_51f5f4 : nop
        shl esi, 4
        add esi, offset public_6752f0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_51f6c4
        mov edx, dword ptr ds : [esi+4]
        cmp edx, ebx
        je public_51f626
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_51f62b
        public_51f626 : nop
        mov ecx, 1
        public_51f62b : nop
        cmp edx, ebx
        jne public_51f633
        xor eax, eax
        jmp public_51f638
        public_51f633 : nop
        sub eax, edx
        sar eax, 2
        public_51f638 : nop
        add eax, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], eax
        jge public_51f644
        xor eax, eax
        public_51f644 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_597c70
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_427730
        mov edx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        lea edx, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        public_51f6c4 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_51f725
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x38]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_51f765
        public_51f705 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_51f705
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 4
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        public_51f725 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_51f74f
        lea ebx, ds:[ebx]
        public_51f740 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_51f740
        public_51f74f : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_51f765
        public_51f758 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_51f758
        public_51f765 : nop
        add dword ptr ds : [esi+8], 4
        public_51f769 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x51f2c0)
    }
}

#undef public_51f41a
#undef public_51f41e
#undef public_51f440
#undef public_51f469
#undef public_51f46b
#undef public_51f499
#undef public_51f4e0
#undef public_51f4f6
#undef public_51f513
#undef public_51f524
#undef public_51f538
#undef public_51f53e
#undef public_51f586
#undef public_51f5ba
#undef public_51f5f0
#undef public_51f5f4
#undef public_51f626
#undef public_51f62b
#undef public_51f633
#undef public_51f638
#undef public_51f644
#undef public_51f6c4
#undef public_51f705
#undef public_51f725
#undef public_51f740
#undef public_51f74f
#undef public_51f758
#undef public_51f765
#undef public_51f769
