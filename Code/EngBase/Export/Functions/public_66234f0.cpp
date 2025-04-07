#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66234f0);
CLANG_FORWARD_PROC_SYMBOL(public_6624130);
CLANG_FORWARD_PROC_SYMBOL(public_6624530);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6623523 _public_6623523
#define public_6623555 _public_6623555
#define public_662355e _public_662355e
#define public_6623567 _public_6623567
#define public_6623593 _public_6623593
#define public_6623597 _public_6623597
#define public_66235b7 _public_66235b7

PROC_DECLARE(0x66234f0, internal_66234f0, public_66234f0);
extern "C" NAKED register_t __cdecl internal_66234f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6623593
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6623593
        cmp ebx, eax
        jne public_6623593
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6623567
        public_6623523 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6624530
        mov eax, dword ptr ds : [public_662b198]
        mov edi, dword ptr ds : [edi]
        cmp eax, 0x40
        jge public_6623555
        mov ecx, dword ptr ds : [public_662b18c]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [public_662b198]
        inc eax
        mov dword ptr ds : [public_662b18c], ebx
        mov dword ptr ds : [public_662b198], eax
        jmp public_662355e
        public_6623555 : nop
        push ebx
        call public_66281d0
        add esp, 4
        public_662355e : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, edi
        cmp edi, eax
        jne public_6623523
        public_6623567 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        mov edx, dword ptr ds : [ecx]
        pop ebx
        mov dword ptr ds : [eax], edx
        ret 0xC
        public_6623593 : nop
        cmp ecx, ebx
        je public_66235b7
        public_6623597 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_66252f0
        lea eax, ss:[esp+0x18]
        push edi
        push eax
        mov ecx, esi
        call public_6624130
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6623597
        public_66235b7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66234f0)
    }
}

#undef public_6623523
#undef public_6623555
#undef public_662355e
#undef public_6623567
#undef public_6623593
#undef public_6623597
#undef public_66235b7
