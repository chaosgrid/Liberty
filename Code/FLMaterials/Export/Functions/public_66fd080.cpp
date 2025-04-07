#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd080);
CLANG_FORWARD_PROC_SYMBOL(public_66fd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66fd0a4 _public_66fd0a4
#define public_66fd0c2 _public_66fd0c2
#define public_66fd0cd _public_66fd0cd
#define public_66fd0d6 _public_66fd0d6
#define public_66fd0e1 _public_66fd0e1
#define public_66fd0fd _public_66fd0fd
#define public_66fd114 _public_66fd114
#define public_66fd121 _public_66fd121
#define public_66fd12c _public_66fd12c
#define public_66fd12f _public_66fd12f
#define public_66fd147 _public_66fd147
#define public_66fd152 _public_66fd152
#define public_66fd155 _public_66fd155
#define public_66fd16a _public_66fd16a
#define public_66fd175 _public_66fd175
#define public_66fd180 _public_66fd180
#define public_66fd183 _public_66fd183
#define public_66fd197 _public_66fd197
#define public_66fd1a3 _public_66fd1a3
#define public_66fd1af _public_66fd1af
#define public_66fd1b2 _public_66fd1b2
#define public_66fd1d0 _public_66fd1d0
#define public_66fd20f _public_66fd20f
#define public_66fd222 _public_66fd222
#define public_66fd22d _public_66fd22d
#define public_66fd230 _public_66fd230
#define public_66fd23b _public_66fd23b
#define public_66fd24e _public_66fd24e
#define public_66fd275 _public_66fd275
#define public_66fd28f _public_66fd28f
#define public_66fd2b5 _public_66fd2b5
#define public_66fd2c8 _public_66fd2c8
#define public_66fd2d5 _public_66fd2d5
#define public_66fd2d7 _public_66fd2d7
#define public_66fd2e2 _public_66fd2e2
#define public_66fd2f9 _public_66fd2f9
#define public_66fd311 _public_66fd311
#define public_66fd31e _public_66fd31e
#define public_66fd320 _public_66fd320
#define public_66fd32c _public_66fd32c
#define public_66fd356 _public_66fd356
#define public_66fd36e _public_66fd36e
#define public_66fd37e _public_66fd37e
#define public_66fd388 _public_66fd388
#define public_66fd3ab _public_66fd3ab
#define public_66fd3be _public_66fd3be
#define public_66fd3c9 _public_66fd3c9
#define public_66fd3cc _public_66fd3cc
#define public_66fd3d6 _public_66fd3d6
#define public_66fd3ff _public_66fd3ff
#define public_66fd412 _public_66fd412
#define public_66fd41f _public_66fd41f
#define public_66fd421 _public_66fd421
#define public_66fd424 _public_66fd424
#define public_66fd427 _public_66fd427
#define public_66fd42a _public_66fd42a

PROC_DECLARE(0x66fd080, internal_66fd080, public_66fd080);
extern "C" NAKED register_t __cdecl internal_66fd080()
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
        call public_66fd7e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_66fd0c2
        mov eax, dword ptr ds : [esi+8]
        public_66fd0a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_66fd147
        mov dword ptr ds : [ecx+4], eax
        jmp public_66fd155
        public_66fd0c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_66fd0cd
        mov eax, edx
        jmp public_66fd0a4
        public_66fd0cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_66fd0e1
        public_66fd0d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_66fd0d6
        public_66fd0e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_66fd0a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66fd0fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_66fd114
        public_66fd0fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_66fd114 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_66fd121
        mov dword ptr ds : [edx+4], ecx
        jmp public_66fd12f
        public_66fd121 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_66fd12c
        mov dword ptr ds : [edx], ecx
        jmp public_66fd12f
        public_66fd12c : nop
        mov dword ptr ds : [edx+8], ecx
        public_66fd12f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_66fd1b2
        public_66fd147 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_66fd152
        mov dword ptr ds : [ecx], eax
        jmp public_66fd155
        public_66fd152 : nop
        mov dword ptr ds : [ecx+8], eax
        public_66fd155 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_66fd183
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66fd16a
        mov edx, dword ptr ds : [esi+4]
        jmp public_66fd180
        public_66fd16a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_66fd180
        public_66fd175 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_66fd175
        public_66fd180 : nop
        mov dword ptr ss : [ebp], edx
        public_66fd183 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_66fd1b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66fd197
        mov edx, dword ptr ds : [esi+4]
        jmp public_66fd1af
        public_66fd197 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_66fd1af
        public_66fd1a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_66fd1a3
        public_66fd1af : nop
        mov dword ptr ss : [ebp+8], edx
        public_66fd1b2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_66fd42a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_66fd427
        nop 
        public_66fd1d0 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_66fd427
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_66fd28f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66fd23b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_66fd20f
        mov dword ptr ds : [esi+4], ecx
        public_66fd20f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd222
        mov dword ptr ds : [esi+4], edx
        jmp public_66fd230
        public_66fd222 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66fd22d
        mov dword ptr ds : [esi], edx
        jmp public_66fd230
        public_66fd22d : nop
        mov dword ptr ds : [esi+8], edx
        public_66fd230 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_66fd23b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66fd24e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_66fd2f9
        public_66fd24e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66fd32c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_66fd275
        mov dword ptr ds : [esi+4], ecx
        public_66fd275 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd311
        mov dword ptr ds : [esi+4], edx
        jmp public_66fd320
        public_66fd28f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66fd2e2
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_66fd2b5
        mov dword ptr ds : [esi+4], ecx
        public_66fd2b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd2c8
        mov dword ptr ds : [esi+4], edx
        jmp public_66fd2d7
        public_66fd2c8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66fd2d5
        mov dword ptr ds : [esi+8], edx
        jmp public_66fd2d7
        public_66fd2d5 : nop
        mov dword ptr ds : [esi], edx
        public_66fd2d7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_66fd2e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66fd388
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66fd388
        public_66fd2f9 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66fd1d0
        jmp public_66fd427
        public_66fd311 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66fd31e
        mov dword ptr ds : [esi+8], edx
        jmp public_66fd320
        public_66fd31e : nop
        mov dword ptr ds : [esi], edx
        public_66fd320 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_66fd32c : nop
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
        je public_66fd356
        mov dword ptr ds : [esi+4], ecx
        public_66fd356 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd36e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66fd424
        public_66fd36e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66fd37e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66fd424
        public_66fd37e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_66fd424
        public_66fd388 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_66fd3d6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_66fd3ab
        mov dword ptr ds : [esi+4], ecx
        public_66fd3ab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd3be
        mov dword ptr ds : [esi+4], edx
        jmp public_66fd3cc
        public_66fd3be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66fd3c9
        mov dword ptr ds : [esi], edx
        jmp public_66fd3cc
        public_66fd3c9 : nop
        mov dword ptr ds : [esi+8], edx
        public_66fd3cc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_66fd3d6 : nop
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
        je public_66fd3ff
        mov dword ptr ds : [esi+4], ecx
        public_66fd3ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66fd412
        mov dword ptr ds : [esi+4], edx
        jmp public_66fd421
        public_66fd412 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66fd41f
        mov dword ptr ds : [esi+8], edx
        jmp public_66fd421
        public_66fd41f : nop
        mov dword ptr ds : [esi], edx
        public_66fd421 : nop
        mov dword ptr ds : [edx+8], ecx
        public_66fd424 : nop
        mov dword ptr ds : [ecx+4], edx
        public_66fd427 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_66fd42a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6700710
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
        UNREACHABLE_TRAP(0x66fd080)
    }
}

#undef public_66fd0a4
#undef public_66fd0c2
#undef public_66fd0cd
#undef public_66fd0d6
#undef public_66fd0e1
#undef public_66fd0fd
#undef public_66fd114
#undef public_66fd121
#undef public_66fd12c
#undef public_66fd12f
#undef public_66fd147
#undef public_66fd152
#undef public_66fd155
#undef public_66fd16a
#undef public_66fd175
#undef public_66fd180
#undef public_66fd183
#undef public_66fd197
#undef public_66fd1a3
#undef public_66fd1af
#undef public_66fd1b2
#undef public_66fd1d0
#undef public_66fd20f
#undef public_66fd222
#undef public_66fd22d
#undef public_66fd230
#undef public_66fd23b
#undef public_66fd24e
#undef public_66fd275
#undef public_66fd28f
#undef public_66fd2b5
#undef public_66fd2c8
#undef public_66fd2d5
#undef public_66fd2d7
#undef public_66fd2e2
#undef public_66fd2f9
#undef public_66fd311
#undef public_66fd31e
#undef public_66fd320
#undef public_66fd32c
#undef public_66fd356
#undef public_66fd36e
#undef public_66fd37e
#undef public_66fd388
#undef public_66fd3ab
#undef public_66fd3be
#undef public_66fd3c9
#undef public_66fd3cc
#undef public_66fd3d6
#undef public_66fd3ff
#undef public_66fd412
#undef public_66fd41f
#undef public_66fd421
#undef public_66fd424
#undef public_66fd427
#undef public_66fd42a
