#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f311e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f315b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f31204 _public_6f31204
#define public_6f31222 _public_6f31222
#define public_6f3122d _public_6f3122d
#define public_6f31236 _public_6f31236
#define public_6f31241 _public_6f31241
#define public_6f3125d _public_6f3125d
#define public_6f31274 _public_6f31274
#define public_6f31281 _public_6f31281
#define public_6f3128c _public_6f3128c
#define public_6f3128f _public_6f3128f
#define public_6f312a7 _public_6f312a7
#define public_6f312b2 _public_6f312b2
#define public_6f312b5 _public_6f312b5
#define public_6f312ca _public_6f312ca
#define public_6f312d5 _public_6f312d5
#define public_6f312e0 _public_6f312e0
#define public_6f312e3 _public_6f312e3
#define public_6f312f7 _public_6f312f7
#define public_6f31303 _public_6f31303
#define public_6f3130f _public_6f3130f
#define public_6f31312 _public_6f31312
#define public_6f31330 _public_6f31330
#define public_6f3136f _public_6f3136f
#define public_6f31382 _public_6f31382
#define public_6f3138d _public_6f3138d
#define public_6f31390 _public_6f31390
#define public_6f3139b _public_6f3139b
#define public_6f313ae _public_6f313ae
#define public_6f313d5 _public_6f313d5
#define public_6f313ef _public_6f313ef
#define public_6f31415 _public_6f31415
#define public_6f31428 _public_6f31428
#define public_6f31435 _public_6f31435
#define public_6f31437 _public_6f31437
#define public_6f31442 _public_6f31442
#define public_6f31459 _public_6f31459
#define public_6f31471 _public_6f31471
#define public_6f3147e _public_6f3147e
#define public_6f31480 _public_6f31480
#define public_6f3148c _public_6f3148c
#define public_6f314b6 _public_6f314b6
#define public_6f314ce _public_6f314ce
#define public_6f314de _public_6f314de
#define public_6f314e8 _public_6f314e8
#define public_6f3150b _public_6f3150b
#define public_6f3151e _public_6f3151e
#define public_6f31529 _public_6f31529
#define public_6f3152c _public_6f3152c
#define public_6f31536 _public_6f31536
#define public_6f3155f _public_6f3155f
#define public_6f31572 _public_6f31572
#define public_6f3157f _public_6f3157f
#define public_6f31581 _public_6f31581
#define public_6f31584 _public_6f31584
#define public_6f31587 _public_6f31587
#define public_6f3158a _public_6f3158a

PROC_DECLARE(0x6f311e0, internal_6f311e0, public_6f311e0);
extern "C" NAKED register_t __cdecl internal_6f311e0()
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
        call public_6f315b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f31222
        mov eax, dword ptr ds : [esi+8]
        public_6f31204 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f312a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f312b5
        public_6f31222 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3122d
        mov eax, edx
        jmp public_6f31204
        public_6f3122d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f31241
        public_6f31236 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f31236
        public_6f31241 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f31204
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3125d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f31274
        public_6f3125d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f31274 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f31281
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3128f
        public_6f31281 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f3128c
        mov dword ptr ds : [edx], ecx
        jmp public_6f3128f
        public_6f3128c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3128f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f31312
        public_6f312a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f312b2
        mov dword ptr ds : [ecx], eax
        jmp public_6f312b5
        public_6f312b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f312b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f312e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f312ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f312e0
        public_6f312ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f312e0
        public_6f312d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f312d5
        public_6f312e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f312e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f31312
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f312f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3130f
        public_6f312f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f3130f
        public_6f31303 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f31303
        public_6f3130f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f31312 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6f3158a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f31587
        nop 
        public_6f31330 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6f31587
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f313ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3139b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3136f
        mov dword ptr ds : [esi+4], ecx
        public_6f3136f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f31382
        mov dword ptr ds : [esi+4], edx
        jmp public_6f31390
        public_6f31382 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3138d
        mov dword ptr ds : [esi], edx
        jmp public_6f31390
        public_6f3138d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f31390 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f3139b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f313ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6f31459
        public_6f313ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f3148c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f313d5
        mov dword ptr ds : [esi+4], ecx
        public_6f313d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f31471
        mov dword ptr ds : [esi+4], edx
        jmp public_6f31480
        public_6f313ef : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f31442
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f31415
        mov dword ptr ds : [esi+4], ecx
        public_6f31415 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f31428
        mov dword ptr ds : [esi+4], edx
        jmp public_6f31437
        public_6f31428 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f31435
        mov dword ptr ds : [esi+8], edx
        jmp public_6f31437
        public_6f31435 : nop
        mov dword ptr ds : [esi], edx
        public_6f31437 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f31442 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f314e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f314e8
        public_6f31459 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f31330
        jmp public_6f31587
        public_6f31471 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3147e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f31480
        public_6f3147e : nop
        mov dword ptr ds : [esi], edx
        public_6f31480 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f3148c : nop
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
        je public_6f314b6
        mov dword ptr ds : [esi+4], ecx
        public_6f314b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f314ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f31584
        public_6f314ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f314de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f31584
        public_6f314de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f31584
        public_6f314e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f31536
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3150b
        mov dword ptr ds : [esi+4], ecx
        public_6f3150b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3151e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3152c
        public_6f3151e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f31529
        mov dword ptr ds : [esi], edx
        jmp public_6f3152c
        public_6f31529 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3152c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f31536 : nop
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
        je public_6f3155f
        mov dword ptr ds : [esi+4], ecx
        public_6f3155f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f31572
        mov dword ptr ds : [esi+4], edx
        jmp public_6f31581
        public_6f31572 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3157f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f31581
        public_6f3157f : nop
        mov dword ptr ds : [esi], edx
        public_6f31581 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f31584 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f31587 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6f3158a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
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
        UNREACHABLE_TRAP(0x6f311e0)
    }
}

#undef public_6f31204
#undef public_6f31222
#undef public_6f3122d
#undef public_6f31236
#undef public_6f31241
#undef public_6f3125d
#undef public_6f31274
#undef public_6f31281
#undef public_6f3128c
#undef public_6f3128f
#undef public_6f312a7
#undef public_6f312b2
#undef public_6f312b5
#undef public_6f312ca
#undef public_6f312d5
#undef public_6f312e0
#undef public_6f312e3
#undef public_6f312f7
#undef public_6f31303
#undef public_6f3130f
#undef public_6f31312
#undef public_6f31330
#undef public_6f3136f
#undef public_6f31382
#undef public_6f3138d
#undef public_6f31390
#undef public_6f3139b
#undef public_6f313ae
#undef public_6f313d5
#undef public_6f313ef
#undef public_6f31415
#undef public_6f31428
#undef public_6f31435
#undef public_6f31437
#undef public_6f31442
#undef public_6f31459
#undef public_6f31471
#undef public_6f3147e
#undef public_6f31480
#undef public_6f3148c
#undef public_6f314b6
#undef public_6f314ce
#undef public_6f314de
#undef public_6f314e8
#undef public_6f3150b
#undef public_6f3151e
#undef public_6f31529
#undef public_6f3152c
#undef public_6f31536
#undef public_6f3155f
#undef public_6f31572
#undef public_6f3157f
#undef public_6f31581
#undef public_6f31584
#undef public_6f31587
#undef public_6f3158a
