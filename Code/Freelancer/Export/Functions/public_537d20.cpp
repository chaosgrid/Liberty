#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537d20);

#define public_537d45 _public_537d45
#define public_537d50 _public_537d50
#define public_537dbc _public_537dbc
#define public_537dd1 _public_537dd1
#define public_537e23 _public_537e23
#define public_537e38 _public_537e38
#define public_537e8a _public_537e8a
#define public_537e9f _public_537e9f
#define public_537eef _public_537eef
#define public_537f05 _public_537f05
#define public_537f31 _public_537f31

PROC_DECLARE(0x537d20, internal_537d20, public_537d20);
extern "C" NAKED register_t __cdecl internal_537d20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x1C]
        push ebp
        push esi
        xor esi, esi
        cmp eax, edx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edx
        jl public_537f05
        jmp public_537d50
        public_537d45 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_537d50 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [ecx+8]
        sub ebp, dword ptr ds : [ebx+0x14]
        mov eax, ecx
        mov eax, dword ptr ds : [eax+0xC]
        sub eax, dword ptr ds : [ebx+0x18]
        cmp ebp, edx
        mov dword ptr ss : [esp+0x18], eax
        jge public_537e38
        cmp eax, edx
        jge public_537dd1
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, esi
        jne public_537dbc
        mov ecx, dword ptr ds : [edi+0x3404]
        cmp ecx, esi
        je public_537dd1
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x3404], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [ebx+0x1C]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ds : [ebx+0x14]
        sub edx, eax
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        sub eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x18], eax
        public_537dbc : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push ecx
        mov ecx, edi
        call public_537d20
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_537dd1 : nop
        mov ecx, eax
        neg ecx
        cmp ecx, edx
        jge public_537e38
        mov ecx, dword ptr ds : [ebx+0xC]
        cmp ecx, esi
        jne public_537e23
        mov ecx, dword ptr ds : [edi+0x3404]
        cmp ecx, esi
        je public_537e38
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x3404], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [ebx+0x1C]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ds : [ebx+0x14]
        sub edx, eax
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        add eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x18], eax
        public_537e23 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push ecx
        mov ecx, edi
        call public_537d20
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_537e38 : nop
        neg ebp
        cmp ebp, edx
        jge public_537f31
        cmp eax, edx
        jge public_537e9f
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, esi
        jne public_537e8a
        mov ecx, dword ptr ds : [edi+0x3404]
        cmp ecx, esi
        je public_537e9f
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x3404], ebp
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [ebx+0x1C]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ds : [ebx+0x14]
        add edx, eax
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        sub eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x18], eax
        public_537e8a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push ecx
        mov ecx, edi
        call public_537d20
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_537e9f : nop
        neg eax
        cmp eax, edx
        jge public_537f31
        mov ecx, dword ptr ds : [ebx+8]
        cmp ecx, esi
        jne public_537eef
        mov ecx, dword ptr ds : [edi+0x3404]
        cmp ecx, esi
        je public_537f31
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x3404], eax
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [ebx+0x1C]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ds : [ebx+0x14]
        add edx, eax
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        add eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x18], eax
        public_537eef : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+0x10]
        cmp dword ptr ds : [ecx+0x1C], eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0x10], eax
        jge public_537d45
        public_537f05 : nop
        mov eax, dword ptr ds : [edi+0x1400]
        cmp eax, esi
        je public_537f31
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x1400], ecx
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ebx+0x10], eax
        public_537f31 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x537d20)
    }
}

#undef public_537d45
#undef public_537d50
#undef public_537dbc
#undef public_537dd1
#undef public_537e23
#undef public_537e38
#undef public_537e8a
#undef public_537e9f
#undef public_537eef
#undef public_537f05
#undef public_537f31
