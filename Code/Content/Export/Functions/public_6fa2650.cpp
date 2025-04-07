#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa2650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa26b9 _public_6fa26b9
#define public_6fa26cd _public_6fa26cd
#define public_6fa26d3 _public_6fa26d3
#define public_6fa26e1 _public_6fa26e1
#define public_6fa2722 _public_6fa2722
#define public_6fa273b _public_6fa273b
#define public_6fa274e _public_6fa274e
#define public_6fa2759 _public_6fa2759
#define public_6fa275c _public_6fa275c
#define public_6fa2761 _public_6fa2761
#define public_6fa278a _public_6fa278a
#define public_6fa27a3 _public_6fa27a3
#define public_6fa27b6 _public_6fa27b6
#define public_6fa27c0 _public_6fa27c0
#define public_6fa27e3 _public_6fa27e3
#define public_6fa27fb _public_6fa27fb
#define public_6fa280e _public_6fa280e
#define public_6fa281b _public_6fa281b
#define public_6fa281d _public_6fa281d
#define public_6fa2823 _public_6fa2823
#define public_6fa284c _public_6fa284c
#define public_6fa285f _public_6fa285f
#define public_6fa286a _public_6fa286a
#define public_6fa286d _public_6fa286d
#define public_6fa286f _public_6fa286f
#define public_6fa2872 _public_6fa2872
#define public_6fa287e _public_6fa287e

PROC_DECLARE(0x6fa2650, internal_6fa2650, public_6fa2650);
extern "C" NAKED register_t __cdecl internal_6fa2650()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x44
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x40], 0
        mov byte ptr ds : [ebx+0x41], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6fa4490
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6fa26b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6fa26b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6fa26b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6fa26d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa26d3
        public_6fa26b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6fa26cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6fa26d3
        public_6fa26cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6fa26d3
        mov dword ptr ds : [eax], ebx
        public_6fa26d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6fa287e
        public_6fa26e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6fa287e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6fa27c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6fa2722
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6fa2872
        public_6fa2722 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6fa2761
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa273b
        mov dword ptr ds : [edx+4], eax
        public_6fa273b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa274e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa275c
        public_6fa274e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6fa2759
        mov dword ptr ds : [edx], ecx
        jmp public_6fa275c
        public_6fa2759 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa275c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa2761 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa278a
        mov dword ptr ds : [edi+4], ecx
        public_6fa278a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa27a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa286f
        public_6fa27a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa27b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa286f
        public_6fa27b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa286f
        public_6fa27c0 : nop
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6fa27e3
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6fa2872
        public_6fa27e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6fa2823
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa27fb
        mov dword ptr ds : [edx+4], eax
        public_6fa27fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa280e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa281d
        public_6fa280e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6fa281b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa281d
        public_6fa281b : nop
        mov dword ptr ds : [edx], ecx
        public_6fa281d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa2823 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa284c
        mov dword ptr ds : [edi+4], ecx
        public_6fa284c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa285f
        mov dword ptr ds : [edi+4], edx
        jmp public_6fa286d
        public_6fa285f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6fa286a
        mov dword ptr ds : [edi], edx
        jmp public_6fa286d
        public_6fa286a : nop
        mov dword ptr ds : [edi+8], edx
        public_6fa286d : nop
        mov dword ptr ds : [edx], ecx
        public_6fa286f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa2872 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa26e1
        public_6fa287e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6fa2650)
    }
}

#undef public_6fa26b9
#undef public_6fa26cd
#undef public_6fa26d3
#undef public_6fa26e1
#undef public_6fa2722
#undef public_6fa273b
#undef public_6fa274e
#undef public_6fa2759
#undef public_6fa275c
#undef public_6fa2761
#undef public_6fa278a
#undef public_6fa27a3
#undef public_6fa27b6
#undef public_6fa27c0
#undef public_6fa27e3
#undef public_6fa27fb
#undef public_6fa280e
#undef public_6fa281b
#undef public_6fa281d
#undef public_6fa2823
#undef public_6fa284c
#undef public_6fa285f
#undef public_6fa286a
#undef public_6fa286d
#undef public_6fa286f
#undef public_6fa2872
#undef public_6fa287e
