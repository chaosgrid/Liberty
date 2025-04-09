#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46c8e4 _public_46c8e4
#define public_46c902 _public_46c902
#define public_46c90d _public_46c90d
#define public_46c916 _public_46c916
#define public_46c921 _public_46c921
#define public_46c93d _public_46c93d
#define public_46c954 _public_46c954
#define public_46c961 _public_46c961
#define public_46c96c _public_46c96c
#define public_46c96f _public_46c96f
#define public_46c987 _public_46c987
#define public_46c992 _public_46c992
#define public_46c995 _public_46c995
#define public_46c9aa _public_46c9aa
#define public_46c9b5 _public_46c9b5
#define public_46c9c0 _public_46c9c0
#define public_46c9c3 _public_46c9c3
#define public_46c9d7 _public_46c9d7
#define public_46c9e3 _public_46c9e3
#define public_46c9ef _public_46c9ef
#define public_46c9f2 _public_46c9f2
#define public_46ca10 _public_46ca10
#define public_46ca4f _public_46ca4f
#define public_46ca62 _public_46ca62
#define public_46ca6d _public_46ca6d
#define public_46ca70 _public_46ca70
#define public_46ca7b _public_46ca7b
#define public_46ca8e _public_46ca8e
#define public_46cab5 _public_46cab5
#define public_46cacf _public_46cacf
#define public_46caf5 _public_46caf5
#define public_46cb08 _public_46cb08
#define public_46cb15 _public_46cb15
#define public_46cb17 _public_46cb17
#define public_46cb22 _public_46cb22
#define public_46cb39 _public_46cb39
#define public_46cb51 _public_46cb51
#define public_46cb5e _public_46cb5e
#define public_46cb60 _public_46cb60
#define public_46cb6c _public_46cb6c
#define public_46cb96 _public_46cb96
#define public_46cbae _public_46cbae
#define public_46cbbe _public_46cbbe
#define public_46cbc8 _public_46cbc8
#define public_46cbeb _public_46cbeb
#define public_46cbfe _public_46cbfe
#define public_46cc09 _public_46cc09
#define public_46cc0c _public_46cc0c
#define public_46cc16 _public_46cc16
#define public_46cc3f _public_46cc3f
#define public_46cc52 _public_46cc52
#define public_46cc5f _public_46cc5f
#define public_46cc61 _public_46cc61
#define public_46cc64 _public_46cc64
#define public_46cc67 _public_46cc67
#define public_46cc6a _public_46cc6a

PROC_DECLARE(0x46c8c0, internal_46c8c0, public_46c8c0);
extern "C" NAKED register_t __cdecl internal_46c8c0()
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
        call public_52afa0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_46c902
        mov eax, dword ptr ds : [esi+8]
        public_46c8e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_46c987
        mov dword ptr ds : [ecx+4], eax
        jmp public_46c995
        public_46c902 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_46c90d
        mov eax, edx
        jmp public_46c8e4
        public_46c90d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_46c921
        public_46c916 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_46c916
        public_46c921 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_46c8e4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46c93d
        mov dword ptr ds : [eax+4], ecx
        jmp public_46c954
        public_46c93d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_46c954 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_46c961
        mov dword ptr ds : [edx+4], ecx
        jmp public_46c96f
        public_46c961 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_46c96c
        mov dword ptr ds : [edx], ecx
        jmp public_46c96f
        public_46c96c : nop
        mov dword ptr ds : [edx+8], ecx
        public_46c96f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_46c9f2
        public_46c987 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_46c992
        mov dword ptr ds : [ecx], eax
        jmp public_46c995
        public_46c992 : nop
        mov dword ptr ds : [ecx+8], eax
        public_46c995 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_46c9c3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46c9aa
        mov edx, dword ptr ds : [esi+4]
        jmp public_46c9c0
        public_46c9aa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_46c9c0
        public_46c9b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_46c9b5
        public_46c9c0 : nop
        mov dword ptr ss : [ebp], edx
        public_46c9c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_46c9f2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46c9d7
        mov edx, dword ptr ds : [esi+4]
        jmp public_46c9ef
        public_46c9d7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_46c9ef
        public_46c9e3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_46c9e3
        public_46c9ef : nop
        mov dword ptr ss : [ebp+8], edx
        public_46c9f2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_46cc6a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_46cc67
        nop 
        public_46ca10 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_46cc67
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46cacf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_46ca7b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46ca4f
        mov dword ptr ds : [esi+4], ecx
        public_46ca4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46ca62
        mov dword ptr ds : [esi+4], edx
        jmp public_46ca70
        public_46ca62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46ca6d
        mov dword ptr ds : [esi], edx
        jmp public_46ca70
        public_46ca6d : nop
        mov dword ptr ds : [esi+8], edx
        public_46ca70 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_46ca7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_46ca8e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_46cb39
        public_46ca8e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_46cb6c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46cab5
        mov dword ptr ds : [esi+4], ecx
        public_46cab5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46cb51
        mov dword ptr ds : [esi+4], edx
        jmp public_46cb60
        public_46cacf : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_46cb22
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46caf5
        mov dword ptr ds : [esi+4], ecx
        public_46caf5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46cb08
        mov dword ptr ds : [esi+4], edx
        jmp public_46cb17
        public_46cb08 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46cb15
        mov dword ptr ds : [esi+8], edx
        jmp public_46cb17
        public_46cb15 : nop
        mov dword ptr ds : [esi], edx
        public_46cb17 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_46cb22 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_46cbc8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_46cbc8
        public_46cb39 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_46ca10
        jmp public_46cc67
        public_46cb51 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46cb5e
        mov dword ptr ds : [esi+8], edx
        jmp public_46cb60
        public_46cb5e : nop
        mov dword ptr ds : [esi], edx
        public_46cb60 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_46cb6c : nop
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
        je public_46cb96
        mov dword ptr ds : [esi+4], ecx
        public_46cb96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46cbae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46cc64
        public_46cbae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46cbbe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46cc64
        public_46cbbe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46cc64
        public_46cbc8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_46cc16
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46cbeb
        mov dword ptr ds : [esi+4], ecx
        public_46cbeb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46cbfe
        mov dword ptr ds : [esi+4], edx
        jmp public_46cc0c
        public_46cbfe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46cc09
        mov dword ptr ds : [esi], edx
        jmp public_46cc0c
        public_46cc09 : nop
        mov dword ptr ds : [esi+8], edx
        public_46cc0c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_46cc16 : nop
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
        je public_46cc3f
        mov dword ptr ds : [esi+4], ecx
        public_46cc3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46cc52
        mov dword ptr ds : [esi+4], edx
        jmp public_46cc61
        public_46cc52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46cc5f
        mov dword ptr ds : [esi+8], edx
        jmp public_46cc61
        public_46cc5f : nop
        mov dword ptr ds : [esi], edx
        public_46cc61 : nop
        mov dword ptr ds : [edx+8], ecx
        public_46cc64 : nop
        mov dword ptr ds : [ecx+4], edx
        public_46cc67 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_46cc6a : nop
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
        UNREACHABLE_TRAP(0x46c8c0)
    }
}

#undef public_46c8e4
#undef public_46c902
#undef public_46c90d
#undef public_46c916
#undef public_46c921
#undef public_46c93d
#undef public_46c954
#undef public_46c961
#undef public_46c96c
#undef public_46c96f
#undef public_46c987
#undef public_46c992
#undef public_46c995
#undef public_46c9aa
#undef public_46c9b5
#undef public_46c9c0
#undef public_46c9c3
#undef public_46c9d7
#undef public_46c9e3
#undef public_46c9ef
#undef public_46c9f2
#undef public_46ca10
#undef public_46ca4f
#undef public_46ca62
#undef public_46ca6d
#undef public_46ca70
#undef public_46ca7b
#undef public_46ca8e
#undef public_46cab5
#undef public_46cacf
#undef public_46caf5
#undef public_46cb08
#undef public_46cb15
#undef public_46cb17
#undef public_46cb22
#undef public_46cb39
#undef public_46cb51
#undef public_46cb5e
#undef public_46cb60
#undef public_46cb6c
#undef public_46cb96
#undef public_46cbae
#undef public_46cbbe
#undef public_46cbc8
#undef public_46cbeb
#undef public_46cbfe
#undef public_46cc09
#undef public_46cc0c
#undef public_46cc16
#undef public_46cc3f
#undef public_46cc52
#undef public_46cc5f
#undef public_46cc61
#undef public_46cc64
#undef public_46cc67
#undef public_46cc6a
