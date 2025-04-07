#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f60f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62f641c _public_62f641c
#define public_62f6443 _public_62f6443
#define public_62f6470 _public_62f6470
#define public_62f64e6 _public_62f64e6
#define public_62f655c _public_62f655c
#define public_62f6590 _public_62f6590
#define public_62f65a5 _public_62f65a5
#define public_62f65ba _public_62f65ba
#define public_62f65ca _public_62f65ca
#define public_62f660f _public_62f660f
#define public_62f6614 _public_62f6614
#define public_62f661c _public_62f661c
#define public_62f6621 _public_62f6621
#define public_62f6626 _public_62f6626
#define public_62f6632 _public_62f6632
#define public_62f66ab _public_62f66ab
#define public_62f66f0 _public_62f66f0
#define public_62f66ff _public_62f66ff
#define public_62f6714 _public_62f6714
#define public_62f6723 _public_62f6723
#define public_62f6730 _public_62f6730
#define public_62f673d _public_62f673d
#define public_62f6743 _public_62f6743
#define public_62f6746 _public_62f6746
#define public_62f676b _public_62f676b
#define public_62f676d _public_62f676d
#define public_62f6777 _public_62f6777

PROC_DECLARE(0x62f63d0, internal_62f63d0, public_62f63d0);
extern "C" NAKED register_t __cdecl internal_62f63d0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        push ebp
        mov dword ptr ss : [esp+0x14], esi
        call public_62f60f0
        test al, al
        jne public_62f676d
/*FIXUP push offset public_63a1b90 @0x62f63ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b90
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f641c
        push 0
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        mov al, 1
        fstp dword ptr ds : [esi+0xA0]
        pop esi
        pop ebp
        add esp, 0x10
        ret 4
/*FIXUP public_62f641c : nop
        push offset public_63a1b84 @0x62f641c*/
  FIXUP public_62f641c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b84
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f6443
        push 0
        call public_63105b0
        mov byte ptr ds : [esi+0xBA], al
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
/*FIXUP public_62f6443 : nop
        push offset public_63a1b78 @0x62f6443*/
  FIXUP public_62f6443 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b78
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f6470
        push 0
        call public_63108f0
        fmul dword ptr ds : [public_639d210]
        mov al, 1
        fstp dword ptr ds : [esi+0xA4]
        pop esi
        pop ebp
        add esp, 0x10
        ret 4
/*FIXUP public_62f6470 : nop
        push offset public_63a1b6c @0x62f6470*/
  FIXUP public_62f6470 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b6c
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f64e6
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0xA8]
        push 1
        mov ecx, ebp
        call public_63108f0
        fst dword ptr ds : [esi+0xAC]
        fsub dword ptr ds : [esi+0xA8]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62f676b
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 0x41
        je public_62f676b
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jnp public_62f676d
        mov byte ptr ds : [esi+0xB8], 1
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
/*FIXUP public_62f64e6 : nop
        push offset public_63a1b5c @0x62f64e6*/
  FIXUP public_62f64e6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b5c
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f655c
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0xB0]
        push 1
        mov ecx, ebp
        call public_63108f0
        fst dword ptr ds : [esi+0xB4]
        fsub dword ptr ds : [esi+0xB0]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62f676b
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 0x41
        je public_62f676b
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jnp public_62f676d
        mov byte ptr ds : [esi+0xB9], 1
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
/*FIXUP public_62f655c : nop
        push offset public_63a1b50 @0x62f655c*/
  FIXUP public_62f655c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b50
        call public_6310410
        test al, al
        je public_62f6777
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], 0
        call public_6310560
        test al, al
        jne public_62f676d
        push ebx
        push edi
        lea esp, ss:[esp]
        public_62f6590 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, ebp
        call public_6310a30
        mov ebx, eax
        mov esi, offset public_63eca40
        xor edi, edi
        public_62f65a5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62f65ba
        push eax
        push ebx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f661c
        public_62f65ba : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x1F8
        jb public_62f65a5
        xor esi, esi
        public_62f65ca : nop
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_62f6746
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0xC4]
        mov edx, dword ptr ds : [ecx+0xC8]
        lea esi, ds:[ecx+0xBC]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_62f66ab
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_62f660f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_62f6614
        public_62f660f : nop
        mov ecx, 1
        public_62f6614 : nop
        test edx, edx
        jne public_62f6621
        xor eax, eax
        jmp public_62f6626
        public_62f661c : nop
        mov esi, dword ptr ds : [esi+4]
        jmp public_62f65ca
        public_62f6621 : nop
        sub eax, edx
        sar eax, 2
        public_62f6626 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_62f6632
        xor eax, eax
        public_62f6632 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push edi
        push ecx
        mov ecx, esi
        call public_627f7b0
        lea edx, ss:[esp+0x10]
        push edx
        mov ebx, eax
        push 1
        push ebx
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[ebp+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        lea eax, ss:[ebp+eax*4+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x24]
        jmp public_62f6743
        public_62f66ab : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62f66ff
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62f673d
        lea esp, ss:[esp]
        public_62f66f0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62f66f0
        jmp public_62f673d
        public_62f66ff : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62f6723
        public_62f6714 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62f6714
        public_62f6723 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_62f673d
        lea esp, ss:[esp]
        public_62f6730 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62f6730
        public_62f673d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_62f6743 : nop
        mov dword ptr ds : [esi+8], eax
        public_62f6746 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6310560
        test al, al
        je public_62f6590
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
        public_62f676b : nop
        fstp st(0)
        public_62f676d : nop
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
        public_62f6777 : nop
        pop esi
        xor al, al
        pop ebp
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f63d0)
    }
}

#undef public_62f641c
#undef public_62f6443
#undef public_62f6470
#undef public_62f64e6
#undef public_62f655c
#undef public_62f6590
#undef public_62f65a5
#undef public_62f65ba
#undef public_62f65ca
#undef public_62f660f
#undef public_62f6614
#undef public_62f661c
#undef public_62f6621
#undef public_62f6626
#undef public_62f6632
#undef public_62f66ab
#undef public_62f66f0
#undef public_62f66ff
#undef public_62f6714
#undef public_62f6723
#undef public_62f6730
#undef public_62f673d
#undef public_62f6743
#undef public_62f6746
#undef public_62f676b
#undef public_62f676d
#undef public_62f6777
