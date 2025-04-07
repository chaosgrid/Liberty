#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624880);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66248a4 _public_66248a4
#define public_66248c2 _public_66248c2
#define public_66248cd _public_66248cd
#define public_66248d6 _public_66248d6
#define public_66248e1 _public_66248e1
#define public_66248ff _public_66248ff
#define public_6624916 _public_6624916
#define public_6624923 _public_6624923
#define public_662492e _public_662492e
#define public_6624931 _public_6624931
#define public_6624949 _public_6624949
#define public_6624954 _public_6624954
#define public_6624957 _public_6624957
#define public_662496e _public_662496e
#define public_6624979 _public_6624979
#define public_6624984 _public_6624984
#define public_6624987 _public_6624987
#define public_662499d _public_662499d
#define public_66249a9 _public_66249a9
#define public_66249b5 _public_66249b5
#define public_66249b8 _public_66249b8
#define public_66249d3 _public_66249d3
#define public_6624a12 _public_6624a12
#define public_6624a25 _public_6624a25
#define public_6624a30 _public_6624a30
#define public_6624a33 _public_6624a33
#define public_6624a3e _public_6624a3e
#define public_6624a51 _public_6624a51
#define public_6624a78 _public_6624a78
#define public_6624a92 _public_6624a92
#define public_6624ab8 _public_6624ab8
#define public_6624acb _public_6624acb
#define public_6624ad8 _public_6624ad8
#define public_6624ada _public_6624ada
#define public_6624ae5 _public_6624ae5
#define public_6624afc _public_6624afc
#define public_6624b14 _public_6624b14
#define public_6624b21 _public_6624b21
#define public_6624b23 _public_6624b23
#define public_6624b2f _public_6624b2f
#define public_6624b59 _public_6624b59
#define public_6624b71 _public_6624b71
#define public_6624b81 _public_6624b81
#define public_6624b8b _public_6624b8b
#define public_6624bae _public_6624bae
#define public_6624bc1 _public_6624bc1
#define public_6624bcc _public_6624bcc
#define public_6624bcf _public_6624bcf
#define public_6624bd9 _public_6624bd9
#define public_6624c02 _public_6624c02
#define public_6624c15 _public_6624c15
#define public_6624c22 _public_6624c22
#define public_6624c24 _public_6624c24
#define public_6624c27 _public_6624c27
#define public_6624c2a _public_6624c2a
#define public_6624c2d _public_6624c2d

PROC_DECLARE(0x6624880, internal_6624880, public_6624880);
extern "C" NAKED register_t __cdecl internal_6624880()
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
        jne public_66248c2
        mov eax, dword ptr ds : [esi+8]
        public_66248a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6624949
        mov dword ptr ds : [ecx+4], eax
        jmp public_6624957
        public_66248c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_66248cd
        mov eax, edx
        jmp public_66248a4
        public_66248cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_66248e1
        public_66248d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_66248d6
        public_66248e1 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_66248a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_66248ff
        mov dword ptr ds : [eax+4], ecx
        jmp public_6624916
        public_66248ff : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6624916 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6624923
        mov dword ptr ds : [edx+4], ecx
        jmp public_6624931
        public_6624923 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_662492e
        mov dword ptr ds : [edx], ecx
        jmp public_6624931
        public_662492e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6624931 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        jmp public_66249b8
        public_6624949 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6624954
        mov dword ptr ds : [ecx], eax
        jmp public_6624957
        public_6624954 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6624957 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6624987
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_662496e
        mov edx, dword ptr ds : [esi+4]
        jmp public_6624984
        public_662496e : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6624984
        public_6624979 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6624979
        public_6624984 : nop
        mov dword ptr ss : [ebp], edx
        public_6624987 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_66249b8
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_662499d
        mov edx, dword ptr ds : [esi+4]
        jmp public_66249b5
        public_662499d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_66249b5
        public_66249a9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_66249a9
        public_66249b5 : nop
        mov dword ptr ss : [ebp+8], edx
        public_66249b8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [ecx+0x14], bl
        jne public_6624c2d
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6624c2a
        public_66249d3 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6624c2a
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6624a92
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6624a3e
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624a12
        mov dword ptr ds : [esi+4], ecx
        public_6624a12 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624a25
        mov dword ptr ds : [esi+4], edx
        jmp public_6624a33
        public_6624a25 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6624a30
        mov dword ptr ds : [esi], edx
        jmp public_6624a33
        public_6624a30 : nop
        mov dword ptr ds : [esi+8], edx
        public_6624a33 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6624a3e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624a51
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6624afc
        public_6624a51 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624b2f
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624a78
        mov dword ptr ds : [esi+4], ecx
        public_6624a78 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624b14
        mov dword ptr ds : [esi+4], edx
        jmp public_6624b23
        public_6624a92 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6624ae5
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624ab8
        mov dword ptr ds : [esi+4], ecx
        public_6624ab8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624acb
        mov dword ptr ds : [esi+4], edx
        jmp public_6624ada
        public_6624acb : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6624ad8
        mov dword ptr ds : [esi+8], edx
        jmp public_6624ada
        public_6624ad8 : nop
        mov dword ptr ds : [esi], edx
        public_6624ada : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6624ae5 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624b8b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624b8b
        public_6624afc : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66249d3
        jmp public_6624c2a
        public_6624b14 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6624b21
        mov dword ptr ds : [esi+8], edx
        jmp public_6624b23
        public_6624b21 : nop
        mov dword ptr ds : [esi], edx
        public_6624b23 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6624b2f : nop
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
        je public_6624b59
        mov dword ptr ds : [esi+4], ecx
        public_6624b59 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624b71
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624c27
        public_6624b71 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6624b81
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624c27
        public_6624b81 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624c27
        public_6624b8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624bd9
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624bae
        mov dword ptr ds : [esi+4], ecx
        public_6624bae : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624bc1
        mov dword ptr ds : [esi+4], edx
        jmp public_6624bcf
        public_6624bc1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6624bcc
        mov dword ptr ds : [esi], edx
        jmp public_6624bcf
        public_6624bcc : nop
        mov dword ptr ds : [esi+8], edx
        public_6624bcf : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6624bd9 : nop
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
        je public_6624c02
        mov dword ptr ds : [esi+4], ecx
        public_6624c02 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624c15
        mov dword ptr ds : [esi+4], edx
        jmp public_6624c24
        public_6624c15 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6624c22
        mov dword ptr ds : [esi+8], edx
        jmp public_6624c24
        public_6624c22 : nop
        mov dword ptr ds : [esi], edx
        public_6624c24 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6624c27 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6624c2a : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6624c2d : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_66281d0
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
        UNREACHABLE_TRAP(0x6624880)
    }
}

#undef public_66248a4
#undef public_66248c2
#undef public_66248cd
#undef public_66248d6
#undef public_66248e1
#undef public_66248ff
#undef public_6624916
#undef public_6624923
#undef public_662492e
#undef public_6624931
#undef public_6624949
#undef public_6624954
#undef public_6624957
#undef public_662496e
#undef public_6624979
#undef public_6624984
#undef public_6624987
#undef public_662499d
#undef public_66249a9
#undef public_66249b5
#undef public_66249b8
#undef public_66249d3
#undef public_6624a12
#undef public_6624a25
#undef public_6624a30
#undef public_6624a33
#undef public_6624a3e
#undef public_6624a51
#undef public_6624a78
#undef public_6624a92
#undef public_6624ab8
#undef public_6624acb
#undef public_6624ad8
#undef public_6624ada
#undef public_6624ae5
#undef public_6624afc
#undef public_6624b14
#undef public_6624b21
#undef public_6624b23
#undef public_6624b2f
#undef public_6624b59
#undef public_6624b71
#undef public_6624b81
#undef public_6624b8b
#undef public_6624bae
#undef public_6624bc1
#undef public_6624bcc
#undef public_6624bcf
#undef public_6624bd9
#undef public_6624c02
#undef public_6624c15
#undef public_6624c22
#undef public_6624c24
#undef public_6624c27
#undef public_6624c2a
#undef public_6624c2d
