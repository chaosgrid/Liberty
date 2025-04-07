#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4db40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4db64 _public_6f4db64
#define public_6f4db82 _public_6f4db82
#define public_6f4db8d _public_6f4db8d
#define public_6f4db96 _public_6f4db96
#define public_6f4dba1 _public_6f4dba1
#define public_6f4dbbd _public_6f4dbbd
#define public_6f4dbd4 _public_6f4dbd4
#define public_6f4dbe1 _public_6f4dbe1
#define public_6f4dbec _public_6f4dbec
#define public_6f4dbef _public_6f4dbef
#define public_6f4dc07 _public_6f4dc07
#define public_6f4dc12 _public_6f4dc12
#define public_6f4dc15 _public_6f4dc15
#define public_6f4dc2a _public_6f4dc2a
#define public_6f4dc35 _public_6f4dc35
#define public_6f4dc40 _public_6f4dc40
#define public_6f4dc43 _public_6f4dc43
#define public_6f4dc57 _public_6f4dc57
#define public_6f4dc63 _public_6f4dc63
#define public_6f4dc6f _public_6f4dc6f
#define public_6f4dc72 _public_6f4dc72
#define public_6f4dc90 _public_6f4dc90
#define public_6f4dccf _public_6f4dccf
#define public_6f4dce2 _public_6f4dce2
#define public_6f4dced _public_6f4dced
#define public_6f4dcf0 _public_6f4dcf0
#define public_6f4dcfb _public_6f4dcfb
#define public_6f4dd0e _public_6f4dd0e
#define public_6f4dd35 _public_6f4dd35
#define public_6f4dd4f _public_6f4dd4f
#define public_6f4dd75 _public_6f4dd75
#define public_6f4dd88 _public_6f4dd88
#define public_6f4dd95 _public_6f4dd95
#define public_6f4dd97 _public_6f4dd97
#define public_6f4dda2 _public_6f4dda2
#define public_6f4ddb9 _public_6f4ddb9
#define public_6f4ddd1 _public_6f4ddd1
#define public_6f4ddde _public_6f4ddde
#define public_6f4dde0 _public_6f4dde0
#define public_6f4ddec _public_6f4ddec
#define public_6f4de16 _public_6f4de16
#define public_6f4de2e _public_6f4de2e
#define public_6f4de3e _public_6f4de3e
#define public_6f4de48 _public_6f4de48
#define public_6f4de6b _public_6f4de6b
#define public_6f4de7e _public_6f4de7e
#define public_6f4de89 _public_6f4de89
#define public_6f4de8c _public_6f4de8c
#define public_6f4de96 _public_6f4de96
#define public_6f4debf _public_6f4debf
#define public_6f4ded2 _public_6f4ded2
#define public_6f4dedf _public_6f4dedf
#define public_6f4dee1 _public_6f4dee1
#define public_6f4dee4 _public_6f4dee4
#define public_6f4dee7 _public_6f4dee7
#define public_6f4deee _public_6f4deee

PROC_DECLARE(0x6f4db40, internal_6f4db40, public_6f4db40);
extern "C" NAKED register_t __cdecl internal_6f4db40()
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
        call public_6f03670
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f4db82
        mov eax, dword ptr ds : [esi+8]
        public_6f4db64 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f4dc07
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f4dc15
        public_6f4db82 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4db8d
        mov eax, edx
        jmp public_6f4db64
        public_6f4db8d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f4dba1
        public_6f4db96 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f4db96
        public_6f4dba1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f4db64
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4dbbd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f4dbd4
        public_6f4dbbd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f4dbd4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f4dbe1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4dbef
        public_6f4dbe1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4dbec
        mov dword ptr ds : [edx], ecx
        jmp public_6f4dbef
        public_6f4dbec : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4dbef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f4dc72
        public_6f4dc07 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f4dc12
        mov dword ptr ds : [ecx], eax
        jmp public_6f4dc15
        public_6f4dc12 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f4dc15 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f4dc43
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4dc2a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4dc40
        public_6f4dc2a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f4dc40
        public_6f4dc35 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f4dc35
        public_6f4dc40 : nop
        mov dword ptr ss : [ebp], edx
        public_6f4dc43 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f4dc72
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4dc57
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4dc6f
        public_6f4dc57 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f4dc6f
        public_6f4dc63 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f4dc63
        public_6f4dc6f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f4dc72 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6f4deee
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f4dee7
        nop 
        public_6f4dc90 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f4dee7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4dd4f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4dcfb
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4dccf
        mov dword ptr ds : [esi+4], ecx
        public_6f4dccf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4dce2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4dcf0
        public_6f4dce2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4dced
        mov dword ptr ds : [esi], edx
        jmp public_6f4dcf0
        public_6f4dced : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4dcf0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4dcfb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4dd0e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f4ddb9
        public_6f4dd0e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4ddec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4dd35
        mov dword ptr ds : [esi+4], ecx
        public_6f4dd35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ddd1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4dde0
        public_6f4dd4f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4dda2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4dd75
        mov dword ptr ds : [esi+4], ecx
        public_6f4dd75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4dd88
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4dd97
        public_6f4dd88 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4dd95
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4dd97
        public_6f4dd95 : nop
        mov dword ptr ds : [esi], edx
        public_6f4dd97 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f4dda2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4de48
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4de48
        public_6f4ddb9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f4dc90
        jmp public_6f4dee7
        public_6f4ddd1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4ddde
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4dde0
        public_6f4ddde : nop
        mov dword ptr ds : [esi], edx
        public_6f4dde0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4ddec : nop
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
        je public_6f4de16
        mov dword ptr ds : [esi+4], ecx
        public_6f4de16 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4de2e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4dee4
        public_6f4de2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4de3e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4dee4
        public_6f4de3e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4dee4
        public_6f4de48 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4de96
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4de6b
        mov dword ptr ds : [esi+4], ecx
        public_6f4de6b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4de7e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4de8c
        public_6f4de7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4de89
        mov dword ptr ds : [esi], edx
        jmp public_6f4de8c
        public_6f4de89 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4de8c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f4de96 : nop
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
        je public_6f4debf
        mov dword ptr ds : [esi+4], ecx
        public_6f4debf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ded2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4dee1
        public_6f4ded2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4dedf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4dee1
        public_6f4dedf : nop
        mov dword ptr ds : [esi], edx
        public_6f4dee1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4dee4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f4dee7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6f4deee : nop
        lea ecx, ds:[esi+0xC]
        call public_6f4cf10
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
        UNREACHABLE_TRAP(0x6f4db40)
    }
}

#undef public_6f4db64
#undef public_6f4db82
#undef public_6f4db8d
#undef public_6f4db96
#undef public_6f4dba1
#undef public_6f4dbbd
#undef public_6f4dbd4
#undef public_6f4dbe1
#undef public_6f4dbec
#undef public_6f4dbef
#undef public_6f4dc07
#undef public_6f4dc12
#undef public_6f4dc15
#undef public_6f4dc2a
#undef public_6f4dc35
#undef public_6f4dc40
#undef public_6f4dc43
#undef public_6f4dc57
#undef public_6f4dc63
#undef public_6f4dc6f
#undef public_6f4dc72
#undef public_6f4dc90
#undef public_6f4dccf
#undef public_6f4dce2
#undef public_6f4dced
#undef public_6f4dcf0
#undef public_6f4dcfb
#undef public_6f4dd0e
#undef public_6f4dd35
#undef public_6f4dd4f
#undef public_6f4dd75
#undef public_6f4dd88
#undef public_6f4dd95
#undef public_6f4dd97
#undef public_6f4dda2
#undef public_6f4ddb9
#undef public_6f4ddd1
#undef public_6f4ddde
#undef public_6f4dde0
#undef public_6f4ddec
#undef public_6f4de16
#undef public_6f4de2e
#undef public_6f4de3e
#undef public_6f4de48
#undef public_6f4de6b
#undef public_6f4de7e
#undef public_6f4de89
#undef public_6f4de8c
#undef public_6f4de96
#undef public_6f4debf
#undef public_6f4ded2
#undef public_6f4dedf
#undef public_6f4dee1
#undef public_6f4dee4
#undef public_6f4dee7
#undef public_6f4deee
