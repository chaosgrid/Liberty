#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a76e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a7749 _public_5a7749
#define public_5a775d _public_5a775d
#define public_5a7763 _public_5a7763
#define public_5a7771 _public_5a7771
#define public_5a77b2 _public_5a77b2
#define public_5a77cb _public_5a77cb
#define public_5a77de _public_5a77de
#define public_5a77e9 _public_5a77e9
#define public_5a77ec _public_5a77ec
#define public_5a77f1 _public_5a77f1
#define public_5a781a _public_5a781a
#define public_5a7833 _public_5a7833
#define public_5a7846 _public_5a7846
#define public_5a7850 _public_5a7850
#define public_5a7873 _public_5a7873
#define public_5a788b _public_5a788b
#define public_5a789e _public_5a789e
#define public_5a78ab _public_5a78ab
#define public_5a78ad _public_5a78ad
#define public_5a78b3 _public_5a78b3
#define public_5a78dc _public_5a78dc
#define public_5a78ef _public_5a78ef
#define public_5a78fa _public_5a78fa
#define public_5a78fd _public_5a78fd
#define public_5a78ff _public_5a78ff
#define public_5a7902 _public_5a7902
#define public_5a790e _public_5a790e

PROC_DECLARE(0x5a76e0, internal_5a76e0, public_5a76e0);
extern "C" NAKED register_t __cdecl internal_5a76e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x58
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x54], 0
        mov byte ptr ds : [ebx+0x55], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_5a7cd0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_5a7749
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_5a7749
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_5a7749
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_5a7763
        mov dword ptr ds : [eax+8], ebx
        jmp public_5a7763
        public_5a7749 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_5a775d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_5a7763
        public_5a775d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_5a7763
        mov dword ptr ds : [eax], ebx
        public_5a7763 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_5a790e
        public_5a7771 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_5a790e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_5a7850
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x54], 0
        jne public_5a77b2
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_5a7902
        public_5a77b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5a77f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_5a77cb
        mov dword ptr ds : [edx+4], eax
        public_5a77cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5a77de
        mov dword ptr ds : [edx+4], ecx
        jmp public_5a77ec
        public_5a77de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_5a77e9
        mov dword ptr ds : [edx], ecx
        jmp public_5a77ec
        public_5a77e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5a77ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_5a77f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_5a781a
        mov dword ptr ds : [edi+4], ecx
        public_5a781a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5a7833
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a78ff
        public_5a7833 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5a7846
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a78ff
        public_5a7846 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a78ff
        public_5a7850 : nop
        cmp byte ptr ds : [edx+0x54], 0
        jne public_5a7873
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5a7902
        public_5a7873 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5a78b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_5a788b
        mov dword ptr ds : [edx+4], eax
        public_5a788b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5a789e
        mov dword ptr ds : [edx+4], ecx
        jmp public_5a78ad
        public_5a789e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5a78ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a78ad
        public_5a78ab : nop
        mov dword ptr ds : [edx], ecx
        public_5a78ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5a78b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_5a78dc
        mov dword ptr ds : [edi+4], ecx
        public_5a78dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5a78ef
        mov dword ptr ds : [edi+4], edx
        jmp public_5a78fd
        public_5a78ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_5a78fa
        mov dword ptr ds : [edi], edx
        jmp public_5a78fd
        public_5a78fa : nop
        mov dword ptr ds : [edi+8], edx
        public_5a78fd : nop
        mov dword ptr ds : [edx], ecx
        public_5a78ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_5a7902 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5a7771
        public_5a790e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x5a76e0)
    }
}

#undef public_5a7749
#undef public_5a775d
#undef public_5a7763
#undef public_5a7771
#undef public_5a77b2
#undef public_5a77cb
#undef public_5a77de
#undef public_5a77e9
#undef public_5a77ec
#undef public_5a77f1
#undef public_5a781a
#undef public_5a7833
#undef public_5a7846
#undef public_5a7850
#undef public_5a7873
#undef public_5a788b
#undef public_5a789e
#undef public_5a78ab
#undef public_5a78ad
#undef public_5a78b3
#undef public_5a78dc
#undef public_5a78ef
#undef public_5a78fa
#undef public_5a78fd
#undef public_5a78ff
#undef public_5a7902
#undef public_5a790e
