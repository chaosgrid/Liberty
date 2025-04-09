#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411f70);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4cbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_5140c0);
CLANG_FORWARD_PROC_SYMBOL(public_514260);
CLANG_FORWARD_PROC_SYMBOL(public_5142e0);
CLANG_FORWARD_PROC_SYMBOL(public_514960);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_5163e0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_51640f _public_51640f
#define public_516415 _public_516415
#define public_516444 _public_516444
#define public_516471 _public_516471
#define public_516473 _public_516473
#define public_51648e _public_51648e
#define public_51649b _public_51649b
#define public_5164a2 _public_5164a2
#define public_5164b9 _public_5164b9
#define public_5164ce _public_5164ce
#define public_5164da _public_5164da
#define public_5164dc _public_5164dc
#define public_516575 _public_516575
#define public_5165cf _public_5165cf
#define public_5165ee _public_5165ee
#define public_51661f _public_51661f
#define public_516621 _public_516621
#define public_51666d _public_51666d
#define public_51668a _public_51668a
#define public_516694 _public_516694
#define public_5166bb _public_5166bb
#define public_5166bd _public_5166bd
#define public_5166fa _public_5166fa
#define public_5166fc _public_5166fc
#define public_516742 _public_516742
#define public_516799 _public_516799
#define public_5167c0 _public_5167c0
#define public_5167c5 _public_5167c5
#define public_5167c9 _public_5167c9
#define public_5167f7 _public_5167f7
#define public_516825 _public_516825
#define public_516842 _public_516842
#define public_516857 _public_516857
#define public_516859 _public_516859
#define public_5168d2 _public_5168d2
#define public_5168dc _public_5168dc
#define public_5168e2 _public_5168e2
#define public_5168e6 _public_5168e6
#define public_516902 _public_516902

PROC_DECLARE(0x5163e0, internal_5163e0, public_5163e0);
extern "C" NAKED register_t __cdecl internal_5163e0()
{
    __asm
    {
        sub esp, 0x140
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        xor ecx, ecx
        xor ebx, ebx
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], 0x4B189680
        je public_516902
        push ebp
        jmp public_516415
        public_51640f : nop
        mov esi, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        public_516415 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        push 1
        push eax
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x30], ecx
        call public_5416c0
        mov ebp, eax
        add esp, 8
        cmp ebp, ebx
        jne public_516444
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        jmp public_5164b9
        public_516444 : nop
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebx
        je public_516471
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_516471
        add eax, 0xC
        cmp eax, ebx
        je public_516471
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_516471
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_516473
        public_516471 : nop
        xor eax, eax
        public_516473 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, ebx
        jne public_51648e
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_5164a2
        public_51648e : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        jne public_51649b
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_5164a2
        public_51649b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        public_5164a2 : nop
        cmp dword ptr ss : [ebp+0x160], edi
        je public_5164ce
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        public_5164b9 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        jmp public_5168e6
        public_5164ce : nop
        mov ecx, dword ptr ds : [edi+0x14]
        cmp ecx, ebx
        je public_5164da
        add ecx, 0xFFFFFFF8
        jmp public_5164dc
        public_5164da : nop
        xor ecx, ecx
        public_5164dc : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov esi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x48]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x48]
        mov al, byte ptr ss : [ebp+0x184]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        sar ecx, 1
        sub edx, ecx
        test al, al
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jns public_516575
        fld dword ptr ds : [public_5db7d8]
        jmp public_5165cf
        public_516575 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x18]
        fmulp 
        public_5165cf : nop
        fcom dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x24], 0x42C80000
        fnstsw ax
        test ah, 0x41
        jne public_5165ee
        fld dword ptr ss : [esp+0x1C]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x24]
        public_5165ee : nop
        mov ecx, dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [ecx+0x94]
        fnstsw ax
        test ah, 5
        jp public_5167c9
        call public_54baf0
        cmp ebp, eax
        mov eax, dword ptr ds : [edi+0x14]
        sete bl
        test eax, eax
        je public_51661f
        add eax, 0xFFFFFFF8
        jmp public_516621
        public_51661f : nop
        xor eax, eax
        public_516621 : nop
        push eax
        call public_5140c0
        mov edi, eax
        mov al, byte ptr ss : [ebp+0x185]
        add esp, 4
        test al, 2
        jne public_516694
        or al, 3
        test bl, bl
        mov byte ptr ss : [ebp+0x185], al
        je public_51666d
        lea esi, ds:[edi+0x54]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_51666d
        push 0
        lea ecx, ss:[esp+0xC4]
        call public_4b5150
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        push ebp
        push esi
        jmp public_51668a
        public_51666d : nop
        push 0
        lea ecx, ss:[esp+0xF4]
        call public_4b5150
        push eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
        push eax
        push ebp
        add edi, 0x68
        push edi
        public_51668a : nop
        mov ecx, offset public_674c60
        call public_514070
        public_516694 : nop
        mov al, byte ptr ds : [public_675200]
        test al, al
        je public_5167c5
        call public_54baf0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov eax, dword ptr ds : [ecx+0x14]
        sete bl
        test eax, eax
        je public_5166bb
        add eax, 0xFFFFFFF8
        jmp public_5166bd
        public_5166bb : nop
        xor eax, eax
        public_5166bd : nop
        push eax
        call public_5140c0
        mov esi, eax
        mov al, byte ptr ss : [ebp+0x184]
        add esp, 4
        test al, 0x20
        mov dword ptr ss : [esp+0x18], esi
        jne public_5167c5
        or al, 0x20
        test bl, bl
        mov byte ptr ss : [ebp+0x184], al
        je public_516799
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x14]
        test ecx, ecx
        je public_5166fa
        add ecx, 0xFFFFFFF8
        jmp public_5166fc
        public_5166fa : nop
        xor ecx, ecx
        public_5166fc : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        test byte ptr ss : [ebp+0x184], 1
        mov ecx, 9
        lea edi, ss:[esp+0x60]
        rep movsd
        jne public_516742
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea ecx, ss:[esp+0x64]
        call public_4cbfa0
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, eax
        call public_411350
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x64]
        call public_411f70
        public_516742 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xA8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xAC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, 9
        lea esi, ss:[esp+0x60]
        lea edi, ss:[esp+0x84]
        rep movsd
        lea ecx, ss:[ebp+0x174]
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        push 0xFFFFFFFF
        push ebp
        add eax, 0x58
        push eax
        mov ecx, offset public_6751cc
        jmp public_5167c0
        public_516799 : nop
        lea ecx, ss:[ebp+0x164]
        push ecx
        lea ecx, ss:[esp+0x124]
        call public_4b5150
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        push ebp
        add esi, 0x6C
        push esi
        mov ecx, offset public_674c60
        public_5167c0 : nop
        call public_514070
        public_5167c5 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_5167c9 : nop
        mov al, byte ptr ss : [ebp+0x184]
        test al, al
        js public_5167f7
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_5168e6
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], ebp
        jmp public_5168e6
        public_5167f7 : nop
        mov ecx, edi
        call public_514260
        fld dword ptr ss : [esp+0x24]
        mov edi, eax
        test edi, edi
        je public_516825
        mov ecx, dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [ecx+0x9C]
        fnstsw ax
        test ah, 5
        jp public_516842
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        call public_514960
        jmp public_516842
        public_516825 : nop
        mov edx, dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [edx+0x98]
        fnstsw ax
        test ah, 5
        jp public_516842
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        push ebp
        call public_514bf0
        public_516842 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        mov byte ptr ss : [esp+0x17], 1
        je public_516857
        lea esi, ds:[eax-8]
        jmp public_516859
        public_516857 : nop
        xor esi, esi
        public_516859 : nop
        mov edx, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x17]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x12C]
        mov al, byte ptr ss : [ebp+0x184]
        mov cl, byte ptr ss : [esp+0x17]
        shr al, 1
        and al, 1
        cmp al, cl
        je public_5168e2
        mov ecx, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ds:[esi+8]
        call public_516f70
        xor eax, eax
        cmp edi, eax
        mov dword ptr ss : [ebp+0x160], eax
        je public_5168dc
        xor eax, eax
        mov al, byte ptr ds : [esi+0x1C]
        push 1
        push eax
        push edi
        call public_515200
        mov esi, eax
        mov al, byte ptr ss : [ebp+0x184]
        add esp, 0xC
        test al, 0x20
        je public_5168d2
        call public_54baf0
        cmp ebp, eax
        jne public_5168d2
        or byte ptr ss : [ebp+0x184], 0x40
        public_5168d2 : nop
        push ebp
        mov ecx, esi
        call public_5142e0
        jmp public_5168e2
        public_5168dc : nop
        mov dword ptr ss : [ebp+0x184], eax
        public_5168e2 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_5168e6 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [edi+0xC], ecx
        jne public_51640f
        mov eax, dword ptr ss : [esp+0x2C]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x140
        ret 
        public_516902 : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 0x140
        ret 
        UNREACHABLE_TRAP(0x5163e0)
    }
}

#undef public_51640f
#undef public_516415
#undef public_516444
#undef public_516471
#undef public_516473
#undef public_51648e
#undef public_51649b
#undef public_5164a2
#undef public_5164b9
#undef public_5164ce
#undef public_5164da
#undef public_5164dc
#undef public_516575
#undef public_5165cf
#undef public_5165ee
#undef public_51661f
#undef public_516621
#undef public_51666d
#undef public_51668a
#undef public_516694
#undef public_5166bb
#undef public_5166bd
#undef public_5166fa
#undef public_5166fc
#undef public_516742
#undef public_516799
#undef public_5167c0
#undef public_5167c5
#undef public_5167c9
#undef public_5167f7
#undef public_516825
#undef public_516842
#undef public_516857
#undef public_516859
#undef public_5168d2
#undef public_5168dc
#undef public_5168e2
#undef public_5168e6
#undef public_516902
