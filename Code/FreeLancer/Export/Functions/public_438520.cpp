#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438520);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_438544 _public_438544
#define public_438562 _public_438562
#define public_43856d _public_43856d
#define public_438576 _public_438576
#define public_438581 _public_438581
#define public_43859d _public_43859d
#define public_4385b4 _public_4385b4
#define public_4385c1 _public_4385c1
#define public_4385cc _public_4385cc
#define public_4385cf _public_4385cf
#define public_4385e7 _public_4385e7
#define public_4385f2 _public_4385f2
#define public_4385f5 _public_4385f5
#define public_43860a _public_43860a
#define public_438615 _public_438615
#define public_438620 _public_438620
#define public_438623 _public_438623
#define public_438637 _public_438637
#define public_438643 _public_438643
#define public_43864f _public_43864f
#define public_438652 _public_438652
#define public_438670 _public_438670
#define public_4386af _public_4386af
#define public_4386c2 _public_4386c2
#define public_4386cd _public_4386cd
#define public_4386d0 _public_4386d0
#define public_4386db _public_4386db
#define public_4386ee _public_4386ee
#define public_438715 _public_438715
#define public_43872f _public_43872f
#define public_438755 _public_438755
#define public_438768 _public_438768
#define public_438775 _public_438775
#define public_438777 _public_438777
#define public_438782 _public_438782
#define public_438799 _public_438799
#define public_4387b1 _public_4387b1
#define public_4387be _public_4387be
#define public_4387c0 _public_4387c0
#define public_4387cc _public_4387cc
#define public_4387f6 _public_4387f6
#define public_43880e _public_43880e
#define public_43881e _public_43881e
#define public_438828 _public_438828
#define public_43884b _public_43884b
#define public_43885e _public_43885e
#define public_438869 _public_438869
#define public_43886c _public_43886c
#define public_438876 _public_438876
#define public_43889f _public_43889f
#define public_4388b2 _public_4388b2
#define public_4388bf _public_4388bf
#define public_4388c1 _public_4388c1
#define public_4388c4 _public_4388c4
#define public_4388c7 _public_4388c7
#define public_4388ca _public_4388ca

PROC_DECLARE(0x438520, internal_438520, public_438520);
extern "C" NAKED register_t __cdecl internal_438520()
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
        call public_438930
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_438562
        mov eax, dword ptr ds : [esi+8]
        public_438544 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4385e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4385f5
        public_438562 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_43856d
        mov eax, edx
        jmp public_438544
        public_43856d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_438581
        public_438576 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_438576
        public_438581 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_438544
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_43859d
        mov dword ptr ds : [eax+4], ecx
        jmp public_4385b4
        public_43859d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4385b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4385c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4385cf
        public_4385c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4385cc
        mov dword ptr ds : [edx], ecx
        jmp public_4385cf
        public_4385cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_4385cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x38]
        mov dl, byte ptr ds : [ecx+0x38]
        mov byte ptr ds : [ecx+0x38], bl
        mov byte ptr ds : [esi+0x38], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_438652
        public_4385e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4385f2
        mov dword ptr ds : [ecx], eax
        jmp public_4385f5
        public_4385f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4385f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_438623
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_43860a
        mov edx, dword ptr ds : [esi+4]
        jmp public_438620
        public_43860a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_438620
        public_438615 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_438615
        public_438620 : nop
        mov dword ptr ss : [ebp], edx
        public_438623 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_438652
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_438637
        mov edx, dword ptr ds : [esi+4]
        jmp public_43864f
        public_438637 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_43864f
        public_438643 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_438643
        public_43864f : nop
        mov dword ptr ss : [ebp+8], edx
        public_438652 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x38]
        mov bl, 1
        cmp dl, bl
        jne public_4388ca
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_4388c7
        nop 
        public_438670 : nop
        cmp byte ptr ds : [eax+0x38], bl
        jne public_4388c7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43872f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_4386db
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4386af
        mov dword ptr ds : [esi+4], ecx
        public_4386af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4386c2
        mov dword ptr ds : [esi+4], edx
        jmp public_4386d0
        public_4386c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4386cd
        mov dword ptr ds : [esi], edx
        jmp public_4386d0
        public_4386cd : nop
        mov dword ptr ds : [esi+8], edx
        public_4386d0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_4386db : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_4386ee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        je public_438799
        public_4386ee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_4387cc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_438715
        mov dword ptr ds : [esi+4], ecx
        public_438715 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4387b1
        mov dword ptr ds : [esi+4], edx
        jmp public_4387c0
        public_43872f : nop
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_438782
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_438755
        mov dword ptr ds : [esi+4], ecx
        public_438755 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_438768
        mov dword ptr ds : [esi+4], edx
        jmp public_438777
        public_438768 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_438775
        mov dword ptr ds : [esi+8], edx
        jmp public_438777
        public_438775 : nop
        mov dword ptr ds : [esi], edx
        public_438777 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_438782 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_438828
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_438828
        public_438799 : nop
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_438670
        jmp public_4388c7
        public_4387b1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4387be
        mov dword ptr ds : [esi+8], edx
        jmp public_4387c0
        public_4387be : nop
        mov dword ptr ds : [esi], edx
        public_4387c0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4387cc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4387f6
        mov dword ptr ds : [esi+4], ecx
        public_4387f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_43880e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4388c4
        public_43880e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_43881e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4388c4
        public_43881e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4388c4
        public_438828 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_438876
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_43884b
        mov dword ptr ds : [esi+4], ecx
        public_43884b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_43885e
        mov dword ptr ds : [esi+4], edx
        jmp public_43886c
        public_43885e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_438869
        mov dword ptr ds : [esi], edx
        jmp public_43886c
        public_438869 : nop
        mov dword ptr ds : [esi+8], edx
        public_43886c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_438876 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_43889f
        mov dword ptr ds : [esi+4], ecx
        public_43889f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4388b2
        mov dword ptr ds : [esi+4], edx
        jmp public_4388c1
        public_4388b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4388bf
        mov dword ptr ds : [esi+8], edx
        jmp public_4388c1
        public_4388bf : nop
        mov dword ptr ds : [esi], edx
        public_4388c1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4388c4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4388c7 : nop
        mov byte ptr ds : [eax+0x38], bl
        public_4388ca : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x438520)
    }
}

#undef public_438544
#undef public_438562
#undef public_43856d
#undef public_438576
#undef public_438581
#undef public_43859d
#undef public_4385b4
#undef public_4385c1
#undef public_4385cc
#undef public_4385cf
#undef public_4385e7
#undef public_4385f2
#undef public_4385f5
#undef public_43860a
#undef public_438615
#undef public_438620
#undef public_438623
#undef public_438637
#undef public_438643
#undef public_43864f
#undef public_438652
#undef public_438670
#undef public_4386af
#undef public_4386c2
#undef public_4386cd
#undef public_4386d0
#undef public_4386db
#undef public_4386ee
#undef public_438715
#undef public_43872f
#undef public_438755
#undef public_438768
#undef public_438775
#undef public_438777
#undef public_438782
#undef public_438799
#undef public_4387b1
#undef public_4387be
#undef public_4387c0
#undef public_4387cc
#undef public_4387f6
#undef public_43880e
#undef public_43881e
#undef public_438828
#undef public_43884b
#undef public_43885e
#undef public_438869
#undef public_43886c
#undef public_438876
#undef public_43889f
#undef public_4388b2
#undef public_4388bf
#undef public_4388c1
#undef public_4388c4
#undef public_4388c7
#undef public_4388ca
