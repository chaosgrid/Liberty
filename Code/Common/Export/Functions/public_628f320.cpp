#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289850);
CLANG_FORWARD_PROC_SYMBOL(public_628f320);
CLANG_FORWARD_PROC_SYMBOL(public_6290480);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628f344 _public_628f344
#define public_628f362 _public_628f362
#define public_628f36d _public_628f36d
#define public_628f376 _public_628f376
#define public_628f381 _public_628f381
#define public_628f39d _public_628f39d
#define public_628f3b4 _public_628f3b4
#define public_628f3c1 _public_628f3c1
#define public_628f3cc _public_628f3cc
#define public_628f3cf _public_628f3cf
#define public_628f3e7 _public_628f3e7
#define public_628f3f2 _public_628f3f2
#define public_628f3f5 _public_628f3f5
#define public_628f40a _public_628f40a
#define public_628f415 _public_628f415
#define public_628f420 _public_628f420
#define public_628f423 _public_628f423
#define public_628f437 _public_628f437
#define public_628f443 _public_628f443
#define public_628f44f _public_628f44f
#define public_628f452 _public_628f452
#define public_628f470 _public_628f470
#define public_628f4af _public_628f4af
#define public_628f4c2 _public_628f4c2
#define public_628f4cd _public_628f4cd
#define public_628f4d0 _public_628f4d0
#define public_628f4db _public_628f4db
#define public_628f4ee _public_628f4ee
#define public_628f515 _public_628f515
#define public_628f52f _public_628f52f
#define public_628f555 _public_628f555
#define public_628f568 _public_628f568
#define public_628f575 _public_628f575
#define public_628f577 _public_628f577
#define public_628f582 _public_628f582
#define public_628f599 _public_628f599
#define public_628f5b1 _public_628f5b1
#define public_628f5be _public_628f5be
#define public_628f5c0 _public_628f5c0
#define public_628f5cc _public_628f5cc
#define public_628f5f6 _public_628f5f6
#define public_628f60e _public_628f60e
#define public_628f61e _public_628f61e
#define public_628f628 _public_628f628
#define public_628f64b _public_628f64b
#define public_628f65e _public_628f65e
#define public_628f669 _public_628f669
#define public_628f66c _public_628f66c
#define public_628f676 _public_628f676
#define public_628f69f _public_628f69f
#define public_628f6b2 _public_628f6b2
#define public_628f6bf _public_628f6bf
#define public_628f6c1 _public_628f6c1
#define public_628f6c4 _public_628f6c4
#define public_628f6c7 _public_628f6c7
#define public_628f6ce _public_628f6ce

PROC_DECLARE(0x628f320, internal_628f320, public_628f320);
extern "C" NAKED register_t __cdecl internal_628f320()
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
        call public_6290480
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_628f362
        mov eax, dword ptr ds : [esi+8]
        public_628f344 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_628f3e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_628f3f5
        public_628f362 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_628f36d
        mov eax, edx
        jmp public_628f344
        public_628f36d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_628f381
        public_628f376 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_628f376
        public_628f381 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_628f344
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_628f39d
        mov dword ptr ds : [eax+4], ecx
        jmp public_628f3b4
        public_628f39d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_628f3b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_628f3c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_628f3cf
        public_628f3c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_628f3cc
        mov dword ptr ds : [edx], ecx
        jmp public_628f3cf
        public_628f3cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_628f3cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x54]
        mov dl, byte ptr ds : [ecx+0x54]
        mov byte ptr ds : [ecx+0x54], bl
        mov byte ptr ds : [esi+0x54], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_628f452
        public_628f3e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_628f3f2
        mov dword ptr ds : [ecx], eax
        jmp public_628f3f5
        public_628f3f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_628f3f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_628f423
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_628f40a
        mov edx, dword ptr ds : [esi+4]
        jmp public_628f420
        public_628f40a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_628f420
        public_628f415 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_628f415
        public_628f420 : nop
        mov dword ptr ss : [ebp], edx
        public_628f423 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_628f452
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_628f437
        mov edx, dword ptr ds : [esi+4]
        jmp public_628f44f
        public_628f437 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_628f44f
        public_628f443 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_628f443
        public_628f44f : nop
        mov dword ptr ss : [ebp+8], edx
        public_628f452 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x54]
        mov bl, 1
        cmp cl, bl
        jne public_628f6ce
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_628f6c7
        nop 
        public_628f470 : nop
        cmp byte ptr ds : [eax+0x54], bl
        jne public_628f6c7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_628f52f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_628f4db
        mov byte ptr ds : [ecx+0x54], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f4af
        mov dword ptr ds : [esi+4], ecx
        public_628f4af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f4c2
        mov dword ptr ds : [esi+4], edx
        jmp public_628f4d0
        public_628f4c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_628f4cd
        mov dword ptr ds : [esi], edx
        jmp public_628f4d0
        public_628f4cd : nop
        mov dword ptr ds : [esi+8], edx
        public_628f4d0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_628f4db : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_628f4ee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        je public_628f599
        public_628f4ee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_628f5cc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f515
        mov dword ptr ds : [esi+4], ecx
        public_628f515 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f5b1
        mov dword ptr ds : [esi+4], edx
        jmp public_628f5c0
        public_628f52f : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_628f582
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f555
        mov dword ptr ds : [esi+4], ecx
        public_628f555 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f568
        mov dword ptr ds : [esi+4], edx
        jmp public_628f577
        public_628f568 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_628f575
        mov dword ptr ds : [esi+8], edx
        jmp public_628f577
        public_628f575 : nop
        mov dword ptr ds : [esi], edx
        public_628f577 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_628f582 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_628f628
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_628f628
        public_628f599 : nop
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_628f470
        jmp public_628f6c7
        public_628f5b1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_628f5be
        mov dword ptr ds : [esi+8], edx
        jmp public_628f5c0
        public_628f5be : nop
        mov dword ptr ds : [esi], edx
        public_628f5c0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_628f5cc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f5f6
        mov dword ptr ds : [esi+4], ecx
        public_628f5f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f60e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_628f6c4
        public_628f60e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_628f61e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_628f6c4
        public_628f61e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_628f6c4
        public_628f628 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_628f676
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f64b
        mov dword ptr ds : [esi+4], ecx
        public_628f64b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f65e
        mov dword ptr ds : [esi+4], edx
        jmp public_628f66c
        public_628f65e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_628f669
        mov dword ptr ds : [esi], edx
        jmp public_628f66c
        public_628f669 : nop
        mov dword ptr ds : [esi+8], edx
        public_628f66c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_628f676 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_628f69f
        mov dword ptr ds : [esi+4], ecx
        public_628f69f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_628f6b2
        mov dword ptr ds : [esi+4], edx
        jmp public_628f6c1
        public_628f6b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_628f6bf
        mov dword ptr ds : [esi+8], edx
        jmp public_628f6c1
        public_628f6bf : nop
        mov dword ptr ds : [esi], edx
        public_628f6c1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_628f6c4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_628f6c7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x54], bl
        public_628f6ce : nop
        lea ecx, ds:[esi+0xC]
        call public_6289850
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x628f320)
    }
}

#undef public_628f344
#undef public_628f362
#undef public_628f36d
#undef public_628f376
#undef public_628f381
#undef public_628f39d
#undef public_628f3b4
#undef public_628f3c1
#undef public_628f3cc
#undef public_628f3cf
#undef public_628f3e7
#undef public_628f3f2
#undef public_628f3f5
#undef public_628f40a
#undef public_628f415
#undef public_628f420
#undef public_628f423
#undef public_628f437
#undef public_628f443
#undef public_628f44f
#undef public_628f452
#undef public_628f470
#undef public_628f4af
#undef public_628f4c2
#undef public_628f4cd
#undef public_628f4d0
#undef public_628f4db
#undef public_628f4ee
#undef public_628f515
#undef public_628f52f
#undef public_628f555
#undef public_628f568
#undef public_628f575
#undef public_628f577
#undef public_628f582
#undef public_628f599
#undef public_628f5b1
#undef public_628f5be
#undef public_628f5c0
#undef public_628f5cc
#undef public_628f5f6
#undef public_628f60e
#undef public_628f61e
#undef public_628f628
#undef public_628f64b
#undef public_628f65e
#undef public_628f669
#undef public_628f66c
#undef public_628f676
#undef public_628f69f
#undef public_628f6b2
#undef public_628f6bf
#undef public_628f6c1
#undef public_628f6c4
#undef public_628f6c7
#undef public_628f6ce
