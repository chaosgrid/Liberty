#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624130);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6624154 _public_6624154
#define public_6624172 _public_6624172
#define public_662417d _public_662417d
#define public_6624186 _public_6624186
#define public_6624191 _public_6624191
#define public_66241af _public_66241af
#define public_66241c6 _public_66241c6
#define public_66241d3 _public_66241d3
#define public_66241de _public_66241de
#define public_66241e1 _public_66241e1
#define public_66241f9 _public_66241f9
#define public_6624204 _public_6624204
#define public_6624207 _public_6624207
#define public_662421e _public_662421e
#define public_6624229 _public_6624229
#define public_6624234 _public_6624234
#define public_6624237 _public_6624237
#define public_662424d _public_662424d
#define public_6624259 _public_6624259
#define public_6624265 _public_6624265
#define public_6624268 _public_6624268
#define public_6624283 _public_6624283
#define public_66242c2 _public_66242c2
#define public_66242d5 _public_66242d5
#define public_66242e0 _public_66242e0
#define public_66242e3 _public_66242e3
#define public_66242ee _public_66242ee
#define public_6624301 _public_6624301
#define public_6624328 _public_6624328
#define public_6624342 _public_6624342
#define public_6624368 _public_6624368
#define public_662437b _public_662437b
#define public_6624388 _public_6624388
#define public_662438a _public_662438a
#define public_6624395 _public_6624395
#define public_66243ac _public_66243ac
#define public_66243c4 _public_66243c4
#define public_66243d1 _public_66243d1
#define public_66243d3 _public_66243d3
#define public_66243df _public_66243df
#define public_6624409 _public_6624409
#define public_6624421 _public_6624421
#define public_6624431 _public_6624431
#define public_662443b _public_662443b
#define public_662445e _public_662445e
#define public_6624471 _public_6624471
#define public_662447c _public_662447c
#define public_662447f _public_662447f
#define public_6624489 _public_6624489
#define public_66244b2 _public_66244b2
#define public_66244c5 _public_66244c5
#define public_66244d2 _public_66244d2
#define public_66244d4 _public_66244d4
#define public_66244d7 _public_66244d7
#define public_66244de _public_66244de
#define public_66244e1 _public_66244e1
#define public_6624506 _public_6624506
#define public_662450f _public_662450f

PROC_DECLARE(0x6624130, internal_6624130, public_6624130);
extern "C" NAKED register_t __cdecl internal_6624130()
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
        call public_66252f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6624172
        mov eax, dword ptr ds : [esi+8]
        public_6624154 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_66241f9
        mov dword ptr ds : [ecx+4], eax
        jmp public_6624207
        public_6624172 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_662417d
        mov eax, edx
        jmp public_6624154
        public_662417d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6624191
        public_6624186 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6624186
        public_6624191 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6624154
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_66241af
        mov dword ptr ds : [eax+4], ecx
        jmp public_66241c6
        public_66241af : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_66241c6 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_66241d3
        mov dword ptr ds : [edx+4], ecx
        jmp public_66241e1
        public_66241d3 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_66241de
        mov dword ptr ds : [edx], ecx
        jmp public_66241e1
        public_66241de : nop
        mov dword ptr ds : [edx+8], ecx
        public_66241e1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        jmp public_6624268
        public_66241f9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6624204
        mov dword ptr ds : [ecx], eax
        jmp public_6624207
        public_6624204 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6624207 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6624237
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_662421e
        mov edx, dword ptr ds : [esi+4]
        jmp public_6624234
        public_662421e : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6624234
        public_6624229 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6624229
        public_6624234 : nop
        mov dword ptr ss : [ebp], edx
        public_6624237 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6624268
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_662424d
        mov edx, dword ptr ds : [esi+4]
        jmp public_6624265
        public_662424d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6624265
        public_6624259 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6624259
        public_6624265 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6624268 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ss : [ebp+0x14], bl
        jne public_66244e1
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_66244de
        public_6624283 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_66244de
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6624342
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66242ee
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_66242c2
        mov dword ptr ds : [esi+4], ecx
        public_66242c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66242d5
        mov dword ptr ds : [esi+4], edx
        jmp public_66242e3
        public_66242d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66242e0
        mov dword ptr ds : [esi], edx
        jmp public_66242e3
        public_66242e0 : nop
        mov dword ptr ds : [esi+8], edx
        public_66242e3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_66242ee : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624301
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_66243ac
        public_6624301 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66243df
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624328
        mov dword ptr ds : [esi+4], ecx
        public_6624328 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66243c4
        mov dword ptr ds : [esi+4], edx
        jmp public_66243d3
        public_6624342 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6624395
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624368
        mov dword ptr ds : [esi+4], ecx
        public_6624368 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_662437b
        mov dword ptr ds : [esi+4], edx
        jmp public_662438a
        public_662437b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6624388
        mov dword ptr ds : [esi+8], edx
        jmp public_662438a
        public_6624388 : nop
        mov dword ptr ds : [esi], edx
        public_662438a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6624395 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_662443b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_662443b
        public_66243ac : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6624283
        jmp public_66244de
        public_66243c4 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66243d1
        mov dword ptr ds : [esi+8], edx
        jmp public_66243d3
        public_66243d1 : nop
        mov dword ptr ds : [esi], edx
        public_66243d3 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_66243df : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624409
        mov dword ptr ds : [esi+4], ecx
        public_6624409 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624421
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66244d7
        public_6624421 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6624431
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66244d7
        public_6624431 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66244d7
        public_662443b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624489
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_662445e
        mov dword ptr ds : [esi+4], ecx
        public_662445e : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624471
        mov dword ptr ds : [esi+4], edx
        jmp public_662447f
        public_6624471 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_662447c
        mov dword ptr ds : [esi], edx
        jmp public_662447f
        public_662447c : nop
        mov dword ptr ds : [esi+8], edx
        public_662447f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6624489 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_66244b2
        mov dword ptr ds : [esi+4], ecx
        public_66244b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66244c5
        mov dword ptr ds : [esi+4], edx
        jmp public_66244d4
        public_66244c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66244d2
        mov dword ptr ds : [esi+8], edx
        jmp public_66244d4
        public_66244d2 : nop
        mov dword ptr ds : [esi], edx
        public_66244d4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_66244d7 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_66244de : nop
        mov byte ptr ds : [eax+0x14], bl
        public_66244e1 : nop
        cmp dword ptr ds : [public_662b198], 0x40
        jge public_6624506
        mov edx, dword ptr ds : [public_662b18c]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [public_662b198]
        inc eax
        mov dword ptr ds : [public_662b18c], ebp
        mov dword ptr ds : [public_662b198], eax
        jmp public_662450f
        public_6624506 : nop
        push ebp
        call public_66281d0
        add esp, 4
        public_662450f : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6624130)
    }
}

#undef public_6624154
#undef public_6624172
#undef public_662417d
#undef public_6624186
#undef public_6624191
#undef public_66241af
#undef public_66241c6
#undef public_66241d3
#undef public_66241de
#undef public_66241e1
#undef public_66241f9
#undef public_6624204
#undef public_6624207
#undef public_662421e
#undef public_6624229
#undef public_6624234
#undef public_6624237
#undef public_662424d
#undef public_6624259
#undef public_6624265
#undef public_6624268
#undef public_6624283
#undef public_66242c2
#undef public_66242d5
#undef public_66242e0
#undef public_66242e3
#undef public_66242ee
#undef public_6624301
#undef public_6624328
#undef public_6624342
#undef public_6624368
#undef public_662437b
#undef public_6624388
#undef public_662438a
#undef public_6624395
#undef public_66243ac
#undef public_66243c4
#undef public_66243d1
#undef public_66243d3
#undef public_66243df
#undef public_6624409
#undef public_6624421
#undef public_6624431
#undef public_662443b
#undef public_662445e
#undef public_6624471
#undef public_662447c
#undef public_662447f
#undef public_6624489
#undef public_66244b2
#undef public_66244c5
#undef public_66244d2
#undef public_66244d4
#undef public_66244d7
#undef public_66244de
#undef public_66244e1
#undef public_6624506
#undef public_662450f
