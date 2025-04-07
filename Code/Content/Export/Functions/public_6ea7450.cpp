#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7450);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ea74b9 _public_6ea74b9
#define public_6ea74cd _public_6ea74cd
#define public_6ea74d3 _public_6ea74d3
#define public_6ea74e1 _public_6ea74e1
#define public_6ea7522 _public_6ea7522
#define public_6ea753b _public_6ea753b
#define public_6ea754e _public_6ea754e
#define public_6ea7559 _public_6ea7559
#define public_6ea755c _public_6ea755c
#define public_6ea7561 _public_6ea7561
#define public_6ea758a _public_6ea758a
#define public_6ea75a3 _public_6ea75a3
#define public_6ea75b6 _public_6ea75b6
#define public_6ea75c0 _public_6ea75c0
#define public_6ea75e3 _public_6ea75e3
#define public_6ea75fb _public_6ea75fb
#define public_6ea760e _public_6ea760e
#define public_6ea761b _public_6ea761b
#define public_6ea761d _public_6ea761d
#define public_6ea7623 _public_6ea7623
#define public_6ea764c _public_6ea764c
#define public_6ea765f _public_6ea765f
#define public_6ea766a _public_6ea766a
#define public_6ea766d _public_6ea766d
#define public_6ea766f _public_6ea766f
#define public_6ea7672 _public_6ea7672
#define public_6ea767e _public_6ea767e

PROC_DECLARE(0x6ea7450, internal_6ea7450, public_6ea7450);
extern "C" NAKED register_t __cdecl internal_6ea7450()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x58
        mov esi, ecx
        call public_6fa912a
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
        call public_6ea7730
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ea74b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ea74b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ea74b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ea74d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ea74d3
        public_6ea74b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ea74cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ea74d3
        public_6ea74cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ea74d3
        mov dword ptr ds : [eax], ebx
        public_6ea74d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ea767e
        public_6ea74e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6ea767e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ea75c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x54], 0
        jne public_6ea7522
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ea7672
        public_6ea7522 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ea7561
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ea753b
        mov dword ptr ds : [edx+4], eax
        public_6ea753b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ea754e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ea755c
        public_6ea754e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ea7559
        mov dword ptr ds : [edx], ecx
        jmp public_6ea755c
        public_6ea7559 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ea755c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ea7561 : nop
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
        je public_6ea758a
        mov dword ptr ds : [edi+4], ecx
        public_6ea758a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ea75a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ea766f
        public_6ea75a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ea75b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ea766f
        public_6ea75b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ea766f
        public_6ea75c0 : nop
        cmp byte ptr ds : [edx+0x54], 0
        jne public_6ea75e3
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ea7672
        public_6ea75e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ea7623
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ea75fb
        mov dword ptr ds : [edx+4], eax
        public_6ea75fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ea760e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ea761d
        public_6ea760e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ea761b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ea761d
        public_6ea761b : nop
        mov dword ptr ds : [edx], ecx
        public_6ea761d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ea7623 : nop
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
        je public_6ea764c
        mov dword ptr ds : [edi+4], ecx
        public_6ea764c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ea765f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ea766d
        public_6ea765f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ea766a
        mov dword ptr ds : [edi], edx
        jmp public_6ea766d
        public_6ea766a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ea766d : nop
        mov dword ptr ds : [edx], ecx
        public_6ea766f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ea7672 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ea74e1
        public_6ea767e : nop
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
        UNREACHABLE_TRAP(0x6ea7450)
    }
}

#undef public_6ea74b9
#undef public_6ea74cd
#undef public_6ea74d3
#undef public_6ea74e1
#undef public_6ea7522
#undef public_6ea753b
#undef public_6ea754e
#undef public_6ea7559
#undef public_6ea755c
#undef public_6ea7561
#undef public_6ea758a
#undef public_6ea75a3
#undef public_6ea75b6
#undef public_6ea75c0
#undef public_6ea75e3
#undef public_6ea75fb
#undef public_6ea760e
#undef public_6ea761b
#undef public_6ea761d
#undef public_6ea7623
#undef public_6ea764c
#undef public_6ea765f
#undef public_6ea766a
#undef public_6ea766d
#undef public_6ea766f
#undef public_6ea7672
#undef public_6ea767e
