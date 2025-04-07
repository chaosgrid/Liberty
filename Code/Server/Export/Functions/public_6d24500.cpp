#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f680);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f850);

#define public_6d2453d _public_6d2453d
#define public_6d2453f _public_6d2453f
#define public_6d24548 _public_6d24548
#define public_6d24565 _public_6d24565
#define public_6d24570 _public_6d24570
#define public_6d24582 _public_6d24582
#define public_6d24589 _public_6d24589
#define public_6d245b0 _public_6d245b0
#define public_6d245b7 _public_6d245b7
#define public_6d245c6 _public_6d245c6
#define public_6d245dc _public_6d245dc
#define public_6d245eb _public_6d245eb
#define public_6d24606 _public_6d24606
#define public_6d2461b _public_6d2461b
#define public_6d2462f _public_6d2462f
#define public_6d24646 _public_6d24646
#define public_6d24657 _public_6d24657
#define public_6d24670 _public_6d24670
#define public_6d246ce _public_6d246ce
#define public_6d246d7 _public_6d246d7
#define public_6d24737 _public_6d24737

PROC_DECLARE(0x6d24500, internal_6d24500, public_6d24500);
extern "C" NAKED register_t __cdecl internal_6d24500()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d2453d
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d2453f
        public_6d2453d : nop
        mov eax, edx
        public_6d2453f : nop
        test eax, eax
        je public_6d24548
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        public_6d24548 : nop
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0x10]
        cmp edx, dword ptr ds : [esi+0xC]
        jne public_6d24565
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d24565 : nop
        mov ebx, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov ebp, dword ptr ds : [edi+0x14]
        je public_6d24589
        nop 
        public_6d24570 : nop
        push 4
        mov ecx, ebp
        call public_6d1f680
        test eax, eax
        je public_6d24582
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], ecx
        public_6d24582 : nop
        add esi, 0x20
        cmp esi, ebx
        jne public_6d24570
        public_6d24589 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [ebx+0x1008]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d24657
        public_6d245b0 : nop
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_6d245dc
        public_6d245b7 : nop
        push 4
        mov ecx, ebx
        call public_6d1f680
        test eax, eax
        je public_6d245c6
        mov dword ptr ds : [eax], esi
        public_6d245c6 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d2462f
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        jne public_6d245b7
        public_6d245dc : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d245eb
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, dword ptr ds : [edi+0x10]
        je public_6d24646
        public_6d245eb : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6d1f850
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        cmp ebx, esi
        mov ebp, dword ptr ds : [edi+0x14]
        je public_6d2461b
        public_6d24606 : nop
        push 4
        mov ecx, ebp
        sub esi, 0x20
        call public_6d1f7f0
        cmp esi, ebx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6d24606
        public_6d2461b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], ecx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d2462f : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [ebx+0x1008]
        je public_6d24657
        push 4
        mov ecx, ebx
        call public_6d1f7f0
        mov esi, dword ptr ds : [eax]
        public_6d24646 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6d2462f
        jmp public_6d245b0
        public_6d24657 : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp ebx, edx
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, 0xFFFFFFFC
        je public_6d246d7
        nop 
        lea esp, ss:[esp]
        public_6d24670 : nop
        mov ecx, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add ecx, ebp
        sub edx, 0x20
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], ecx
        jne public_6d246ce
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov ecx, esi
        public_6d246ce : nop
        cmp edx, ebx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+0xC], ecx
        jne public_6d24670
        public_6d246d7 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, ebp
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d24737
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov ecx, edx
        public_6d24737 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x10], edx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d24500)
    }
}

#undef public_6d2453d
#undef public_6d2453f
#undef public_6d24548
#undef public_6d24565
#undef public_6d24570
#undef public_6d24582
#undef public_6d24589
#undef public_6d245b0
#undef public_6d245b7
#undef public_6d245c6
#undef public_6d245dc
#undef public_6d245eb
#undef public_6d24606
#undef public_6d2461b
#undef public_6d2462f
#undef public_6d24646
#undef public_6d24657
#undef public_6d24670
#undef public_6d246ce
#undef public_6d246d7
#undef public_6d24737
