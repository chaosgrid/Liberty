#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa3494 _public_6fa3494
#define public_6fa34b2 _public_6fa34b2
#define public_6fa34bd _public_6fa34bd
#define public_6fa34d0 _public_6fa34d0
#define public_6fa34de _public_6fa34de
#define public_6fa34fa _public_6fa34fa
#define public_6fa3511 _public_6fa3511
#define public_6fa351e _public_6fa351e
#define public_6fa3529 _public_6fa3529
#define public_6fa352c _public_6fa352c
#define public_6fa3550 _public_6fa3550
#define public_6fa355b _public_6fa355b
#define public_6fa355e _public_6fa355e
#define public_6fa3573 _public_6fa3573
#define public_6fa3581 _public_6fa3581
#define public_6fa358f _public_6fa358f
#define public_6fa3592 _public_6fa3592
#define public_6fa35a6 _public_6fa35a6
#define public_6fa35b5 _public_6fa35b5
#define public_6fa35c4 _public_6fa35c4
#define public_6fa35c7 _public_6fa35c7
#define public_6fa35e7 _public_6fa35e7
#define public_6fa3632 _public_6fa3632
#define public_6fa3645 _public_6fa3645
#define public_6fa3650 _public_6fa3650
#define public_6fa3653 _public_6fa3653
#define public_6fa365e _public_6fa365e
#define public_6fa3677 _public_6fa3677
#define public_6fa36a7 _public_6fa36a7
#define public_6fa36c1 _public_6fa36c1
#define public_6fa36f0 _public_6fa36f0
#define public_6fa3703 _public_6fa3703
#define public_6fa3710 _public_6fa3710
#define public_6fa3712 _public_6fa3712
#define public_6fa371d _public_6fa371d
#define public_6fa373a _public_6fa373a
#define public_6fa3755 _public_6fa3755
#define public_6fa3762 _public_6fa3762
#define public_6fa3764 _public_6fa3764
#define public_6fa3770 _public_6fa3770
#define public_6fa37a6 _public_6fa37a6
#define public_6fa37be _public_6fa37be
#define public_6fa37ce _public_6fa37ce
#define public_6fa37d8 _public_6fa37d8
#define public_6fa3804 _public_6fa3804
#define public_6fa3817 _public_6fa3817
#define public_6fa3822 _public_6fa3822
#define public_6fa3825 _public_6fa3825
#define public_6fa382f _public_6fa382f
#define public_6fa3864 _public_6fa3864
#define public_6fa3877 _public_6fa3877
#define public_6fa3884 _public_6fa3884
#define public_6fa3886 _public_6fa3886
#define public_6fa3889 _public_6fa3889
#define public_6fa388c _public_6fa388c
#define public_6fa3896 _public_6fa3896

PROC_DECLARE(0x6fa3470, internal_6fa3470, public_6fa3470);
extern "C" NAKED register_t __cdecl internal_6fa3470()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6fa3b80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6fa34b2
        mov eax, dword ptr ds : [esi+8]
        public_6fa3494 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6fa3550
        mov dword ptr ds : [ecx+4], eax
        jmp public_6fa355e
        public_6fa34b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6fa34bd
        mov eax, edx
        jmp public_6fa3494
        public_6fa34bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        jne public_6fa34de
        lea esp, ss:[esp]
        public_6fa34d0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        je public_6fa34d0
        public_6fa34de : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6fa3494
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa34fa
        mov dword ptr ds : [eax+4], ecx
        jmp public_6fa3511
        public_6fa34fa : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6fa3511 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6fa351e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa352c
        public_6fa351e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6fa3529
        mov dword ptr ds : [edx], ecx
        jmp public_6fa352c
        public_6fa3529 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa352c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x124]
        mov dl, byte ptr ds : [ecx+0x124]
        mov byte ptr ds : [ecx+0x124], bl
        mov byte ptr ds : [esi+0x124], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6fa35c7
        public_6fa3550 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6fa355b
        mov dword ptr ds : [ecx], eax
        jmp public_6fa355e
        public_6fa355b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6fa355e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6fa3592
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa3573
        mov edx, dword ptr ds : [esi+4]
        jmp public_6fa358f
        public_6fa3573 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x125]
        test bl, bl
        mov edx, eax
        jne public_6fa358f
        public_6fa3581 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x125]
        test bl, bl
        je public_6fa3581
        public_6fa358f : nop
        mov dword ptr ss : [ebp], edx
        public_6fa3592 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6fa35c7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa35a6
        mov edx, dword ptr ds : [esi+4]
        jmp public_6fa35c4
        public_6fa35a6 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x125]
        test bl, bl
        mov edx, eax
        jne public_6fa35c4
        public_6fa35b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x125]
        test bl, bl
        je public_6fa35b5
        public_6fa35c4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6fa35c7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x124]
        mov bl, 1
        cmp cl, bl
        jne public_6fa3896
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6fa388c
        public_6fa35e7 : nop
        cmp byte ptr ds : [eax+0x124], bl
        jne public_6fa388c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa36c1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x124]
        test dl, dl
        jne public_6fa365e
        mov byte ptr ds : [ecx+0x124], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x124], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa3632
        mov dword ptr ds : [esi+4], ecx
        public_6fa3632 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa3645
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa3653
        public_6fa3645 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa3650
        mov dword ptr ds : [esi], edx
        jmp public_6fa3653
        public_6fa3650 : nop
        mov dword ptr ds : [esi+8], edx
        public_6fa3653 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6fa365e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x124], bl
        jne public_6fa3677
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x124], bl
        je public_6fa373a
        public_6fa3677 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x124], bl
        jne public_6fa3770
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x124], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x124], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa36a7
        mov dword ptr ds : [esi+4], ecx
        public_6fa36a7 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa3755
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa3764
        public_6fa36c1 : nop
        mov dl, byte ptr ds : [ecx+0x124]
        test dl, dl
        jne public_6fa371d
        mov byte ptr ds : [ecx+0x124], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa36f0
        mov dword ptr ds : [esi+4], ecx
        public_6fa36f0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa3703
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa3712
        public_6fa3703 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa3710
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa3712
        public_6fa3710 : nop
        mov dword ptr ds : [esi], edx
        public_6fa3712 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6fa371d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x124], bl
        jne public_6fa37d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x124], bl
        jne public_6fa37d8
        public_6fa373a : nop
        mov byte ptr ds : [ecx+0x124], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa35e7
        jmp public_6fa388c
        public_6fa3755 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa3762
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa3764
        public_6fa3762 : nop
        mov dword ptr ds : [esi], edx
        public_6fa3764 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6fa3770 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x124]
        mov byte ptr ds : [ecx+0x124], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x124], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x124], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa37a6
        mov dword ptr ds : [esi+4], ecx
        public_6fa37a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa37be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa3889
        public_6fa37be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa37ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa3889
        public_6fa37ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa3889
        public_6fa37d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x124], bl
        jne public_6fa382f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x124], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x124], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa3804
        mov dword ptr ds : [esi+4], ecx
        public_6fa3804 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa3817
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa3825
        public_6fa3817 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa3822
        mov dword ptr ds : [esi], edx
        jmp public_6fa3825
        public_6fa3822 : nop
        mov dword ptr ds : [esi+8], edx
        public_6fa3825 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6fa382f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x124]
        mov byte ptr ds : [ecx+0x124], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x124], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x124], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa3864
        mov dword ptr ds : [esi+4], ecx
        public_6fa3864 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa3877
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa3886
        public_6fa3877 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa3884
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa3886
        public_6fa3884 : nop
        mov dword ptr ds : [esi], edx
        public_6fa3886 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa3889 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa388c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x124], bl
        public_6fa3896 : nop
        lea ecx, ds:[esi+0xC]
        call public_6f9f4a0
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6fa3470)
    }
}

#undef public_6fa3494
#undef public_6fa34b2
#undef public_6fa34bd
#undef public_6fa34d0
#undef public_6fa34de
#undef public_6fa34fa
#undef public_6fa3511
#undef public_6fa351e
#undef public_6fa3529
#undef public_6fa352c
#undef public_6fa3550
#undef public_6fa355b
#undef public_6fa355e
#undef public_6fa3573
#undef public_6fa3581
#undef public_6fa358f
#undef public_6fa3592
#undef public_6fa35a6
#undef public_6fa35b5
#undef public_6fa35c4
#undef public_6fa35c7
#undef public_6fa35e7
#undef public_6fa3632
#undef public_6fa3645
#undef public_6fa3650
#undef public_6fa3653
#undef public_6fa365e
#undef public_6fa3677
#undef public_6fa36a7
#undef public_6fa36c1
#undef public_6fa36f0
#undef public_6fa3703
#undef public_6fa3710
#undef public_6fa3712
#undef public_6fa371d
#undef public_6fa373a
#undef public_6fa3755
#undef public_6fa3762
#undef public_6fa3764
#undef public_6fa3770
#undef public_6fa37a6
#undef public_6fa37be
#undef public_6fa37ce
#undef public_6fa37d8
#undef public_6fa3804
#undef public_6fa3817
#undef public_6fa3822
#undef public_6fa3825
#undef public_6fa382f
#undef public_6fa3864
#undef public_6fa3877
#undef public_6fa3884
#undef public_6fa3886
#undef public_6fa3889
#undef public_6fa388c
#undef public_6fa3896
