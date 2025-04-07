#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341af0);
CLANG_FORWARD_PROC_SYMBOL(public_6342170);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6342194 _public_6342194
#define public_63421b2 _public_63421b2
#define public_63421bd _public_63421bd
#define public_63421c6 _public_63421c6
#define public_63421d1 _public_63421d1
#define public_63421ed _public_63421ed
#define public_6342204 _public_6342204
#define public_6342211 _public_6342211
#define public_634221c _public_634221c
#define public_634221f _public_634221f
#define public_6342237 _public_6342237
#define public_6342242 _public_6342242
#define public_6342245 _public_6342245
#define public_634225a _public_634225a
#define public_6342265 _public_6342265
#define public_6342270 _public_6342270
#define public_6342273 _public_6342273
#define public_6342287 _public_6342287
#define public_6342293 _public_6342293
#define public_634229f _public_634229f
#define public_63422a2 _public_63422a2
#define public_63422c0 _public_63422c0
#define public_63422ff _public_63422ff
#define public_6342312 _public_6342312
#define public_634231d _public_634231d
#define public_6342320 _public_6342320
#define public_634232b _public_634232b
#define public_634233e _public_634233e
#define public_6342365 _public_6342365
#define public_634237f _public_634237f
#define public_63423a5 _public_63423a5
#define public_63423b8 _public_63423b8
#define public_63423c5 _public_63423c5
#define public_63423c7 _public_63423c7
#define public_63423d2 _public_63423d2
#define public_63423e9 _public_63423e9
#define public_6342401 _public_6342401
#define public_634240e _public_634240e
#define public_6342410 _public_6342410
#define public_634241c _public_634241c
#define public_6342446 _public_6342446
#define public_634245e _public_634245e
#define public_634246e _public_634246e
#define public_6342478 _public_6342478
#define public_634249b _public_634249b
#define public_63424ae _public_63424ae
#define public_63424b9 _public_63424b9
#define public_63424bc _public_63424bc
#define public_63424c6 _public_63424c6
#define public_63424ef _public_63424ef
#define public_6342502 _public_6342502
#define public_634250f _public_634250f
#define public_6342511 _public_6342511
#define public_6342514 _public_6342514
#define public_6342517 _public_6342517
#define public_634251e _public_634251e

PROC_DECLARE(0x6342170, internal_6342170, public_6342170);
extern "C" NAKED register_t __cdecl internal_6342170()
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
        call public_6342a40
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_63421b2
        mov eax, dword ptr ds : [esi+8]
        public_6342194 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6342237
        mov dword ptr ds : [ecx+4], eax
        jmp public_6342245
        public_63421b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_63421bd
        mov eax, edx
        jmp public_6342194
        public_63421bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_63421d1
        public_63421c6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_63421c6
        public_63421d1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6342194
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63421ed
        mov dword ptr ds : [eax+4], ecx
        jmp public_6342204
        public_63421ed : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6342204 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6342211
        mov dword ptr ds : [edx+4], ecx
        jmp public_634221f
        public_6342211 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_634221c
        mov dword ptr ds : [edx], ecx
        jmp public_634221f
        public_634221c : nop
        mov dword ptr ds : [edx+8], ecx
        public_634221f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_63422a2
        public_6342237 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6342242
        mov dword ptr ds : [ecx], eax
        jmp public_6342245
        public_6342242 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6342245 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6342273
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_634225a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6342270
        public_634225a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6342270
        public_6342265 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6342265
        public_6342270 : nop
        mov dword ptr ss : [ebp], edx
        public_6342273 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_63422a2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6342287
        mov edx, dword ptr ds : [esi+4]
        jmp public_634229f
        public_6342287 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_634229f
        public_6342293 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6342293
        public_634229f : nop
        mov dword ptr ss : [ebp+8], edx
        public_63422a2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_634251e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6342517
        nop 
        public_63422c0 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6342517
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_634237f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_634232b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_63422ff
        mov dword ptr ds : [esi+4], ecx
        public_63422ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6342312
        mov dword ptr ds : [esi+4], edx
        jmp public_6342320
        public_6342312 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_634231d
        mov dword ptr ds : [esi], edx
        jmp public_6342320
        public_634231d : nop
        mov dword ptr ds : [esi+8], edx
        public_6342320 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_634232b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_634233e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_63423e9
        public_634233e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_634241c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6342365
        mov dword ptr ds : [esi+4], ecx
        public_6342365 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6342401
        mov dword ptr ds : [esi+4], edx
        jmp public_6342410
        public_634237f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_63423d2
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63423a5
        mov dword ptr ds : [esi+4], ecx
        public_63423a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63423b8
        mov dword ptr ds : [esi+4], edx
        jmp public_63423c7
        public_63423b8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63423c5
        mov dword ptr ds : [esi+8], edx
        jmp public_63423c7
        public_63423c5 : nop
        mov dword ptr ds : [esi], edx
        public_63423c7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_63423d2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6342478
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6342478
        public_63423e9 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_63422c0
        jmp public_6342517
        public_6342401 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_634240e
        mov dword ptr ds : [esi+8], edx
        jmp public_6342410
        public_634240e : nop
        mov dword ptr ds : [esi], edx
        public_6342410 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_634241c : nop
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
        je public_6342446
        mov dword ptr ds : [esi+4], ecx
        public_6342446 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_634245e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6342514
        public_634245e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_634246e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6342514
        public_634246e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6342514
        public_6342478 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_63424c6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_634249b
        mov dword ptr ds : [esi+4], ecx
        public_634249b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63424ae
        mov dword ptr ds : [esi+4], edx
        jmp public_63424bc
        public_63424ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63424b9
        mov dword ptr ds : [esi], edx
        jmp public_63424bc
        public_63424b9 : nop
        mov dword ptr ds : [esi+8], edx
        public_63424bc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_63424c6 : nop
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
        je public_63424ef
        mov dword ptr ds : [esi+4], ecx
        public_63424ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6342502
        mov dword ptr ds : [esi+4], edx
        jmp public_6342511
        public_6342502 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_634250f
        mov dword ptr ds : [esi+8], edx
        jmp public_6342511
        public_634250f : nop
        mov dword ptr ds : [esi], edx
        public_6342511 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6342514 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6342517 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_634251e : nop
        lea ecx, ds:[esi+0xC]
        call public_6341af0
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
        UNREACHABLE_TRAP(0x6342170)
    }
}

#undef public_6342194
#undef public_63421b2
#undef public_63421bd
#undef public_63421c6
#undef public_63421d1
#undef public_63421ed
#undef public_6342204
#undef public_6342211
#undef public_634221c
#undef public_634221f
#undef public_6342237
#undef public_6342242
#undef public_6342245
#undef public_634225a
#undef public_6342265
#undef public_6342270
#undef public_6342273
#undef public_6342287
#undef public_6342293
#undef public_634229f
#undef public_63422a2
#undef public_63422c0
#undef public_63422ff
#undef public_6342312
#undef public_634231d
#undef public_6342320
#undef public_634232b
#undef public_634233e
#undef public_6342365
#undef public_634237f
#undef public_63423a5
#undef public_63423b8
#undef public_63423c5
#undef public_63423c7
#undef public_63423d2
#undef public_63423e9
#undef public_6342401
#undef public_634240e
#undef public_6342410
#undef public_634241c
#undef public_6342446
#undef public_634245e
#undef public_634246e
#undef public_6342478
#undef public_634249b
#undef public_63424ae
#undef public_63424b9
#undef public_63424bc
#undef public_63424c6
#undef public_63424ef
#undef public_6342502
#undef public_634250f
#undef public_6342511
#undef public_6342514
#undef public_6342517
#undef public_634251e
