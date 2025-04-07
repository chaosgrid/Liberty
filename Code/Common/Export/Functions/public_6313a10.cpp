#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313a10);
CLANG_FORWARD_PROC_SYMBOL(public_6316e60);
CLANG_FORWARD_PROC_SYMBOL(public_6317300);
CLANG_FORWARD_PROC_SYMBOL(public_6318860);
CLANG_FORWARD_PROC_SYMBOL(public_631a6e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6313a40 _public_6313a40
#define public_6313a68 _public_6313a68
#define public_6313a8d _public_6313a8d
#define public_6313a91 _public_6313a91
#define public_6313ab1 _public_6313ab1

PROC_DECLARE(0x6313a10, internal_6313a10, public_6313a10);
extern "C" NAKED register_t __cdecl internal_6313a10()
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
        je public_6313a8d
        mov ecx, eax
        cmp eax, ecx
        jne public_6313a8d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6313a68
        nop 
        lea esp, ss:[esp]
        public_6313a40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318860
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_631a6e0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6313a40
        public_6313a68 : nop
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
        call public_632c410
        jmp public_6313ab1
        public_6313a8d : nop
        cmp eax, edi
        je public_6313ab1
        public_6313a91 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6317300
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6316e60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6313a91
        public_6313ab1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6313a10)
    }
}

#undef public_6313a40
#undef public_6313a68
#undef public_6313a8d
#undef public_6313a91
#undef public_6313ab1
