#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619800);
CLANG_FORWARD_PROC_SYMBOL(public_661a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661986d _public_661986d
#define public_6619881 _public_6619881
#define public_6619887 _public_6619887
#define public_6619895 _public_6619895
#define public_66198d6 _public_66198d6
#define public_66198ef _public_66198ef
#define public_6619902 _public_6619902
#define public_661990d _public_661990d
#define public_6619910 _public_6619910
#define public_6619915 _public_6619915
#define public_661993e _public_661993e
#define public_6619957 _public_6619957
#define public_661996a _public_661996a
#define public_6619974 _public_6619974
#define public_6619997 _public_6619997
#define public_66199af _public_66199af
#define public_66199c2 _public_66199c2
#define public_66199cf _public_66199cf
#define public_66199d1 _public_66199d1
#define public_66199d7 _public_66199d7
#define public_6619a00 _public_6619a00
#define public_6619a13 _public_6619a13
#define public_6619a1e _public_6619a1e
#define public_6619a21 _public_6619a21
#define public_6619a23 _public_6619a23
#define public_6619a26 _public_6619a26
#define public_6619a32 _public_6619a32

PROC_DECLARE(0x6619800, internal_6619800, public_6619800);
extern "C" NAKED register_t __cdecl internal_6619800()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_661a9b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_661986d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_661986d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_661986d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6619887
        mov dword ptr ds : [eax+8], ebx
        jmp public_6619887
        public_661986d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6619881
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6619887
        public_6619881 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6619887
        mov dword ptr ds : [eax], ebx
        public_6619887 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6619a32
        public_6619895 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6619a32
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6619974
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_66198d6
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6619a26
        public_66198d6 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6619915
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_66198ef
        mov dword ptr ds : [edx+4], eax
        public_66198ef : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6619902
        mov dword ptr ds : [edx+4], ecx
        jmp public_6619910
        public_6619902 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_661990d
        mov dword ptr ds : [edx], ecx
        jmp public_6619910
        public_661990d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6619910 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6619915 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_661993e
        mov dword ptr ds : [edi+4], ecx
        public_661993e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619957
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619a23
        public_6619957 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_661996a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619a23
        public_661996a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619a23
        public_6619974 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6619997
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6619a26
        public_6619997 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_66199d7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66199af
        mov dword ptr ds : [edx+4], eax
        public_66199af : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66199c2
        mov dword ptr ds : [edx+4], ecx
        jmp public_66199d1
        public_66199c2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_66199cf
        mov dword ptr ds : [edx+8], ecx
        jmp public_66199d1
        public_66199cf : nop
        mov dword ptr ds : [edx], ecx
        public_66199d1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_66199d7 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6619a00
        mov dword ptr ds : [edi+4], ecx
        public_6619a00 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619a13
        mov dword ptr ds : [edi+4], edx
        jmp public_6619a21
        public_6619a13 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6619a1e
        mov dword ptr ds : [edi], edx
        jmp public_6619a21
        public_6619a1e : nop
        mov dword ptr ds : [edi+8], edx
        public_6619a21 : nop
        mov dword ptr ds : [edx], ecx
        public_6619a23 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6619a26 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6619895
        public_6619a32 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6619800)
    }
}

#undef public_661986d
#undef public_6619881
#undef public_6619887
#undef public_6619895
#undef public_66198d6
#undef public_66198ef
#undef public_6619902
#undef public_661990d
#undef public_6619910
#undef public_6619915
#undef public_661993e
#undef public_6619957
#undef public_661996a
#undef public_6619974
#undef public_6619997
#undef public_66199af
#undef public_66199c2
#undef public_66199cf
#undef public_66199d1
#undef public_66199d7
#undef public_6619a00
#undef public_6619a13
#undef public_6619a1e
#undef public_6619a21
#undef public_6619a23
#undef public_6619a26
#undef public_6619a32
