#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3c00);
CLANG_FORWARD_PROC_SYMBOL(public_4c5b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c5f20);
CLANG_FORWARD_PROC_SYMBOL(public_4c5fa0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c3c10 _public_4c3c10
#define public_4c3c40 _public_4c3c40
#define public_4c3c68 _public_4c3c68
#define public_4c3c8d _public_4c3c8d
#define public_4c3c91 _public_4c3c91
#define public_4c3cb1 _public_4c3cb1

PROC_DECLARE(0x4c3c00, internal_4c3c00, public_4c3c00);
extern "C" NAKED register_t __cdecl internal_4c3c00()
{
    __asm
    {
        mov ecx, offset public_67294c
        jmp public_4c3c10
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4c3c10 : nop
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
        je public_4c3c8d
        mov ecx, eax
        cmp eax, ecx
        jne public_4c3c8d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4c3c68
        nop 
        lea esp, ss:[esp]
        public_4c3c40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4c5f20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_4c5ff0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4c3c40
        public_4c3c68 : nop
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
        call public_53e430
        jmp public_4c3cb1
        public_4c3c8d : nop
        cmp eax, edi
        je public_4c3cb1
        public_4c3c91 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4c5fa0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_4c5b40
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4c3c91
        public_4c3cb1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4c3c00)
    }
}

#undef public_4c3c10
#undef public_4c3c40
#undef public_4c3c68
#undef public_4c3c8d
#undef public_4c3c91
#undef public_4c3cb1
