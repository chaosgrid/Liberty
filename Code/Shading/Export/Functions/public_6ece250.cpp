#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece250);
CLANG_FORWARD_PROC_SYMBOL(public_6ece940);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ece274 _public_6ece274
#define public_6ece292 _public_6ece292
#define public_6ece29d _public_6ece29d
#define public_6ece2a6 _public_6ece2a6
#define public_6ece2b1 _public_6ece2b1
#define public_6ece2cd _public_6ece2cd
#define public_6ece2e4 _public_6ece2e4
#define public_6ece2f1 _public_6ece2f1
#define public_6ece2fc _public_6ece2fc
#define public_6ece2ff _public_6ece2ff
#define public_6ece317 _public_6ece317
#define public_6ece322 _public_6ece322
#define public_6ece325 _public_6ece325
#define public_6ece33a _public_6ece33a
#define public_6ece345 _public_6ece345
#define public_6ece350 _public_6ece350
#define public_6ece353 _public_6ece353
#define public_6ece367 _public_6ece367
#define public_6ece373 _public_6ece373
#define public_6ece37f _public_6ece37f
#define public_6ece382 _public_6ece382
#define public_6ece3a0 _public_6ece3a0
#define public_6ece3df _public_6ece3df
#define public_6ece3f2 _public_6ece3f2
#define public_6ece3fd _public_6ece3fd
#define public_6ece400 _public_6ece400
#define public_6ece40b _public_6ece40b
#define public_6ece41e _public_6ece41e
#define public_6ece445 _public_6ece445
#define public_6ece45f _public_6ece45f
#define public_6ece485 _public_6ece485
#define public_6ece498 _public_6ece498
#define public_6ece4a5 _public_6ece4a5
#define public_6ece4a7 _public_6ece4a7
#define public_6ece4b2 _public_6ece4b2
#define public_6ece4c9 _public_6ece4c9
#define public_6ece4e1 _public_6ece4e1
#define public_6ece4ee _public_6ece4ee
#define public_6ece4f0 _public_6ece4f0
#define public_6ece4fc _public_6ece4fc
#define public_6ece526 _public_6ece526
#define public_6ece53e _public_6ece53e
#define public_6ece54e _public_6ece54e
#define public_6ece558 _public_6ece558
#define public_6ece57b _public_6ece57b
#define public_6ece58e _public_6ece58e
#define public_6ece599 _public_6ece599
#define public_6ece59c _public_6ece59c
#define public_6ece5a6 _public_6ece5a6
#define public_6ece5cf _public_6ece5cf
#define public_6ece5e2 _public_6ece5e2
#define public_6ece5ef _public_6ece5ef
#define public_6ece5f1 _public_6ece5f1
#define public_6ece5f4 _public_6ece5f4
#define public_6ece5f7 _public_6ece5f7
#define public_6ece5fa _public_6ece5fa

PROC_DECLARE(0x6ece250, internal_6ece250, public_6ece250);
extern "C" NAKED register_t __cdecl internal_6ece250()
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
        call public_6ece940
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ece292
        mov eax, dword ptr ds : [esi+8]
        public_6ece274 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ece317
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ece325
        public_6ece292 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ece29d
        mov eax, edx
        jmp public_6ece274
        public_6ece29d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6ece2b1
        public_6ece2a6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6ece2a6
        public_6ece2b1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ece274
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ece2cd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ece2e4
        public_6ece2cd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ece2e4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ece2f1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ece2ff
        public_6ece2f1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ece2fc
        mov dword ptr ds : [edx], ecx
        jmp public_6ece2ff
        public_6ece2fc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ece2ff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x18]
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [ecx+0x18], bl
        mov byte ptr ds : [esi+0x18], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ece382
        public_6ece317 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ece322
        mov dword ptr ds : [ecx], eax
        jmp public_6ece325
        public_6ece322 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ece325 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ece353
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ece33a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ece350
        public_6ece33a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_6ece350
        public_6ece345 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_6ece345
        public_6ece350 : nop
        mov dword ptr ss : [ebp], edx
        public_6ece353 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ece382
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ece367
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ece37f
        public_6ece367 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_6ece37f
        public_6ece373 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_6ece373
        public_6ece37f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ece382 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x18]
        mov bl, 1
        cmp dl, bl
        jne public_6ece5fa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6ece5f7
        nop 
        public_6ece3a0 : nop
        cmp byte ptr ds : [eax+0x18], bl
        jne public_6ece5f7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ece45f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6ece40b
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece3df
        mov dword ptr ds : [esi+4], ecx
        public_6ece3df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece3f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ece400
        public_6ece3f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ece3fd
        mov dword ptr ds : [esi], edx
        jmp public_6ece400
        public_6ece3fd : nop
        mov dword ptr ds : [esi+8], edx
        public_6ece400 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6ece40b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6ece41e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        je public_6ece4c9
        public_6ece41e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6ece4fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece445
        mov dword ptr ds : [esi+4], ecx
        public_6ece445 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece4e1
        mov dword ptr ds : [esi+4], edx
        jmp public_6ece4f0
        public_6ece45f : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6ece4b2
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece485
        mov dword ptr ds : [esi+4], ecx
        public_6ece485 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece498
        mov dword ptr ds : [esi+4], edx
        jmp public_6ece4a7
        public_6ece498 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ece4a5
        mov dword ptr ds : [esi+8], edx
        jmp public_6ece4a7
        public_6ece4a5 : nop
        mov dword ptr ds : [esi], edx
        public_6ece4a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ece4b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6ece558
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6ece558
        public_6ece4c9 : nop
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ece3a0
        jmp public_6ece5f7
        public_6ece4e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ece4ee
        mov dword ptr ds : [esi+8], edx
        jmp public_6ece4f0
        public_6ece4ee : nop
        mov dword ptr ds : [esi], edx
        public_6ece4f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ece4fc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece526
        mov dword ptr ds : [esi+4], ecx
        public_6ece526 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece53e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ece5f4
        public_6ece53e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ece54e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ece5f4
        public_6ece54e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ece5f4
        public_6ece558 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6ece5a6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece57b
        mov dword ptr ds : [esi+4], ecx
        public_6ece57b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece58e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ece59c
        public_6ece58e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ece599
        mov dword ptr ds : [esi], edx
        jmp public_6ece59c
        public_6ece599 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ece59c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ece5a6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ece5cf
        mov dword ptr ds : [esi+4], ecx
        public_6ece5cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ece5e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ece5f1
        public_6ece5e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ece5ef
        mov dword ptr ds : [esi+8], edx
        jmp public_6ece5f1
        public_6ece5ef : nop
        mov dword ptr ds : [esi], edx
        public_6ece5f1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ece5f4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ece5f7 : nop
        mov byte ptr ds : [eax+0x18], bl
        public_6ece5fa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6ed0c50
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
        UNREACHABLE_TRAP(0x6ece250)
    }
}

#undef public_6ece274
#undef public_6ece292
#undef public_6ece29d
#undef public_6ece2a6
#undef public_6ece2b1
#undef public_6ece2cd
#undef public_6ece2e4
#undef public_6ece2f1
#undef public_6ece2fc
#undef public_6ece2ff
#undef public_6ece317
#undef public_6ece322
#undef public_6ece325
#undef public_6ece33a
#undef public_6ece345
#undef public_6ece350
#undef public_6ece353
#undef public_6ece367
#undef public_6ece373
#undef public_6ece37f
#undef public_6ece382
#undef public_6ece3a0
#undef public_6ece3df
#undef public_6ece3f2
#undef public_6ece3fd
#undef public_6ece400
#undef public_6ece40b
#undef public_6ece41e
#undef public_6ece445
#undef public_6ece45f
#undef public_6ece485
#undef public_6ece498
#undef public_6ece4a5
#undef public_6ece4a7
#undef public_6ece4b2
#undef public_6ece4c9
#undef public_6ece4e1
#undef public_6ece4ee
#undef public_6ece4f0
#undef public_6ece4fc
#undef public_6ece526
#undef public_6ece53e
#undef public_6ece54e
#undef public_6ece558
#undef public_6ece57b
#undef public_6ece58e
#undef public_6ece599
#undef public_6ece59c
#undef public_6ece5a6
#undef public_6ece5cf
#undef public_6ece5e2
#undef public_6ece5ef
#undef public_6ece5f1
#undef public_6ece5f4
#undef public_6ece5f7
#undef public_6ece5fa
