#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619240);
CLANG_FORWARD_PROC_SYMBOL(public_661a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66192ad _public_66192ad
#define public_66192c1 _public_66192c1
#define public_66192c7 _public_66192c7
#define public_66192d5 _public_66192d5
#define public_6619316 _public_6619316
#define public_661932f _public_661932f
#define public_6619342 _public_6619342
#define public_661934d _public_661934d
#define public_6619350 _public_6619350
#define public_6619355 _public_6619355
#define public_661937e _public_661937e
#define public_6619397 _public_6619397
#define public_66193aa _public_66193aa
#define public_66193b4 _public_66193b4
#define public_66193d7 _public_66193d7
#define public_66193ef _public_66193ef
#define public_6619402 _public_6619402
#define public_661940f _public_661940f
#define public_6619411 _public_6619411
#define public_6619417 _public_6619417
#define public_6619440 _public_6619440
#define public_6619453 _public_6619453
#define public_661945e _public_661945e
#define public_6619461 _public_6619461
#define public_6619463 _public_6619463
#define public_6619466 _public_6619466
#define public_6619472 _public_6619472

PROC_DECLARE(0x6619240, internal_6619240, public_6619240);
extern "C" NAKED register_t __cdecl internal_6619240()
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
        je public_66192ad
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_66192ad
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jl public_66192ad
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_66192c7
        mov dword ptr ds : [eax+8], ebx
        jmp public_66192c7
        public_66192ad : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_66192c1
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_66192c7
        public_66192c1 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_66192c7
        mov dword ptr ds : [eax], ebx
        public_66192c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6619472
        public_66192d5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6619472
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_66193b4
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6619316
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6619466
        public_6619316 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6619355
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_661932f
        mov dword ptr ds : [edx+4], eax
        public_661932f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6619342
        mov dword ptr ds : [edx+4], ecx
        jmp public_6619350
        public_6619342 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_661934d
        mov dword ptr ds : [edx], ecx
        jmp public_6619350
        public_661934d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6619350 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6619355 : nop
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
        je public_661937e
        mov dword ptr ds : [edi+4], ecx
        public_661937e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619397
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619463
        public_6619397 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66193aa
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619463
        public_66193aa : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619463
        public_66193b4 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_66193d7
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6619466
        public_66193d7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6619417
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66193ef
        mov dword ptr ds : [edx+4], eax
        public_66193ef : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6619402
        mov dword ptr ds : [edx+4], ecx
        jmp public_6619411
        public_6619402 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_661940f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619411
        public_661940f : nop
        mov dword ptr ds : [edx], ecx
        public_6619411 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6619417 : nop
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
        je public_6619440
        mov dword ptr ds : [edi+4], ecx
        public_6619440 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619453
        mov dword ptr ds : [edi+4], edx
        jmp public_6619461
        public_6619453 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_661945e
        mov dword ptr ds : [edi], edx
        jmp public_6619461
        public_661945e : nop
        mov dword ptr ds : [edi+8], edx
        public_6619461 : nop
        mov dword ptr ds : [edx], ecx
        public_6619463 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6619466 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66192d5
        public_6619472 : nop
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
        UNREACHABLE_TRAP(0x6619240)
    }
}

#undef public_66192ad
#undef public_66192c1
#undef public_66192c7
#undef public_66192d5
#undef public_6619316
#undef public_661932f
#undef public_6619342
#undef public_661934d
#undef public_6619350
#undef public_6619355
#undef public_661937e
#undef public_6619397
#undef public_66193aa
#undef public_66193b4
#undef public_66193d7
#undef public_66193ef
#undef public_6619402
#undef public_661940f
#undef public_6619411
#undef public_6619417
#undef public_6619440
#undef public_6619453
#undef public_661945e
#undef public_6619461
#undef public_6619463
#undef public_6619466
#undef public_6619472
