#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc9b0);
CLANG_FORWARD_PROC_SYMBOL(public_66fd070);
CLANG_FORWARD_PROC_SYMBOL(public_66fd080);
CLANG_FORWARD_PROC_SYMBOL(public_66fd450);
CLANG_FORWARD_PROC_SYMBOL(public_66fd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66fc9c0 _public_66fc9c0
#define public_66fc9f0 _public_66fc9f0
#define public_66fca0f _public_66fca0f
#define public_66fca34 _public_66fca34
#define public_66fca38 _public_66fca38
#define public_66fca58 _public_66fca58

PROC_DECLARE(0x66fc9b0, internal_66fc9b0, public_66fc9b0);
extern "C" NAKED register_t __cdecl internal_66fc9b0()
{
    __asm
    {
        mov ecx, offset public_67045f4
        jmp public_66fc9c0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_66fc9c0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_66fca34
        mov ecx, eax
        cmp eax, ecx
        jne public_66fca34
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_66fca0f
        nop 
        lea esp, ss:[esp]
        public_66fc9f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_66fd450
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6700710
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_66fc9f0
        public_66fca0f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_66fd070
        jmp public_66fca58
        public_66fca34 : nop
        cmp eax, edi
        je public_66fca58
        public_66fca38 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_66fd7e0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_66fd080
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_66fca38
        public_66fca58 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6700710
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6700710
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x66fc9b0)
    }
}

#undef public_66fc9c0
#undef public_66fc9f0
#undef public_66fca0f
#undef public_66fca34
#undef public_66fca38
#undef public_66fca58
