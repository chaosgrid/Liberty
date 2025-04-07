#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);
CLANG_FORWARD_PROC_SYMBOL(public_6f440e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f44149 _public_6f44149
#define public_6f4415d _public_6f4415d
#define public_6f44163 _public_6f44163
#define public_6f44171 _public_6f44171
#define public_6f441b2 _public_6f441b2
#define public_6f441cb _public_6f441cb
#define public_6f441de _public_6f441de
#define public_6f441e9 _public_6f441e9
#define public_6f441ec _public_6f441ec
#define public_6f441f1 _public_6f441f1
#define public_6f4421a _public_6f4421a
#define public_6f44233 _public_6f44233
#define public_6f44246 _public_6f44246
#define public_6f44250 _public_6f44250
#define public_6f44273 _public_6f44273
#define public_6f4428b _public_6f4428b
#define public_6f4429e _public_6f4429e
#define public_6f442ab _public_6f442ab
#define public_6f442ad _public_6f442ad
#define public_6f442b3 _public_6f442b3
#define public_6f442dc _public_6f442dc
#define public_6f442ef _public_6f442ef
#define public_6f442fa _public_6f442fa
#define public_6f442fd _public_6f442fd
#define public_6f442ff _public_6f442ff
#define public_6f44302 _public_6f44302
#define public_6f4430e _public_6f4430e

PROC_DECLARE(0x6f440e0, internal_6f440e0, public_6f440e0);
extern "C" NAKED register_t __cdecl internal_6f440e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eb1810
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f44149
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f44149
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f44149
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f44163
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f44163
        public_6f44149 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4415d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f44163
        public_6f4415d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f44163
        mov dword ptr ds : [eax], ebx
        public_6f44163 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4430e
        public_6f44171 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6f4430e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f44250
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6f441b2
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f44302
        public_6f441b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f441f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f441cb
        mov dword ptr ds : [edx+4], eax
        public_6f441cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f441de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f441ec
        public_6f441de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f441e9
        mov dword ptr ds : [edx], ecx
        jmp public_6f441ec
        public_6f441e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f441ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f441f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4421a
        mov dword ptr ds : [edi+4], ecx
        public_6f4421a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f44233
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f442ff
        public_6f44233 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44246
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f442ff
        public_6f44246 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f442ff
        public_6f44250 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6f44273
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f44302
        public_6f44273 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f442b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4428b
        mov dword ptr ds : [edx+4], eax
        public_6f4428b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4429e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f442ad
        public_6f4429e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f442ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f442ad
        public_6f442ab : nop
        mov dword ptr ds : [edx], ecx
        public_6f442ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f442b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f442dc
        mov dword ptr ds : [edi+4], ecx
        public_6f442dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f442ef
        mov dword ptr ds : [edi+4], edx
        jmp public_6f442fd
        public_6f442ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f442fa
        mov dword ptr ds : [edi], edx
        jmp public_6f442fd
        public_6f442fa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f442fd : nop
        mov dword ptr ds : [edx], ecx
        public_6f442ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f44302 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f44171
        public_6f4430e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f440e0)
    }
}

#undef public_6f44149
#undef public_6f4415d
#undef public_6f44163
#undef public_6f44171
#undef public_6f441b2
#undef public_6f441cb
#undef public_6f441de
#undef public_6f441e9
#undef public_6f441ec
#undef public_6f441f1
#undef public_6f4421a
#undef public_6f44233
#undef public_6f44246
#undef public_6f44250
#undef public_6f44273
#undef public_6f4428b
#undef public_6f4429e
#undef public_6f442ab
#undef public_6f442ad
#undef public_6f442b3
#undef public_6f442dc
#undef public_6f442ef
#undef public_6f442fa
#undef public_6f442fd
#undef public_6f442ff
#undef public_6f44302
#undef public_6f4430e
