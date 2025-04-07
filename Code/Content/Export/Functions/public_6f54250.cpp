#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f502e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54250);
CLANG_FORWARD_PROC_SYMBOL(public_6f55260);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f54274 _public_6f54274
#define public_6f54292 _public_6f54292
#define public_6f5429d _public_6f5429d
#define public_6f542b0 _public_6f542b0
#define public_6f542be _public_6f542be
#define public_6f542da _public_6f542da
#define public_6f542f1 _public_6f542f1
#define public_6f542fe _public_6f542fe
#define public_6f54309 _public_6f54309
#define public_6f5430c _public_6f5430c
#define public_6f54330 _public_6f54330
#define public_6f5433b _public_6f5433b
#define public_6f5433e _public_6f5433e
#define public_6f54353 _public_6f54353
#define public_6f54361 _public_6f54361
#define public_6f5436f _public_6f5436f
#define public_6f54372 _public_6f54372
#define public_6f54386 _public_6f54386
#define public_6f54395 _public_6f54395
#define public_6f543a4 _public_6f543a4
#define public_6f543a7 _public_6f543a7
#define public_6f543c7 _public_6f543c7
#define public_6f54412 _public_6f54412
#define public_6f54425 _public_6f54425
#define public_6f54430 _public_6f54430
#define public_6f54433 _public_6f54433
#define public_6f5443e _public_6f5443e
#define public_6f54457 _public_6f54457
#define public_6f54487 _public_6f54487
#define public_6f544a1 _public_6f544a1
#define public_6f544d0 _public_6f544d0
#define public_6f544e3 _public_6f544e3
#define public_6f544f0 _public_6f544f0
#define public_6f544f2 _public_6f544f2
#define public_6f544fd _public_6f544fd
#define public_6f5451a _public_6f5451a
#define public_6f54535 _public_6f54535
#define public_6f54542 _public_6f54542
#define public_6f54544 _public_6f54544
#define public_6f54550 _public_6f54550
#define public_6f54586 _public_6f54586
#define public_6f5459e _public_6f5459e
#define public_6f545ae _public_6f545ae
#define public_6f545b8 _public_6f545b8
#define public_6f545e4 _public_6f545e4
#define public_6f545f7 _public_6f545f7
#define public_6f54602 _public_6f54602
#define public_6f54605 _public_6f54605
#define public_6f5460f _public_6f5460f
#define public_6f54644 _public_6f54644
#define public_6f54657 _public_6f54657
#define public_6f54664 _public_6f54664
#define public_6f54666 _public_6f54666
#define public_6f54669 _public_6f54669
#define public_6f5466c _public_6f5466c
#define public_6f54676 _public_6f54676

PROC_DECLARE(0x6f54250, internal_6f54250, public_6f54250);
extern "C" NAKED register_t __cdecl internal_6f54250()
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
        call public_6f55260
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f54292
        mov eax, dword ptr ds : [esi+8]
        public_6f54274 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f54330
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f5433e
        public_6f54292 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f5429d
        mov eax, edx
        jmp public_6f54274
        public_6f5429d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        jne public_6f542be
        lea esp, ss:[esp]
        public_6f542b0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        je public_6f542b0
        public_6f542be : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f54274
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f542da
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f542f1
        public_6f542da : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f542f1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f542fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f5430c
        public_6f542fe : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f54309
        mov dword ptr ds : [edx], ecx
        jmp public_6f5430c
        public_6f54309 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f5430c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x108]
        mov dl, byte ptr ds : [ecx+0x108]
        mov byte ptr ds : [ecx+0x108], bl
        mov byte ptr ds : [esi+0x108], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f543a7
        public_6f54330 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f5433b
        mov dword ptr ds : [ecx], eax
        jmp public_6f5433e
        public_6f5433b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f5433e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f54372
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f54353
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f5436f
        public_6f54353 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x109]
        test bl, bl
        mov edx, eax
        jne public_6f5436f
        public_6f54361 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x109]
        test bl, bl
        je public_6f54361
        public_6f5436f : nop
        mov dword ptr ss : [ebp], edx
        public_6f54372 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f543a7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f54386
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f543a4
        public_6f54386 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x109]
        test bl, bl
        mov edx, eax
        jne public_6f543a4
        public_6f54395 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x109]
        test bl, bl
        je public_6f54395
        public_6f543a4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f543a7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x108]
        mov bl, 1
        cmp cl, bl
        jne public_6f54676
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f5466c
        public_6f543c7 : nop
        cmp byte ptr ds : [eax+0x108], bl
        jne public_6f5466c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f544a1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x108]
        test dl, dl
        jne public_6f5443e
        mov byte ptr ds : [ecx+0x108], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x108], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54412
        mov dword ptr ds : [esi+4], ecx
        public_6f54412 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54425
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54433
        public_6f54425 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f54430
        mov dword ptr ds : [esi], edx
        jmp public_6f54433
        public_6f54430 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f54433 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f5443e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x108], bl
        jne public_6f54457
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x108], bl
        je public_6f5451a
        public_6f54457 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x108], bl
        jne public_6f54550
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x108], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x108], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54487
        mov dword ptr ds : [esi+4], ecx
        public_6f54487 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54535
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54544
        public_6f544a1 : nop
        mov dl, byte ptr ds : [ecx+0x108]
        test dl, dl
        jne public_6f544fd
        mov byte ptr ds : [ecx+0x108], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x108], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f544d0
        mov dword ptr ds : [esi+4], ecx
        public_6f544d0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f544e3
        mov dword ptr ds : [esi+4], edx
        jmp public_6f544f2
        public_6f544e3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f544f0
        mov dword ptr ds : [esi+8], edx
        jmp public_6f544f2
        public_6f544f0 : nop
        mov dword ptr ds : [esi], edx
        public_6f544f2 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f544fd : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x108], bl
        jne public_6f545b8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x108], bl
        jne public_6f545b8
        public_6f5451a : nop
        mov byte ptr ds : [ecx+0x108], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f543c7
        jmp public_6f5466c
        public_6f54535 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f54542
        mov dword ptr ds : [esi+8], edx
        jmp public_6f54544
        public_6f54542 : nop
        mov dword ptr ds : [esi], edx
        public_6f54544 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f54550 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x108]
        mov byte ptr ds : [ecx+0x108], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x108], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x108], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54586
        mov dword ptr ds : [esi+4], ecx
        public_6f54586 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f5459e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54669
        public_6f5459e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f545ae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54669
        public_6f545ae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54669
        public_6f545b8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x108], bl
        jne public_6f5460f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x108], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x108], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f545e4
        mov dword ptr ds : [esi+4], ecx
        public_6f545e4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f545f7
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54605
        public_6f545f7 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f54602
        mov dword ptr ds : [esi], edx
        jmp public_6f54605
        public_6f54602 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f54605 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f5460f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x108]
        mov byte ptr ds : [ecx+0x108], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x108], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x108], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54644
        mov dword ptr ds : [esi+4], ecx
        public_6f54644 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54657
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54666
        public_6f54657 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f54664
        mov dword ptr ds : [esi+8], edx
        jmp public_6f54666
        public_6f54664 : nop
        mov dword ptr ds : [esi], edx
        public_6f54666 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f54669 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f5466c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x108], bl
        public_6f54676 : nop
        lea ecx, ds:[esi+0xC]
        call public_6f502e0
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
        UNREACHABLE_TRAP(0x6f54250)
    }
}

#undef public_6f54274
#undef public_6f54292
#undef public_6f5429d
#undef public_6f542b0
#undef public_6f542be
#undef public_6f542da
#undef public_6f542f1
#undef public_6f542fe
#undef public_6f54309
#undef public_6f5430c
#undef public_6f54330
#undef public_6f5433b
#undef public_6f5433e
#undef public_6f54353
#undef public_6f54361
#undef public_6f5436f
#undef public_6f54372
#undef public_6f54386
#undef public_6f54395
#undef public_6f543a4
#undef public_6f543a7
#undef public_6f543c7
#undef public_6f54412
#undef public_6f54425
#undef public_6f54430
#undef public_6f54433
#undef public_6f5443e
#undef public_6f54457
#undef public_6f54487
#undef public_6f544a1
#undef public_6f544d0
#undef public_6f544e3
#undef public_6f544f0
#undef public_6f544f2
#undef public_6f544fd
#undef public_6f5451a
#undef public_6f54535
#undef public_6f54542
#undef public_6f54544
#undef public_6f54550
#undef public_6f54586
#undef public_6f5459e
#undef public_6f545ae
#undef public_6f545b8
#undef public_6f545e4
#undef public_6f545f7
#undef public_6f54602
#undef public_6f54605
#undef public_6f5460f
#undef public_6f54644
#undef public_6f54657
#undef public_6f54664
#undef public_6f54666
#undef public_6f54669
#undef public_6f5466c
#undef public_6f54676
