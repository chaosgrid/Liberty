#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e80);
CLANG_FORWARD_PROC_SYMBOL(public_6c34380);
CLANG_FORWARD_PROC_SYMBOL(public_6c34a60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c343a4 _public_6c343a4
#define public_6c343c2 _public_6c343c2
#define public_6c343cd _public_6c343cd
#define public_6c343d6 _public_6c343d6
#define public_6c343e1 _public_6c343e1
#define public_6c343fd _public_6c343fd
#define public_6c34414 _public_6c34414
#define public_6c34421 _public_6c34421
#define public_6c3442c _public_6c3442c
#define public_6c3442f _public_6c3442f
#define public_6c34447 _public_6c34447
#define public_6c34452 _public_6c34452
#define public_6c34455 _public_6c34455
#define public_6c3446a _public_6c3446a
#define public_6c34475 _public_6c34475
#define public_6c34480 _public_6c34480
#define public_6c34483 _public_6c34483
#define public_6c34497 _public_6c34497
#define public_6c344a3 _public_6c344a3
#define public_6c344af _public_6c344af
#define public_6c344b2 _public_6c344b2
#define public_6c344d0 _public_6c344d0
#define public_6c3450f _public_6c3450f
#define public_6c34522 _public_6c34522
#define public_6c3452d _public_6c3452d
#define public_6c34530 _public_6c34530
#define public_6c3453b _public_6c3453b
#define public_6c3454e _public_6c3454e
#define public_6c34575 _public_6c34575
#define public_6c3458f _public_6c3458f
#define public_6c345b5 _public_6c345b5
#define public_6c345c8 _public_6c345c8
#define public_6c345d5 _public_6c345d5
#define public_6c345d7 _public_6c345d7
#define public_6c345e2 _public_6c345e2
#define public_6c345f9 _public_6c345f9
#define public_6c34611 _public_6c34611
#define public_6c3461e _public_6c3461e
#define public_6c34620 _public_6c34620
#define public_6c3462c _public_6c3462c
#define public_6c34656 _public_6c34656
#define public_6c3466e _public_6c3466e
#define public_6c3467e _public_6c3467e
#define public_6c34688 _public_6c34688
#define public_6c346ab _public_6c346ab
#define public_6c346be _public_6c346be
#define public_6c346c9 _public_6c346c9
#define public_6c346cc _public_6c346cc
#define public_6c346d6 _public_6c346d6
#define public_6c346ff _public_6c346ff
#define public_6c34712 _public_6c34712
#define public_6c3471f _public_6c3471f
#define public_6c34721 _public_6c34721
#define public_6c34724 _public_6c34724
#define public_6c34727 _public_6c34727
#define public_6c3472e _public_6c3472e

PROC_DECLARE(0x6c34380, internal_6c34380, public_6c34380);
extern "C" NAKED register_t __cdecl internal_6c34380()
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
        call public_6c34a60
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6c343c2
        mov eax, dword ptr ds : [esi+8]
        public_6c343a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6c34447
        mov dword ptr ds : [ecx+4], eax
        jmp public_6c34455
        public_6c343c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6c343cd
        mov eax, edx
        jmp public_6c343a4
        public_6c343cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6c343e1
        public_6c343d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6c343d6
        public_6c343e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6c343a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c343fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6c34414
        public_6c343fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6c34414 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6c34421
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c3442f
        public_6c34421 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6c3442c
        mov dword ptr ds : [edx], ecx
        jmp public_6c3442f
        public_6c3442c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c3442f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6c344b2
        public_6c34447 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6c34452
        mov dword ptr ds : [ecx], eax
        jmp public_6c34455
        public_6c34452 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6c34455 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6c34483
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c3446a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c34480
        public_6c3446a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6c34480
        public_6c34475 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6c34475
        public_6c34480 : nop
        mov dword ptr ss : [ebp], edx
        public_6c34483 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6c344b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c34497
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c344af
        public_6c34497 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6c344af
        public_6c344a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6c344a3
        public_6c344af : nop
        mov dword ptr ss : [ebp+8], edx
        public_6c344b2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_6c3472e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6c34727
        nop 
        public_6c344d0 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6c34727
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c3458f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6c3453b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c3450f
        mov dword ptr ds : [esi+4], ecx
        public_6c3450f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c34522
        mov dword ptr ds : [esi+4], edx
        jmp public_6c34530
        public_6c34522 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c3452d
        mov dword ptr ds : [esi], edx
        jmp public_6c34530
        public_6c3452d : nop
        mov dword ptr ds : [esi+8], edx
        public_6c34530 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6c3453b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6c3454e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6c345f9
        public_6c3454e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6c3462c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c34575
        mov dword ptr ds : [esi+4], ecx
        public_6c34575 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c34611
        mov dword ptr ds : [esi+4], edx
        jmp public_6c34620
        public_6c3458f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6c345e2
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c345b5
        mov dword ptr ds : [esi+4], ecx
        public_6c345b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c345c8
        mov dword ptr ds : [esi+4], edx
        jmp public_6c345d7
        public_6c345c8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c345d5
        mov dword ptr ds : [esi+8], edx
        jmp public_6c345d7
        public_6c345d5 : nop
        mov dword ptr ds : [esi], edx
        public_6c345d7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6c345e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6c34688
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6c34688
        public_6c345f9 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c344d0
        jmp public_6c34727
        public_6c34611 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c3461e
        mov dword ptr ds : [esi+8], edx
        jmp public_6c34620
        public_6c3461e : nop
        mov dword ptr ds : [esi], edx
        public_6c34620 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6c3462c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c34656
        mov dword ptr ds : [esi+4], ecx
        public_6c34656 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c3466e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c34724
        public_6c3466e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c3467e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c34724
        public_6c3467e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c34724
        public_6c34688 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6c346d6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c346ab
        mov dword ptr ds : [esi+4], ecx
        public_6c346ab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c346be
        mov dword ptr ds : [esi+4], edx
        jmp public_6c346cc
        public_6c346be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c346c9
        mov dword ptr ds : [esi], edx
        jmp public_6c346cc
        public_6c346c9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6c346cc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6c346d6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c346ff
        mov dword ptr ds : [esi+4], ecx
        public_6c346ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c34712
        mov dword ptr ds : [esi+4], edx
        jmp public_6c34721
        public_6c34712 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c3471f
        mov dword ptr ds : [esi+8], edx
        jmp public_6c34721
        public_6c3471f : nop
        mov dword ptr ds : [esi], edx
        public_6c34721 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c34724 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c34727 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_6c3472e : nop
        lea ecx, ds:[esi+0x10]
        call public_6c31e80
        push esi
        call public_6c34ea0
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
        UNREACHABLE_TRAP(0x6c34380)
    }
}

#undef public_6c343a4
#undef public_6c343c2
#undef public_6c343cd
#undef public_6c343d6
#undef public_6c343e1
#undef public_6c343fd
#undef public_6c34414
#undef public_6c34421
#undef public_6c3442c
#undef public_6c3442f
#undef public_6c34447
#undef public_6c34452
#undef public_6c34455
#undef public_6c3446a
#undef public_6c34475
#undef public_6c34480
#undef public_6c34483
#undef public_6c34497
#undef public_6c344a3
#undef public_6c344af
#undef public_6c344b2
#undef public_6c344d0
#undef public_6c3450f
#undef public_6c34522
#undef public_6c3452d
#undef public_6c34530
#undef public_6c3453b
#undef public_6c3454e
#undef public_6c34575
#undef public_6c3458f
#undef public_6c345b5
#undef public_6c345c8
#undef public_6c345d5
#undef public_6c345d7
#undef public_6c345e2
#undef public_6c345f9
#undef public_6c34611
#undef public_6c3461e
#undef public_6c34620
#undef public_6c3462c
#undef public_6c34656
#undef public_6c3466e
#undef public_6c3467e
#undef public_6c34688
#undef public_6c346ab
#undef public_6c346be
#undef public_6c346c9
#undef public_6c346cc
#undef public_6c346d6
#undef public_6c346ff
#undef public_6c34712
#undef public_6c3471f
#undef public_6c34721
#undef public_6c34724
#undef public_6c34727
#undef public_6c3472e
