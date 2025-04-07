#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6be1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1db0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2180);
CLANG_FORWARD_PROC_SYMBOL(public_6be21c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be1b10 _public_6be1b10
#define public_6be1b2f _public_6be1b2f
#define public_6be1b54 _public_6be1b54
#define public_6be1b58 _public_6be1b58
#define public_6be1b78 _public_6be1b78

PROC_DECLARE(0x6be1ae0, internal_6be1ae0, public_6be1ae0);
extern "C" NAKED register_t __cdecl internal_6be1ae0()
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
        je public_6be1b54
        mov ecx, eax
        cmp eax, ecx
        jne public_6be1b54
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6be1b2f
        nop 
        lea esp, ss:[esp]
        public_6be1b10 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6be2180
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6be1b10
        public_6be1b2f : nop
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
        call public_6be1a00
        jmp public_6be1b78
        public_6be1b54 : nop
        cmp eax, edi
        je public_6be1b78
        public_6be1b58 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6be21c0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6be1db0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6be1b58
        public_6be1b78 : nop
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
        UNREACHABLE_TRAP(0x6be1ae0)
    }
}

#undef public_6be1b10
#undef public_6be1b2f
#undef public_6be1b54
#undef public_6be1b58
#undef public_6be1b78
