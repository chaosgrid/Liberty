#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b730);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b810);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bae0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bef0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3b840 _public_6b3b840
#define public_6b3b85f _public_6b3b85f
#define public_6b3b884 _public_6b3b884
#define public_6b3b888 _public_6b3b888
#define public_6b3b8a8 _public_6b3b8a8

PROC_DECLARE(0x6b3b810, internal_6b3b810, public_6b3b810);
extern "C" NAKED register_t __cdecl internal_6b3b810()
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
        je public_6b3b884
        mov ecx, eax
        cmp eax, ecx
        jne public_6b3b884
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6b3b85f
        nop 
        lea esp, ss:[esp]
        public_6b3b840 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6b3beb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6b3b840
        public_6b3b85f : nop
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
        call public_6b3b730
        jmp public_6b3b8a8
        public_6b3b884 : nop
        cmp eax, edi
        je public_6b3b8a8
        public_6b3b888 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6b3bef0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6b3bae0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6b3b888
        public_6b3b8a8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6b6a092
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6b3b810)
    }
}

#undef public_6b3b840
#undef public_6b3b85f
#undef public_6b3b884
#undef public_6b3b888
#undef public_6b3b8a8
