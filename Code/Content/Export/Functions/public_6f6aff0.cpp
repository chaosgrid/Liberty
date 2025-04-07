#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6aff0);

#define public_6f6b010 _public_6f6b010
#define public_6f6b043 _public_6f6b043
#define public_6f6b047 _public_6f6b047
#define public_6f6b04b _public_6f6b04b
#define public_6f6b04f _public_6f6b04f
#define public_6f6b051 _public_6f6b051
#define public_6f6b060 _public_6f6b060
#define public_6f6b070 _public_6f6b070
#define public_6f6b080 _public_6f6b080
#define public_6f6b09d _public_6f6b09d
#define public_6f6b0c5 _public_6f6b0c5
#define public_6f6b0d3 _public_6f6b0d3
#define public_6f6b0e9 _public_6f6b0e9

PROC_DECLARE(0x6f6aff0, internal_6f6aff0, public_6f6aff0);
extern "C" NAKED register_t __cdecl internal_6f6aff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        jle public_6f6b0e9
        push ebx
        push esi
        push edi
        lea ebx, ds:[ebx]
        public_6f6b010 : nop
        mov esi, dword ptr ss : [ebp]
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ss : [ebp+eax*4]
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [eax-4]
        mov eax, dword ptr ds : [esi+0x14C]
        mov ecx, dword ptr ds : [edx+0x14C]
        cmp eax, ecx
        mov ebx, dword ptr ds : [edi+0x14C]
        jge public_6f6b043
        cmp ecx, ebx
        jl public_6f6b051
        cmp eax, ebx
        jge public_6f6b047
        jmp public_6f6b04f
        public_6f6b043 : nop
        cmp eax, ebx
        jge public_6f6b04b
        public_6f6b047 : nop
        mov edx, esi
        jmp public_6f6b051
        public_6f6b04b : nop
        cmp ecx, ebx
        jge public_6f6b051
        public_6f6b04f : nop
        mov edx, edi
        public_6f6b051 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, edi
        mov esi, ebp
        lea esp, ss:[esp]
        public_6f6b060 : nop
        mov ecx, dword ptr ds : [edx+0x14C]
        mov ebx, dword ptr ds : [esi]
        cmp dword ptr ds : [ebx+0x14C], ecx
        jge public_6f6b080
        public_6f6b070 : nop
        mov ebx, dword ptr ds : [esi+4]
        add esi, 4
        cmp dword ptr ds : [ebx+0x14C], ecx
        jl public_6f6b070
        mov edi, edi
        public_6f6b080 : nop
        mov ebx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp ecx, dword ptr ds : [ebx+0x14C]
        jl public_6f6b080
        cmp eax, esi
        jbe public_6f6b09d
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [eax], ecx
        add esi, 4
        jmp public_6f6b060
        public_6f6b09d : nop
        mov ecx, edi
        mov edx, esi
        sub ecx, esi
        sub edx, ebp
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_6f6b0c5
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push edi
        push esi
        call public_6f6aff0
        mov dword ptr ss : [esp+0x28], esi
        mov edi, esi
        jmp public_6f6b0d3
        public_6f6b0c5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        push ebp
        call public_6f6aff0
        mov ebp, esi
        public_6f6b0d3 : nop
        mov eax, edi
        sub eax, ebp
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_6f6b010
        pop edi
        pop esi
        pop ebx
        public_6f6b0e9 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f6aff0)
    }
}

#undef public_6f6b010
#undef public_6f6b043
#undef public_6f6b047
#undef public_6f6b04b
#undef public_6f6b04f
#undef public_6f6b051
#undef public_6f6b060
#undef public_6f6b070
#undef public_6f6b080
#undef public_6f6b09d
#undef public_6f6b0c5
#undef public_6f6b0d3
#undef public_6f6b0e9
