#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bed8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bedb20);
CLANG_FORWARD_PROC_SYMBOL(public_6bedf50);
CLANG_FORWARD_PROC_SYMBOL(public_6bee320);
CLANG_FORWARD_PROC_SYMBOL(public_6bee4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bed4c0 _public_6bed4c0
#define public_6bed4f0 _public_6bed4f0
#define public_6bed518 _public_6bed518
#define public_6bed53d _public_6bed53d
#define public_6bed541 _public_6bed541
#define public_6bed561 _public_6bed561

PROC_DECLARE(0x6bed4b0, internal_6bed4b0, public_6bed4b0);
extern "C" NAKED register_t __cdecl internal_6bed4b0()
{
    __asm
    {
        mov ecx, offset public_6c13bbc
        jmp public_6bed4c0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6bed4c0 : nop
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
        je public_6bed53d
        mov ecx, eax
        cmp eax, ecx
        jne public_6bed53d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6bed518
        nop 
        lea esp, ss:[esp]
        public_6bed4f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6bedf50
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6bee4d0
        push ebx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6bed4f0
        public_6bed518 : nop
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
        call public_6bed8c0
        jmp public_6bed561
        public_6bed53d : nop
        cmp eax, edi
        je public_6bed561
        public_6bed541 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6bee320
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6bedb20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6bed541
        public_6bed561 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6c09aaa
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6bed4b0)
    }
}

#undef public_6bed4c0
#undef public_6bed4f0
#undef public_6bed518
#undef public_6bed53d
#undef public_6bed541
#undef public_6bed561
