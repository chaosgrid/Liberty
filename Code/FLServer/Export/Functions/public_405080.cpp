#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405080);
CLANG_FORWARD_PROC_SYMBOL(public_405850);
CLANG_FORWARD_PROC_SYMBOL(public_405d40);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4050a4 _public_4050a4
#define public_4050c2 _public_4050c2
#define public_4050cd _public_4050cd
#define public_4050d6 _public_4050d6
#define public_4050e1 _public_4050e1
#define public_4050fd _public_4050fd
#define public_405114 _public_405114
#define public_405121 _public_405121
#define public_40512c _public_40512c
#define public_40512f _public_40512f
#define public_405147 _public_405147
#define public_405152 _public_405152
#define public_405155 _public_405155
#define public_40516a _public_40516a
#define public_405175 _public_405175
#define public_405180 _public_405180
#define public_405183 _public_405183
#define public_405197 _public_405197
#define public_4051a3 _public_4051a3
#define public_4051af _public_4051af
#define public_4051b2 _public_4051b2
#define public_4051d0 _public_4051d0
#define public_40520f _public_40520f
#define public_405222 _public_405222
#define public_40522d _public_40522d
#define public_405230 _public_405230
#define public_40523b _public_40523b
#define public_40524e _public_40524e
#define public_405275 _public_405275
#define public_40528f _public_40528f
#define public_4052b5 _public_4052b5
#define public_4052c8 _public_4052c8
#define public_4052d5 _public_4052d5
#define public_4052d7 _public_4052d7
#define public_4052e2 _public_4052e2
#define public_4052f9 _public_4052f9
#define public_405311 _public_405311
#define public_40531e _public_40531e
#define public_405320 _public_405320
#define public_40532c _public_40532c
#define public_405356 _public_405356
#define public_40536e _public_40536e
#define public_40537e _public_40537e
#define public_405388 _public_405388
#define public_4053ab _public_4053ab
#define public_4053be _public_4053be
#define public_4053c9 _public_4053c9
#define public_4053cc _public_4053cc
#define public_4053d6 _public_4053d6
#define public_4053ff _public_4053ff
#define public_405412 _public_405412
#define public_40541f _public_40541f
#define public_405421 _public_405421
#define public_405424 _public_405424
#define public_405427 _public_405427
#define public_40542e _public_40542e

PROC_DECLARE(0x405080, internal_405080, public_405080);
extern "C" NAKED register_t __cdecl internal_405080()
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
        call public_405850
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4050c2
        mov eax, dword ptr ds : [esi+8]
        public_4050a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_405147
        mov dword ptr ds : [ecx+4], eax
        jmp public_405155
        public_4050c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_4050cd
        mov eax, edx
        jmp public_4050a4
        public_4050cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_4050e1
        public_4050d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_4050d6
        public_4050e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4050a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4050fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_405114
        public_4050fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_405114 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_405121
        mov dword ptr ds : [edx+4], ecx
        jmp public_40512f
        public_405121 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_40512c
        mov dword ptr ds : [edx], ecx
        jmp public_40512f
        public_40512c : nop
        mov dword ptr ds : [edx+8], ecx
        public_40512f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4051b2
        public_405147 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_405152
        mov dword ptr ds : [ecx], eax
        jmp public_405155
        public_405152 : nop
        mov dword ptr ds : [ecx+8], eax
        public_405155 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_405183
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_40516a
        mov edx, dword ptr ds : [esi+4]
        jmp public_405180
        public_40516a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_405180
        public_405175 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_405175
        public_405180 : nop
        mov dword ptr ss : [ebp], edx
        public_405183 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4051b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_405197
        mov edx, dword ptr ds : [esi+4]
        jmp public_4051af
        public_405197 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_4051af
        public_4051a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_4051a3
        public_4051af : nop
        mov dword ptr ss : [ebp+8], edx
        public_4051b2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_40542e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_405427
        nop 
        public_4051d0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_405427
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_40528f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_40523b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_40520f
        mov dword ptr ds : [esi+4], ecx
        public_40520f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_405222
        mov dword ptr ds : [esi+4], edx
        jmp public_405230
        public_405222 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_40522d
        mov dword ptr ds : [esi], edx
        jmp public_405230
        public_40522d : nop
        mov dword ptr ds : [esi+8], edx
        public_405230 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_40523b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_40524e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_4052f9
        public_40524e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_40532c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_405275
        mov dword ptr ds : [esi+4], ecx
        public_405275 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_405311
        mov dword ptr ds : [esi+4], edx
        jmp public_405320
        public_40528f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_4052e2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4052b5
        mov dword ptr ds : [esi+4], ecx
        public_4052b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4052c8
        mov dword ptr ds : [esi+4], edx
        jmp public_4052d7
        public_4052c8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4052d5
        mov dword ptr ds : [esi+8], edx
        jmp public_4052d7
        public_4052d5 : nop
        mov dword ptr ds : [esi], edx
        public_4052d7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_4052e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_405388
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_405388
        public_4052f9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4051d0
        jmp public_405427
        public_405311 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40531e
        mov dword ptr ds : [esi+8], edx
        jmp public_405320
        public_40531e : nop
        mov dword ptr ds : [esi], edx
        public_405320 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_40532c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_405356
        mov dword ptr ds : [esi+4], ecx
        public_405356 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_40536e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_405424
        public_40536e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_40537e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_405424
        public_40537e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_405424
        public_405388 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_4053d6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4053ab
        mov dword ptr ds : [esi+4], ecx
        public_4053ab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4053be
        mov dword ptr ds : [esi+4], edx
        jmp public_4053cc
        public_4053be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4053c9
        mov dword ptr ds : [esi], edx
        jmp public_4053cc
        public_4053c9 : nop
        mov dword ptr ds : [esi+8], edx
        public_4053cc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_4053d6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4053ff
        mov dword ptr ds : [esi+4], ecx
        public_4053ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_405412
        mov dword ptr ds : [esi+4], edx
        jmp public_405421
        public_405412 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40541f
        mov dword ptr ds : [esi+8], edx
        jmp public_405421
        public_40541f : nop
        mov dword ptr ds : [esi], edx
        public_405421 : nop
        mov dword ptr ds : [edx+8], ecx
        public_405424 : nop
        mov dword ptr ds : [ecx+4], edx
        public_405427 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_40542e : nop
        lea ecx, ds:[esi+0xC]
        call public_405d40
        push esi
        call public_418978
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
        UNREACHABLE_TRAP(0x405080)
    }
}

#undef public_4050a4
#undef public_4050c2
#undef public_4050cd
#undef public_4050d6
#undef public_4050e1
#undef public_4050fd
#undef public_405114
#undef public_405121
#undef public_40512c
#undef public_40512f
#undef public_405147
#undef public_405152
#undef public_405155
#undef public_40516a
#undef public_405175
#undef public_405180
#undef public_405183
#undef public_405197
#undef public_4051a3
#undef public_4051af
#undef public_4051b2
#undef public_4051d0
#undef public_40520f
#undef public_405222
#undef public_40522d
#undef public_405230
#undef public_40523b
#undef public_40524e
#undef public_405275
#undef public_40528f
#undef public_4052b5
#undef public_4052c8
#undef public_4052d5
#undef public_4052d7
#undef public_4052e2
#undef public_4052f9
#undef public_405311
#undef public_40531e
#undef public_405320
#undef public_40532c
#undef public_405356
#undef public_40536e
#undef public_40537e
#undef public_405388
#undef public_4053ab
#undef public_4053be
#undef public_4053c9
#undef public_4053cc
#undef public_4053d6
#undef public_4053ff
#undef public_405412
#undef public_40541f
#undef public_405421
#undef public_405424
#undef public_405427
#undef public_40542e
