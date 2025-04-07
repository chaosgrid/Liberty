#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab080);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eafb84 _public_6eafb84
#define public_6eafba2 _public_6eafba2
#define public_6eafbad _public_6eafbad
#define public_6eafbc0 _public_6eafbc0
#define public_6eafbce _public_6eafbce
#define public_6eafbea _public_6eafbea
#define public_6eafc01 _public_6eafc01
#define public_6eafc0e _public_6eafc0e
#define public_6eafc19 _public_6eafc19
#define public_6eafc1c _public_6eafc1c
#define public_6eafc40 _public_6eafc40
#define public_6eafc4b _public_6eafc4b
#define public_6eafc4e _public_6eafc4e
#define public_6eafc63 _public_6eafc63
#define public_6eafc71 _public_6eafc71
#define public_6eafc7f _public_6eafc7f
#define public_6eafc82 _public_6eafc82
#define public_6eafc96 _public_6eafc96
#define public_6eafca5 _public_6eafca5
#define public_6eafcb4 _public_6eafcb4
#define public_6eafcb7 _public_6eafcb7
#define public_6eafcd7 _public_6eafcd7
#define public_6eafd22 _public_6eafd22
#define public_6eafd35 _public_6eafd35
#define public_6eafd40 _public_6eafd40
#define public_6eafd43 _public_6eafd43
#define public_6eafd4e _public_6eafd4e
#define public_6eafd67 _public_6eafd67
#define public_6eafd97 _public_6eafd97
#define public_6eafdb1 _public_6eafdb1
#define public_6eafde0 _public_6eafde0
#define public_6eafdf3 _public_6eafdf3
#define public_6eafe00 _public_6eafe00
#define public_6eafe02 _public_6eafe02
#define public_6eafe0d _public_6eafe0d
#define public_6eafe2a _public_6eafe2a
#define public_6eafe45 _public_6eafe45
#define public_6eafe52 _public_6eafe52
#define public_6eafe54 _public_6eafe54
#define public_6eafe60 _public_6eafe60
#define public_6eafe96 _public_6eafe96
#define public_6eafeae _public_6eafeae
#define public_6eafebe _public_6eafebe
#define public_6eafec8 _public_6eafec8
#define public_6eafef4 _public_6eafef4
#define public_6eaff07 _public_6eaff07
#define public_6eaff12 _public_6eaff12
#define public_6eaff15 _public_6eaff15
#define public_6eaff1f _public_6eaff1f
#define public_6eaff54 _public_6eaff54
#define public_6eaff67 _public_6eaff67
#define public_6eaff74 _public_6eaff74
#define public_6eaff76 _public_6eaff76
#define public_6eaff79 _public_6eaff79
#define public_6eaff7c _public_6eaff7c
#define public_6eaff86 _public_6eaff86

PROC_DECLARE(0x6eafb60, internal_6eafb60, public_6eafb60);
extern "C" NAKED register_t __cdecl internal_6eafb60()
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
        call public_6eb1550
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eafba2
        mov eax, dword ptr ds : [esi+8]
        public_6eafb84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eafc40
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eafc4e
        public_6eafba2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eafbad
        mov eax, edx
        jmp public_6eafb84
        public_6eafbad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        jne public_6eafbce
        lea esp, ss:[esp]
        public_6eafbc0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        je public_6eafbc0
        public_6eafbce : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eafb84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eafbea
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eafc01
        public_6eafbea : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eafc01 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eafc0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eafc1c
        public_6eafc0e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eafc19
        mov dword ptr ds : [edx], ecx
        jmp public_6eafc1c
        public_6eafc19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eafc1c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xA4]
        mov dl, byte ptr ds : [ecx+0xA4]
        mov byte ptr ds : [ecx+0xA4], bl
        mov byte ptr ds : [esi+0xA4], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eafcb7
        public_6eafc40 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eafc4b
        mov dword ptr ds : [ecx], eax
        jmp public_6eafc4e
        public_6eafc4b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eafc4e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eafc82
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eafc63
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eafc7f
        public_6eafc63 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        mov edx, eax
        jne public_6eafc7f
        public_6eafc71 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        je public_6eafc71
        public_6eafc7f : nop
        mov dword ptr ss : [ebp], edx
        public_6eafc82 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eafcb7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eafc96
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eafcb4
        public_6eafc96 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        mov edx, eax
        jne public_6eafcb4
        public_6eafca5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        je public_6eafca5
        public_6eafcb4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eafcb7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0xA4]
        mov bl, 1
        cmp cl, bl
        jne public_6eaff86
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eaff7c
        public_6eafcd7 : nop
        cmp byte ptr ds : [eax+0xA4], bl
        jne public_6eaff7c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eafdb1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xA4]
        test dl, dl
        jne public_6eafd4e
        mov byte ptr ds : [ecx+0xA4], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eafd22
        mov dword ptr ds : [esi+4], ecx
        public_6eafd22 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eafd35
        mov dword ptr ds : [esi+4], edx
        jmp public_6eafd43
        public_6eafd35 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eafd40
        mov dword ptr ds : [esi], edx
        jmp public_6eafd43
        public_6eafd40 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eafd43 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eafd4e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA4], bl
        jne public_6eafd67
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA4], bl
        je public_6eafe2a
        public_6eafd67 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA4], bl
        jne public_6eafe60
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xA4], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xA4], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eafd97
        mov dword ptr ds : [esi+4], ecx
        public_6eafd97 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eafe45
        mov dword ptr ds : [esi+4], edx
        jmp public_6eafe54
        public_6eafdb1 : nop
        mov dl, byte ptr ds : [ecx+0xA4]
        test dl, dl
        jne public_6eafe0d
        mov byte ptr ds : [ecx+0xA4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eafde0
        mov dword ptr ds : [esi+4], ecx
        public_6eafde0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eafdf3
        mov dword ptr ds : [esi+4], edx
        jmp public_6eafe02
        public_6eafdf3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eafe00
        mov dword ptr ds : [esi+8], edx
        jmp public_6eafe02
        public_6eafe00 : nop
        mov dword ptr ds : [esi], edx
        public_6eafe02 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eafe0d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA4], bl
        jne public_6eafec8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA4], bl
        jne public_6eafec8
        public_6eafe2a : nop
        mov byte ptr ds : [ecx+0xA4], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eafcd7
        jmp public_6eaff7c
        public_6eafe45 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eafe52
        mov dword ptr ds : [esi+8], edx
        jmp public_6eafe54
        public_6eafe52 : nop
        mov dword ptr ds : [esi], edx
        public_6eafe54 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eafe60 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xA4]
        mov byte ptr ds : [ecx+0xA4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA4], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xA4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eafe96
        mov dword ptr ds : [esi+4], ecx
        public_6eafe96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eafeae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaff79
        public_6eafeae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eafebe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaff79
        public_6eafebe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaff79
        public_6eafec8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA4], bl
        jne public_6eaff1f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xA4], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xA4], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eafef4
        mov dword ptr ds : [esi+4], ecx
        public_6eafef4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaff07
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaff15
        public_6eaff07 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eaff12
        mov dword ptr ds : [esi], edx
        jmp public_6eaff15
        public_6eaff12 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eaff15 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eaff1f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xA4]
        mov byte ptr ds : [ecx+0xA4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA4], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xA4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaff54
        mov dword ptr ds : [esi+4], ecx
        public_6eaff54 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaff67
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaff76
        public_6eaff67 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eaff74
        mov dword ptr ds : [esi+8], edx
        jmp public_6eaff76
        public_6eaff74 : nop
        mov dword ptr ds : [esi], edx
        public_6eaff76 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eaff79 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eaff7c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xA4], bl
        public_6eaff86 : nop
        lea ecx, ds:[esi+0xC]
        call public_6eab080
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
        UNREACHABLE_TRAP(0x6eafb60)
    }
}

#undef public_6eafb84
#undef public_6eafba2
#undef public_6eafbad
#undef public_6eafbc0
#undef public_6eafbce
#undef public_6eafbea
#undef public_6eafc01
#undef public_6eafc0e
#undef public_6eafc19
#undef public_6eafc1c
#undef public_6eafc40
#undef public_6eafc4b
#undef public_6eafc4e
#undef public_6eafc63
#undef public_6eafc71
#undef public_6eafc7f
#undef public_6eafc82
#undef public_6eafc96
#undef public_6eafca5
#undef public_6eafcb4
#undef public_6eafcb7
#undef public_6eafcd7
#undef public_6eafd22
#undef public_6eafd35
#undef public_6eafd40
#undef public_6eafd43
#undef public_6eafd4e
#undef public_6eafd67
#undef public_6eafd97
#undef public_6eafdb1
#undef public_6eafde0
#undef public_6eafdf3
#undef public_6eafe00
#undef public_6eafe02
#undef public_6eafe0d
#undef public_6eafe2a
#undef public_6eafe45
#undef public_6eafe52
#undef public_6eafe54
#undef public_6eafe60
#undef public_6eafe96
#undef public_6eafeae
#undef public_6eafebe
#undef public_6eafec8
#undef public_6eafef4
#undef public_6eaff07
#undef public_6eaff12
#undef public_6eaff15
#undef public_6eaff1f
#undef public_6eaff54
#undef public_6eaff67
#undef public_6eaff74
#undef public_6eaff76
#undef public_6eaff79
#undef public_6eaff7c
#undef public_6eaff86
