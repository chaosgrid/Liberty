#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d06050);
CLANG_FORWARD_PROC_SYMBOL(public_6d069b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d03f20 _public_6d03f20
#define public_6d03f48 _public_6d03f48
#define public_6d03f6d _public_6d03f6d
#define public_6d03f71 _public_6d03f71
#define public_6d03f91 _public_6d03f91

PROC_DECLARE(0x6d03ef0, internal_6d03ef0, public_6d03ef0);
extern "C" NAKED register_t __cdecl internal_6d03ef0()
{
    __asm
    {
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
        je public_6d03f6d
        mov ecx, eax
        cmp eax, ecx
        jne public_6d03f6d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d03f48
        nop 
        lea esp, ss:[esp]
        public_6d03f20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d06050
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6d069b0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d03f20
        public_6d03f48 : nop
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
        call public_6d5c540
        jmp public_6d03f91
        public_6d03f6d : nop
        cmp eax, edi
        je public_6d03f91
        public_6d03f71 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d05d40
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d058a0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d03f71
        public_6d03f91 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d03ef0)
    }
}

#undef public_6d03f20
#undef public_6d03f48
#undef public_6d03f6d
#undef public_6d03f71
#undef public_6d03f91
