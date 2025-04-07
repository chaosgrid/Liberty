#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4070);
CLANG_FORWARD_PROC_SYMBOL(public_65f68c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f69d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f40a0 _public_65f40a0
#define public_65f40d6 _public_65f40d6
#define public_65f4126 _public_65f4126
#define public_65f4136 _public_65f4136
#define public_65f4148 _public_65f4148
#define public_65f4159 _public_65f4159
#define public_65f417e _public_65f417e
#define public_65f4187 _public_65f4187
#define public_65f41b5 _public_65f41b5
#define public_65f41c0 _public_65f41c0

PROC_DECLARE(0x65f4070, internal_65f4070, public_65f4070);
extern "C" NAKED register_t __cdecl internal_65f4070()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        jle public_65f41c0
        mov edi, dword ptr ss : [esp+0x40]
        lea ebx, ds:[ebx]
        public_65f40a0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        imul esi, 0x34
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x44]
        push edx
        add ecx, esi
        call public_65f68c0
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x40]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        jne public_65f40d6
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f40d6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x28], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x3C]
        mov ebx, eax
        cmp ebx, 2
        jle public_65f4126
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push edi
        add ecx, esi
        call public_65f69d0
        public_65f4126 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_65f4136
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [edx], ebx
        jmp public_65f4159
        public_65f4136 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_65f4159
        jge public_65f4148
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [edx], ebx
        public_65f4148 : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp dword ptr ds : [eax], 3
        jl public_65f4159
        mov edx, eax
        mov dword ptr ds : [edx], 3
        public_65f4159 : nop
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jl public_65f40a0
        mov esi, dword ptr ss : [esp+0x44]
        cmp dword ptr ds : [esi], 3
        jl public_65f41c0
        mov ebp, dword ptr ss : [ebp+8]
        test ebp, ebp
        jne public_65f417e
        or ecx, 0xFFFFFFFF
        jmp public_65f4187
        public_65f417e : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+4]
        public_65f4187 : nop
        mov ebx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [public_6603140]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push 0
        or ebx, 0x108
        push ebx
        push 0x3F800000
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, eax
        je public_65f41c0
        jge public_65f41b5
        mov dword ptr ds : [esi], eax
        public_65f41b5 : nop
        cmp dword ptr ds : [esi], 3
        jl public_65f41c0
        mov dword ptr ds : [esi], 3
        public_65f41c0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x14
        UNREACHABLE_TRAP(0x65f4070)
    }
}

#undef public_65f40a0
#undef public_65f40d6
#undef public_65f4126
#undef public_65f4136
#undef public_65f4148
#undef public_65f4159
#undef public_65f417e
#undef public_65f4187
#undef public_65f41b5
#undef public_65f41c0
