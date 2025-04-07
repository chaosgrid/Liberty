#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_627f620);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627ed14 _public_627ed14
#define public_627ed32 _public_627ed32
#define public_627ed3d _public_627ed3d
#define public_627ed46 _public_627ed46
#define public_627ed51 _public_627ed51
#define public_627ed6d _public_627ed6d
#define public_627ed84 _public_627ed84
#define public_627ed91 _public_627ed91
#define public_627ed9c _public_627ed9c
#define public_627ed9f _public_627ed9f
#define public_627edb7 _public_627edb7
#define public_627edc2 _public_627edc2
#define public_627edc5 _public_627edc5
#define public_627edda _public_627edda
#define public_627ede5 _public_627ede5
#define public_627edf0 _public_627edf0
#define public_627edf3 _public_627edf3
#define public_627ee07 _public_627ee07
#define public_627ee13 _public_627ee13
#define public_627ee1f _public_627ee1f
#define public_627ee22 _public_627ee22
#define public_627ee40 _public_627ee40
#define public_627ee7f _public_627ee7f
#define public_627ee92 _public_627ee92
#define public_627ee9d _public_627ee9d
#define public_627eea0 _public_627eea0
#define public_627eeab _public_627eeab
#define public_627eebe _public_627eebe
#define public_627eee5 _public_627eee5
#define public_627eeff _public_627eeff
#define public_627ef25 _public_627ef25
#define public_627ef38 _public_627ef38
#define public_627ef45 _public_627ef45
#define public_627ef47 _public_627ef47
#define public_627ef52 _public_627ef52
#define public_627ef69 _public_627ef69
#define public_627ef81 _public_627ef81
#define public_627ef8e _public_627ef8e
#define public_627ef90 _public_627ef90
#define public_627ef9c _public_627ef9c
#define public_627efc6 _public_627efc6
#define public_627efde _public_627efde
#define public_627efee _public_627efee
#define public_627eff8 _public_627eff8
#define public_627f01b _public_627f01b
#define public_627f02e _public_627f02e
#define public_627f039 _public_627f039
#define public_627f03c _public_627f03c
#define public_627f046 _public_627f046
#define public_627f06f _public_627f06f
#define public_627f082 _public_627f082
#define public_627f08f _public_627f08f
#define public_627f091 _public_627f091
#define public_627f094 _public_627f094
#define public_627f097 _public_627f097
#define public_627f09e _public_627f09e

PROC_DECLARE(0x627ecf0, internal_627ecf0, public_627ecf0);
extern "C" NAKED register_t __cdecl internal_627ecf0()
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
        call public_627f620
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_627ed32
        mov eax, dword ptr ds : [esi+8]
        public_627ed14 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_627edb7
        mov dword ptr ds : [ecx+4], eax
        jmp public_627edc5
        public_627ed32 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_627ed3d
        mov eax, edx
        jmp public_627ed14
        public_627ed3d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_627ed51
        public_627ed46 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_627ed46
        public_627ed51 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_627ed14
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ed6d
        mov dword ptr ds : [eax+4], ecx
        jmp public_627ed84
        public_627ed6d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_627ed84 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_627ed91
        mov dword ptr ds : [edx+4], ecx
        jmp public_627ed9f
        public_627ed91 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_627ed9c
        mov dword ptr ds : [edx], ecx
        jmp public_627ed9f
        public_627ed9c : nop
        mov dword ptr ds : [edx+8], ecx
        public_627ed9f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_627ee22
        public_627edb7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_627edc2
        mov dword ptr ds : [ecx], eax
        jmp public_627edc5
        public_627edc2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_627edc5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_627edf3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627edda
        mov edx, dword ptr ds : [esi+4]
        jmp public_627edf0
        public_627edda : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_627edf0
        public_627ede5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_627ede5
        public_627edf0 : nop
        mov dword ptr ss : [ebp], edx
        public_627edf3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_627ee22
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627ee07
        mov edx, dword ptr ds : [esi+4]
        jmp public_627ee1f
        public_627ee07 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_627ee1f
        public_627ee13 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_627ee13
        public_627ee1f : nop
        mov dword ptr ss : [ebp+8], edx
        public_627ee22 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_627f09e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_627f097
        nop 
        public_627ee40 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_627f097
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_627eeff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_627eeab
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ee7f
        mov dword ptr ds : [esi+4], ecx
        public_627ee7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ee92
        mov dword ptr ds : [esi+4], edx
        jmp public_627eea0
        public_627ee92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627ee9d
        mov dword ptr ds : [esi], edx
        jmp public_627eea0
        public_627ee9d : nop
        mov dword ptr ds : [esi+8], edx
        public_627eea0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_627eeab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_627eebe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_627ef69
        public_627eebe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_627ef9c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627eee5
        mov dword ptr ds : [esi+4], ecx
        public_627eee5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ef81
        mov dword ptr ds : [esi+4], edx
        jmp public_627ef90
        public_627eeff : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_627ef52
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ef25
        mov dword ptr ds : [esi+4], ecx
        public_627ef25 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ef38
        mov dword ptr ds : [esi+4], edx
        jmp public_627ef47
        public_627ef38 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ef45
        mov dword ptr ds : [esi+8], edx
        jmp public_627ef47
        public_627ef45 : nop
        mov dword ptr ds : [esi], edx
        public_627ef47 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_627ef52 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_627eff8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_627eff8
        public_627ef69 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_627ee40
        jmp public_627f097
        public_627ef81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ef8e
        mov dword ptr ds : [esi+8], edx
        jmp public_627ef90
        public_627ef8e : nop
        mov dword ptr ds : [esi], edx
        public_627ef90 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_627ef9c : nop
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
        je public_627efc6
        mov dword ptr ds : [esi+4], ecx
        public_627efc6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627efde
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627f094
        public_627efde : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627efee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627f094
        public_627efee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627f094
        public_627eff8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_627f046
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_627f01b
        mov dword ptr ds : [esi+4], ecx
        public_627f01b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627f02e
        mov dword ptr ds : [esi+4], edx
        jmp public_627f03c
        public_627f02e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627f039
        mov dword ptr ds : [esi], edx
        jmp public_627f03c
        public_627f039 : nop
        mov dword ptr ds : [esi+8], edx
        public_627f03c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_627f046 : nop
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
        je public_627f06f
        mov dword ptr ds : [esi+4], ecx
        public_627f06f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627f082
        mov dword ptr ds : [esi+4], edx
        jmp public_627f091
        public_627f082 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627f08f
        mov dword ptr ds : [esi+8], edx
        jmp public_627f091
        public_627f08f : nop
        mov dword ptr ds : [esi], edx
        public_627f091 : nop
        mov dword ptr ds : [edx+8], ecx
        public_627f094 : nop
        mov dword ptr ds : [ecx+4], edx
        public_627f097 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_627f09e : nop
        lea ecx, ds:[esi+0xC]
        call public_627dbb0
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x627ecf0)
    }
}

#undef public_627ed14
#undef public_627ed32
#undef public_627ed3d
#undef public_627ed46
#undef public_627ed51
#undef public_627ed6d
#undef public_627ed84
#undef public_627ed91
#undef public_627ed9c
#undef public_627ed9f
#undef public_627edb7
#undef public_627edc2
#undef public_627edc5
#undef public_627edda
#undef public_627ede5
#undef public_627edf0
#undef public_627edf3
#undef public_627ee07
#undef public_627ee13
#undef public_627ee1f
#undef public_627ee22
#undef public_627ee40
#undef public_627ee7f
#undef public_627ee92
#undef public_627ee9d
#undef public_627eea0
#undef public_627eeab
#undef public_627eebe
#undef public_627eee5
#undef public_627eeff
#undef public_627ef25
#undef public_627ef38
#undef public_627ef45
#undef public_627ef47
#undef public_627ef52
#undef public_627ef69
#undef public_627ef81
#undef public_627ef8e
#undef public_627ef90
#undef public_627ef9c
#undef public_627efc6
#undef public_627efde
#undef public_627efee
#undef public_627eff8
#undef public_627f01b
#undef public_627f02e
#undef public_627f039
#undef public_627f03c
#undef public_627f046
#undef public_627f06f
#undef public_627f082
#undef public_627f08f
#undef public_627f091
#undef public_627f094
#undef public_627f097
#undef public_627f09e
