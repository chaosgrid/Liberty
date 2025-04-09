#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405550);
CLANG_FORWARD_PROC_SYMBOL(public_405800);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4055b9 _public_4055b9
#define public_4055cd _public_4055cd
#define public_4055d3 _public_4055d3
#define public_4055e1 _public_4055e1
#define public_405622 _public_405622
#define public_40563b _public_40563b
#define public_40564e _public_40564e
#define public_405659 _public_405659
#define public_40565c _public_40565c
#define public_405661 _public_405661
#define public_40568a _public_40568a
#define public_4056a3 _public_4056a3
#define public_4056b6 _public_4056b6
#define public_4056c0 _public_4056c0
#define public_4056e3 _public_4056e3
#define public_4056fb _public_4056fb
#define public_40570e _public_40570e
#define public_40571b _public_40571b
#define public_40571d _public_40571d
#define public_405723 _public_405723
#define public_40574c _public_40574c
#define public_40575f _public_40575f
#define public_40576a _public_40576a
#define public_40576d _public_40576d
#define public_40576f _public_40576f
#define public_405772 _public_405772
#define public_40577e _public_40577e

PROC_DECLARE(0x405550, internal_405550, public_405550);
extern "C" NAKED register_t __cdecl internal_405550()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x48
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x44], 0
        mov byte ptr ds : [ebx+0x45], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_405800
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4055b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4055b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4055b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4055d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_4055d3
        public_4055b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4055cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4055d3
        public_4055cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4055d3
        mov dword ptr ds : [eax], ebx
        public_4055d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_40577e
        public_4055e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_40577e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4056c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x44], 0
        jne public_405622
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_405772
        public_405622 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_405661
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_40563b
        mov dword ptr ds : [edx+4], eax
        public_40563b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_40564e
        mov dword ptr ds : [edx+4], ecx
        jmp public_40565c
        public_40564e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_405659
        mov dword ptr ds : [edx], ecx
        jmp public_40565c
        public_405659 : nop
        mov dword ptr ds : [edx+8], ecx
        public_40565c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_405661 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_40568a
        mov dword ptr ds : [edi+4], ecx
        public_40568a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4056a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40576f
        public_4056a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4056b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40576f
        public_4056b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40576f
        public_4056c0 : nop
        cmp byte ptr ds : [edx+0x44], 0
        jne public_4056e3
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_405772
        public_4056e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_405723
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4056fb
        mov dword ptr ds : [edx+4], eax
        public_4056fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_40570e
        mov dword ptr ds : [edx+4], ecx
        jmp public_40571d
        public_40570e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_40571b
        mov dword ptr ds : [edx+8], ecx
        jmp public_40571d
        public_40571b : nop
        mov dword ptr ds : [edx], ecx
        public_40571d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_405723 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_40574c
        mov dword ptr ds : [edi+4], ecx
        public_40574c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_40575f
        mov dword ptr ds : [edi+4], edx
        jmp public_40576d
        public_40575f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_40576a
        mov dword ptr ds : [edi], edx
        jmp public_40576d
        public_40576a : nop
        mov dword ptr ds : [edi+8], edx
        public_40576d : nop
        mov dword ptr ds : [edx], ecx
        public_40576f : nop
        mov dword ptr ds : [ecx+4], edx
        public_405772 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4055e1
        public_40577e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x405550)
    }
}

#undef public_4055b9
#undef public_4055cd
#undef public_4055d3
#undef public_4055e1
#undef public_405622
#undef public_40563b
#undef public_40564e
#undef public_405659
#undef public_40565c
#undef public_405661
#undef public_40568a
#undef public_4056a3
#undef public_4056b6
#undef public_4056c0
#undef public_4056e3
#undef public_4056fb
#undef public_40570e
#undef public_40571b
#undef public_40571d
#undef public_405723
#undef public_40574c
#undef public_40575f
#undef public_40576a
#undef public_40576d
#undef public_40576f
#undef public_405772
#undef public_40577e
